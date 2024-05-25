// Fill out your copyright notice in the Description page of Project Settings.


#include "VRRootComponent.h"
#include "VREntityCharacter.h"

UVRRootComponent::UVRRootComponent(const FObjectInitializer& ObjectInitializer) : UCapsuleComponent(ObjectInitializer)
{

}

void UVRRootComponent::SetupRoomscale(USceneComponent* Origin, UCameraComponent* Camera)
{
	TrackedOrigin = Origin;
	TrackedCamera = Camera;
}

void UVRRootComponent::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(MemberHandle, this, &UVRRootComponent::UpdateRoomscaleMovement, TrackingRate, true, 1.0f);
}

void UVRRootComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UWorld* World = GetWorld();
	if (World == nullptr)
	{
		Super::EndPlay(EndPlayReason);
		return;
	}

	World->GetTimerManager().ClearTimer(MemberHandle);

	Super::EndPlay(EndPlayReason);
}

void UVRRootComponent::UpdateRoomscaleMovement()
{
	DisplayTrackingDebug(true);
	
	if (bTrackRoomscaleMovement)
	{
		FVector CameraLocation = TrackedCamera->GetComponentLocation();
		FVector RootLocation = GetComponentLocation();
		FVector LocationDifference = CameraLocation - RootLocation;
		LocationDifference.Z = 0.0;

		AddWorldOffset(LocationDifference, false, nullptr, ETeleportType::TeleportPhysics);
		TrackedOrigin->AddWorldOffset(-LocationDifference, false, nullptr, ETeleportType::TeleportPhysics);
	}
	
	DisplayTrackingDebug(false);
}

void UVRRootComponent::DisplayTrackingDebug(bool bPreUpdate)
{
	if (!bDisplayTrackingDebug) return;
	
	// Display the location for the tracked origin
	FColor OriginColor = bPreUpdate ? FColor::Magenta : FColor::Red;
	DrawDebugSphere(GetWorld(), TrackedOrigin->GetComponentLocation(), 25.0f, 32, OriginColor);

	// Display the location for this root component
	FColor RootColor = bPreUpdate ? FColor::Cyan : FColor::Blue;
	DrawDebugSphere(GetWorld(), GetComponentLocation(), 25.0f, 32, RootColor);

	// Check system's tracking origin against the tracked origin
	EHMDTrackingOrigin::Type TrackingOriginType = GEngine->XRSystem->GetTrackingOrigin();
	FTransform TrackingOriginTransform;
	if (GEngine->XRSystem->GetTrackingOriginTransform(TrackingOriginType, TrackingOriginTransform))
	{
		DrawDebugSphere(GetWorld(), TrackingOriginTransform.GetLocation(), 25.0f, 32, FColor::Yellow);
	}

}

FVector UVRRootComponent::GetGravityDirection()
{
	if (AVREntityCharacter* VRCharacter = Cast<AVREntityCharacter>(GetOwner()))
	{
		if (UVRMovementComponent* VRMovement = VRCharacter->GetVRMovement())
			return VRMovement->GetGravityDirection();
	}

	return FVector::DownVector;
}