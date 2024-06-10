// Fill out your copyright notice in the Description page of Project Settings.


#include "GripMotionControllerComponent.h"
#include "GripComponent.h"

UGripMotionControllerComponent::UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer) : UMotionControllerComponent(ObjectInitializer)
{
	
}


void UGripMotionControllerComponent::InitializeComponent()
{
	Super::InitializeComponent();
	//UE_LOG(LogTemp, Warning, TEXT("Grip motion controller initialized"));
}

void UGripMotionControllerComponent::Grab()
{
	UGripComponent* FoundGrip = FindGripNearController();
	if (IsValid(FoundGrip) && FoundGrip->TryGrab(this))
	{
		HeldGrip = FoundGrip;
	}
}

void UGripMotionControllerComponent::Release()
{
	if (IsValid(HeldGrip) && HeldGrip->TryRelease())
		HeldGrip = nullptr;
}

UGripComponent* UGripMotionControllerComponent::FindGripNearController()
{
	FVector ControllerGripPosition = GetComponentLocation();

	UWorld* World = GetWorld();
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_PhysicsBody));

	FHitResult HitResult;

	UGripComponent* ClosestGrip = nullptr;
	float ClosestDistance = 9999999.0f;

	bool hit = UKismetSystemLibrary::SphereTraceSingleForObjects(World, ControllerGripPosition, ControllerGripPosition, GrabRadius, ObjectTypes, false, TArray<AActor*, FDefaultAllocator>(), EDrawDebugTrace::None, HitResult, true, FColor::Cyan, FColor::Green, 1.0f);
	if (hit)
	{
		AActor* HitActor = HitResult.GetActor();
		TArray<UGripComponent*> Grips;
		HitActor->GetComponents<UGripComponent>(Grips, true);

		if (Grips.Num() > 0)
		{
			for (auto Element : Grips)
			{
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

bool UGripMotionControllerComponent::IsHoldingGrip() { return HeldGrip != nullptr; }

UGripComponent* UGripMotionControllerComponent::GetHeldGrip() { return HeldGrip; }

void UGripMotionControllerComponent::SetGripPressure(float Value)
{
	GripPressure = Value;

	// Perform operations on the held grip if there is one
	if (HeldGrip != nullptr)
	{
		
	}
}

void UGripMotionControllerComponent::SetConstrainedHand(UStaticMeshComponent* NewHand)
{
	ConstrainedHand = NewHand;
}

UStaticMeshComponent* UGripMotionControllerComponent::GetConstrainedHand()
{
	return ConstrainedHand;
}