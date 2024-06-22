// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "GripComponent.generated.h"

class UGripMotionControllerComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGripGrabEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGripReleaseEvent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGripFireEvent, bool, Pressed, float, PressedTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGripUseEvent, bool, Pressed, float, PressedTime);

/*
UENUM(BlueprintType)
enum class EGripType : uint8
{
	GTE_None	UMETA(DisplayName = "None"),
	GTE_Free	UMETA(DisplayName = "Free"),
	GTE_Snap	UMETA(DisplayName = "Snap"),
	GTE_Custom	UMETA(DisplayName = "Custom"),
};
*/

USTRUCT(BlueprintType)
struct FGripType
{
	GENERATED_BODY()

	// True = grip can be held in hand
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bCanGrab = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true", EditCondition = "bCanGrab"))
	float GrabRadius = 6.0f;

	// True = hand will snap to the grip (or its axis)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true", EditCondition = "bCanGrab"))
	bool bSnapHandToGrip = false;

	// Length of the axis for the grip. Any values greater than zero allows for sliding and two-handed holding
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true", EditCondition = "bCanGrab && bSnapHandToGrip"))
	float AxisLength = 0.0f;

	// True = grip can be moved with telekinesis
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bCanTK = true;

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTECLIPSEVR_API UGripComponent : public USceneComponent
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UGripComponent* PrimaryGrip;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsHeld;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FRotator PrimaryGrabRelativeRotation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bSimulateOnDrop;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FGripType GripType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UHapticFeedbackEffect_Base* OnGrabHapticEffect;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FGripGrabEvent OnGrabbed;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FGripReleaseEvent OnDropped;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FGripFireEvent OnFired;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FGripUseEvent OnUsed;


public:	
	// Sets default values for this component's properties
	UGripComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool TryGrab(UGripMotionControllerComponent* NewController);

	bool TryRelease(UGripMotionControllerComponent* OldController);

	// Only checks if the grip is of the type to be grabbable. Does not consider other things like distance
	bool CanGrab();

	// Checks if the given controller can grab considering factors like distance
	bool CanGrab(UGripMotionControllerComponent* Controller);

private:

	void DetachRelease();

public:

	UFUNCTION(BlueprintCallable, Category = "Grip Component")
	void SetShouldSimulateOnDrop();

	UFUNCTION(BlueprintCallable, Category = "Grip Component")
	void SetPrimitiveCompPhysics(bool bSimulate);

	UFUNCTION(BlueprintPure, Category = "Grip Component")
	EControllerHand GetHeldByHand();

	//bool TryAttachHandToGrip(UGripMotionControllerComponent* NewMotionController);

	void Fire(bool Pressed, float PressedTime);

	void Use(bool Pressed, float PressedTime);

};
