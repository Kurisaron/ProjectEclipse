// Fill out your copyright notice in the Description page of Project Settings.


#include "VRMovementComponent.h"

UVRMovementComponent::UVRMovementComponent()
{

}

void UVRMovementComponent::SetUpdatedComponent(USceneComponent* NewUpdatedComponent)
{
	if (NewUpdatedComponent)
	{
		const ACharacter* NewCharacterOwner = Cast<ACharacter>(NewUpdatedComponent->GetOwner());
		if (NewCharacterOwner == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("%s owned by %s must update a component owned by a Character"), *GetName(), *GetNameSafe(NewUpdatedComponent->GetOwner()));
			return;
		}
	}

	if (bMovementInProgress)
	{
		// failsafe to avoid crashes in CharacterMovement. 
		bDeferUpdateMoveComponent = true;
		DeferredUpdatedMoveComponent = NewUpdatedComponent;
		return;
	}
	bDeferUpdateMoveComponent = false;
	DeferredUpdatedMoveComponent = nullptr;

	USceneComponent* OldUpdatedComponent = UpdatedComponent;
	UPrimitiveComponent* OldPrimitive = Cast<UPrimitiveComponent>(UpdatedComponent);
	/*
	if (IsValid(OldPrimitive) && OldPrimitive->OnComponentBeginOverlap.IsBound())
	{
		OldPrimitive->OnComponentBeginOverlap.RemoveDynamic(this, &UCharacterMovementComponent::CapsuleTouched);
	}
	*/

	UPawnMovementComponent::SetUpdatedComponent(NewUpdatedComponent);
	CharacterOwner = Cast<ACharacter>(PawnOwner);

	if (UpdatedComponent != OldUpdatedComponent)
	{
		ClearAccumulatedForces();
	}

	if (UpdatedComponent == nullptr)
	{
		StopActiveMovement();
	}

	const bool bValidUpdatedPrimitive = IsValid(UpdatedPrimitive);

	if (bValidUpdatedPrimitive && bEnablePhysicsInteraction)
	{
		//UpdatedPrimitive->OnComponentBeginOverlap.AddUniqueDynamic(this, &UCharacterMovementComponent::CapsuleTouched);
	}

	/*
	if (bNeedsSweepWhileWalkingUpdate)
	{
		bSweepWhileNavWalking = bValidUpdatedPrimitive ? UpdatedPrimitive->GetGenerateOverlapEvents() : false;
		bNeedsSweepWhileWalkingUpdate = false;
	}
	*/

	if (bUseRVOAvoidance && IsValid(NewUpdatedComponent))
	{
		UAvoidanceManager* AvoidanceManager = GetWorld()->GetAvoidanceManager();
		if (AvoidanceManager)
		{
			AvoidanceManager->RegisterMovementComponent(this, AvoidanceWeight);
		}
	}
}