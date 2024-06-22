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

USTRUCT(BlueprintType)
struct FGrabStatus
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UGripComponent* GrabTarget = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bHeld = false;
};

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTECLIPSEVR_API UGripMotionControllerComponent : public UMotionControllerComponent
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	FGrabStatus GrabbingStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grabbing", meta = (AllowPrivateAccess = "true"))
	float GripPressure = 0.0f;

	UStaticMeshComponent* ConstrainedHand;


public:

	UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void InitializeComponent() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Grab();

	void Release();

protected:

	void UpdateGrabTarget();

	UGripComponent* FindGripNearController(bool MustBeGrabbable = true);

public:

	bool IsHoldingGrip();

	UGripComponent* GetHeldGrip();

	void SetGripPressure(float Value);

	void SetConstrainedHand(UStaticMeshComponent* NewHand);

	UStaticMeshComponent* GetConstrainedHand();
};
