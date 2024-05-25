// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "VRController.generated.h"

/**
 * A Player Controller class which adds VR-related functionality.
 * Also adds input-handling functionality for CharacterMovementController/VRMovementController custom gravity mechanics.
 */
UCLASS(BlueprintType)
class PROJECTECLIPSEVR_API AVRController : public APlayerController
{
	GENERATED_BODY()
	
public:

	AVRController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void UpdateRotation(float DeltaTime) override;

	// Converts a rotation from world space to gravity relative space.
	UFUNCTION(BlueprintPure)
	static FRotator GetGravityRelativeRotation(FRotator Rotation, FVector GravityDirection);

	// Converts a rotation from gravity relative space to world space.
	UFUNCTION(BlueprintPure)
	static FRotator GetGravityWorldRotation(FRotator Rotation, FVector GravityDirection);

private:

	FVector LastFrameGravity = FVector::ZeroVector;
};
