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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, BlueprintCallable, BlueprintAssignable, Category = "Events", meta = (AllowPrivateAccess = "true"))
	FGripGrabEvent OnGrabbed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, BlueprintCallable, BlueprintAssignable, Category = "Events", meta = (AllowPrivateAccess = "true"))
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

	UFUNCTION(BlueprintCallable)
	void SetShouldSimulateOnDrop();

	UFUNCTION(BlueprintCallable)
	void SetPrimitiveCompPhysics(bool bSimulate);

	UFUNCTION(BlueprintPure)
	EControllerHand GetHeldByHand();

	bool TryAttachParentToMotionController(UMotionControllerComponent* NewMotionController);
};