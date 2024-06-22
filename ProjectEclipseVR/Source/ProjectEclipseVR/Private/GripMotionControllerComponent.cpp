// Fill out your copyright notice in the Description page of Project Settings.


#include "GripMotionControllerComponent.h"
#include "GripComponent.h"

UGripMotionControllerComponent::UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer) : UMotionControllerComponent(ObjectInitializer)
{
	// Slow tick rate to facilitate frame-rate optimization
	PrimaryComponentTick.TickInterval = 0.01f;
}


void UGripMotionControllerComponent::InitializeComponent()
{
	Super::InitializeComponent();
	//UE_LOG(LogTemp, Warning, TEXT("Grip motion controller initialized"));
}

void UGripMotionControllerComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateGrabTarget();
}

void UGripMotionControllerComponent::Grab()
{
	UGripComponent* Target = GrabbingStatus.GrabTarget;
	if (Target != nullptr && Target->TryGrab(this))
	{
		GrabbingStatus.bHeld = true;
	}
}

void UGripMotionControllerComponent::Release()
{
	UGripComponent* Target = GrabbingStatus.GrabTarget;
	if (Target != nullptr && Target->TryRelease(this))
	{
		GrabbingStatus.bHeld = false;
	}
}

void UGripMotionControllerComponent::UpdateGrabTarget()
{
	// Do not perform update if holding the grab target
	if (GrabbingStatus.GrabTarget != nullptr && GrabbingStatus.bHeld)
		return;

	// If the Grab Target/Held Grip is null, set the held status to false if it is not already
	if (GrabbingStatus.bHeld && GrabbingStatus.GrabTarget == nullptr)
		GrabbingStatus.bHeld = false;

	GrabbingStatus.GrabTarget = FindGripNearController();
}

UGripComponent* UGripMotionControllerComponent::FindGripNearController(bool MustBeGrabbable)
{
	FVector ControllerGripPosition = GetComponentLocation();

	UWorld* World = GetWorld();
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_PhysicsBody));

	FHitResult HitResult;

	UGripComponent* ClosestGrip = nullptr;
	float ClosestDistance = 9999999.0f;

	bool hit = UKismetSystemLibrary::SphereTraceSingleForObjects(World, ControllerGripPosition, ControllerGripPosition, 10.0f, ObjectTypes, false, TArray<AActor*, FDefaultAllocator>(), EDrawDebugTrace::None, HitResult, true, FColor::Cyan, FColor::Green, 1.0f);
	if (hit)
	{
		AActor* HitActor = HitResult.GetActor();
		TArray<UGripComponent*> Grips;
		HitActor->GetComponents<UGripComponent>(Grips, true);

		if (Grips.Num() > 0)
		{
			for (auto Element : Grips)
			{
				if (MustBeGrabbable && !Element->CanGrab(this))
					continue;
				
				FVector ItemGripPosition = Element->GetComponentLocation();
				FVector PositionDifference = ItemGripPosition - ControllerGripPosition;
				float DifferenceLengthSquared = PositionDifference.SquaredLength();
				if (DifferenceLengthSquared <= ClosestDistance)
				{
					ClosestDistance = DifferenceLengthSquared;
					ClosestGrip = Element;
				}
			}
		}
	}

	return ClosestGrip;
}

bool UGripMotionControllerComponent::IsHoldingGrip()
{ 
	return GrabbingStatus.GrabTarget != nullptr && GrabbingStatus.bHeld;
}

UGripComponent* UGripMotionControllerComponent::GetHeldGrip()
{
	return GrabbingStatus.bHeld ? GrabbingStatus.GrabTarget : nullptr;
}

void UGripMotionControllerComponent::SetGripPressure(float Value)
{
	GripPressure = Value;

}

void UGripMotionControllerComponent::SetConstrainedHand(UStaticMeshComponent* NewHand)
{
	ConstrainedHand = NewHand;
}

UStaticMeshComponent* UGripMotionControllerComponent::GetConstrainedHand()
{
	return ConstrainedHand;
}