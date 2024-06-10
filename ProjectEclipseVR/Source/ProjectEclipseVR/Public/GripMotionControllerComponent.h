// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/SkeletalMeshSocket.h"
#include "MotionControllerComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "GripMotionControllerComponent.generated.h"

class UGripComponent;

UENUM(BlueprintType)
enum class EHandSide : uint8
{
	HSE_Left	UMETA(DisplayName = "Left"),
	HSE_Right	UMETA(DisplayName = "Right"),
};


/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTECLIPSEVR_API UGripMotionControllerComponent : public UMotionControllerComponent
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	UGripComponent* HeldGrip;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	float GripPressure = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	float GrabRadius = 6.0f;

	UStaticMeshComponent* ConstrainedHand;

public:

	UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void InitializeComponent() override;

	void Grab();

	void Release();

protected:

	UGripComponent* FindGripNearController();

public:

	bool IsHoldingGrip();

	UGripComponent* GetHeldGrip();

	void SetGripPressure(float Value);

	void SetConstrainedHand(UStaticMeshComponent* NewHand);

	UStaticMeshComponent* GetConstrainedHand();
};
