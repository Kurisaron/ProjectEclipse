// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "GripComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGripGrabEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGripReleaseEvent);

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
	EGripType GripType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UHapticFeedbackEffect_Base* OnGrabHapticEffect;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FGripGrabEvent OnGrabbed;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FGripReleaseEvent OnDropped;
	

public:	
	// Sets default values for this component's properties
	UGripComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	bool TryGrab(UMotionControllerComponent* NewMotionController);

	UFUNCTION(BlueprintCallable)
	bool TryRelease();

private:

	void DetachRelease();

public:

	UFUNCTION(BlueprintCallable, Category = "Grip Component")
	void SetShouldSimulateOnDrop();

	UFUNCTION(BlueprintCallable, Category = "Grip Component")
	void SetPrimitiveCompPhysics(bool bSimulate);

	UFUNCTION(BlueprintPure, Category = "Grip Component")
	EControllerHand GetHeldByHand();

	bool TryAttachParentToMotionController(UMotionControllerComponent* NewMotionController);

	UFUNCTION(BlueprintNativeEvent, Category = "Grip Component")
	void PrimaryUse(bool Pressed, float PressedTime);
	void PrimaryUse_Implementation(bool Pressed, float PressedTime);

	UFUNCTION(BlueprintNativeEvent, Category = "Grip Component")
	void SecondaryUse(bool Pressed, float PressedTime);
	void SecondaryUse_Implementation(bool Pressed, float PressedTime);

};
