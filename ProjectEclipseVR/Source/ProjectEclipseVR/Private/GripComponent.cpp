// Fill out your copyright notice in the Description page of Project Settings.


#include "GripComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GripMotionControllerComponent.h"

// Sets default values for this component's properties
UGripComponent::UGripComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGripComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SetShouldSimulateOnDrop();

	USceneComponent* Parent = GetAttachParent();
	UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(Parent);
	if (Primitive != nullptr)
	{
		Primitive->SetCollisionProfileName(TEXT("PhysicsActor"));
	}
}


// Called every frame
void UGripComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UGripComponent::TryGrab(UMotionControllerComponent* NewMotionController)
{
	switch (GripType)
	{
		case EGripType::GTE_None:
			break;
		case EGripType::GTE_Free:
			SetPrimitiveCompPhysics(false);
			if (TryAttachParentToMotionController(NewMotionController))
				bIsHeld = true;
			break;
		case EGripType::GTE_Snap:
			SetPrimitiveCompPhysics(false);
			if (TryAttachParentToMotionController(NewMotionController))
			{
				bIsHeld = true;

				USceneComponent* Parent = GetAttachParent();

				FRotator RelativeRot = GetRelativeRotation();
				Parent->SetRelativeRotation(RelativeRot.GetInverse(), false, nullptr, ETeleportType::TeleportPhysics);

				FVector ControllerLocation = NewMotionController->GetComponentLocation();
				FVector GripLocation = GetComponentLocation();
				FVector ParentLocation = Parent->GetComponentLocation();
				FVector Final = ControllerLocation + ((GripLocation - ParentLocation) * -1.0f);
				Parent->SetWorldLocation(Final, false, nullptr, ETeleportType::TeleportPhysics);
			}
			break;
		case EGripType::GTE_Custom:
			bIsHeld = true;
			break;
		default:
			break;
	}

	if (!bIsHeld)
		return false;

	MotionController = NewMotionController;

	// Call On Grabbed delegate
	OnGrabbed.Broadcast();

	APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	EControllerHand Hand = GetHeldByHand();
	Controller->PlayHapticEffect(OnGrabHapticEffect, Hand);

	return bIsHeld;
}

bool UGripComponent::TryRelease()
{
	switch (GripType)
	{
		case EGripType::GTE_None:
			break;
		case EGripType::GTE_Free:
			DetachRelease();
			break;
		case EGripType::GTE_Snap:
			DetachRelease();
			break;
		case EGripType::GTE_Custom:
			bIsHeld = false;
			break;
		default:
			break;
	}

	if (bIsHeld)
		return false;

	// Call On Dropped delegate
	OnDropped.Broadcast();

	return true;
}

void UGripComponent::DetachRelease()
{
	if (bSimulateOnDrop)
	{
		SetPrimitiveCompPhysics(true);
	}

	USceneComponent* Parent = GetAttachParent();
	FDetachmentTransformRules DetachRules = FDetachmentTransformRules::KeepWorldTransform;
	DetachRules.bCallModify = true;
	Parent->DetachFromComponent(DetachRules);

	bIsHeld = false;
}

void UGripComponent::SetShouldSimulateOnDrop()
{
	USceneComponent* Parent = GetAttachParent();
	UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(Parent);
	if (Primitive != nullptr && Primitive->IsAnySimulatingPhysics())
	{
		bSimulateOnDrop = true;
	}
}

void UGripComponent::SetPrimitiveCompPhysics(bool bSimulate)
{
	USceneComponent* Parent = GetAttachParent();
	UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(Parent);
	if (Primitive == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("GripComponent->SetSimulatingParent->Cast To PrimitiveComponent FAILED"));
		return;
	}

	Primitive->SetSimulatePhysics(bSimulate);
}

EControllerHand UGripComponent::GetHeldByHand()
{
	FName Hand = MotionController->GetTrackingMotionSource();
	return Hand == TEXT("LeftGrip") ? EControllerHand::Left : EControllerHand::Right;
}

bool UGripComponent::TryAttachParentToMotionController(UMotionControllerComponent* NewMotionController)
{
	USceneComponent* Parent = GetAttachParent();
	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules::KeepWorldTransform;
	AttachmentRules.bWeldSimulatedBodies = true;
	UStaticMeshComponent* ControllerConstrainedHand = Cast<UGripMotionControllerComponent>(NewMotionController)->GetConstrainedHand();
	bool Success = Parent->AttachToComponent(ControllerConstrainedHand, AttachmentRules);
	if (!Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attaching %s to %s FAILED - object not grabbed"), *Parent->GetName(), *NewMotionController->GetName());
	}
	return Success;
}

void UGripComponent::PrimaryUse_Implementation(bool Pressed, float PressedTime)
{

}

void UGripComponent::SecondaryUse_Implementation(bool Pressed, float PressedTime)
{

}