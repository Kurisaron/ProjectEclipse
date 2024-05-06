// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "GripComponent.generated.h"


UENUM(BlueprintType)
enum class EGripType : uint8
{
	GTE_None	UMETA(DisplayName = "None"),
	GTE_Free	UMETA(DisplayName = "Free"),
	GTE_Snap	UMETA(DisplayName = "Snap"),
	GTE_Custom	UMETA(DisplayName = "Custom"),
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTECLIPSEVR_API UGripComponent : public USceneComponent
{
	GENERATED_BODY()

	bool bIsHeld;

	FRotator PrimaryGrabRelativeRotation;

	bool bSimulateOnDrop;

	EGripType GripType;

	UHapticFeedbackEffect_Base* OnGrabHapticEffect;

	

public:	
	// Sets default values for this component's properties
	UGripComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	bool TryGrab(UMotionControllerComponent* MotionController);


	bool TryRelease();


	void SetShouldSimulateOnDrop();


	void SetPrimitiveCompPhysics(bool bSimulate);


	EControllerHand GetHeldByHand();
};
