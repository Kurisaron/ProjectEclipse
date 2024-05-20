// Fill out your copyright notice in the Description page of Project Settings.


#include "VRRootComponent.h"

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

	FTimerHandle MemberTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(MemberTimerHandle, this, &UVRRootComponent::UpdateRoomscaleMovement, 1.0f, true, TrackingRate);
}

void UVRRootComponent::UpdateRoomscaleMovement()
{
	FVector CameraLocation = TrackedCamera->GetComponentLocation();
	FVector RootLocation = GetComponentLocation();
	FVector LocationDifference = CameraLocation - RootLocation;
	LocationDifference.Z = 0.0;

	AddWorldOffset(LocationDifference, false, nullptr, ETeleportType::TeleportPhysics);
	TrackedOrigin->AddWorldOffset(-LocationDifference, false, nullptr, ETeleportType::TeleportPhysics);
}