// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MotionControllerComponent.h"
#include "GripMotionControllerComponent.generated.h"

class UGripComponent;

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTECLIPSEVR_API UGripMotionControllerComponent : public UMotionControllerComponent
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	UGripComponent* HeldGrip;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	float GrabRadius = 6.0f;

public:

	UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	void Grab();

	void Release();

	// Temp function to be used to prevent both hands from acting like they are holding the same grip when that is not actually happening
	void ClearGrip();

protected:

	UGripComponent* FindGripNearController();

public:

	UGripComponent* GetHeldGrip();

};
