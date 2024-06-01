// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "HeadMountedDisplayTypes.h"
#include "IXRTrackingSystem.h"
#include "MotionControllerComponent.h"
#include "EntityCharacter.h"
#include "VRMovementComponent.h"
#include "GripMotionControllerComponent.h"
#include "VREntityCharacter.generated.h"

class UGripComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerInputEvent, AVREntityCharacter*, PlayerCharacter, bool, Pressed, float, PressedTime);

USTRUCT(BlueprintType)
struct FInputCounterTracker
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
	TMap<UInputAction*, float> Counters;

public:

	FInputCounterTracker() = default;

	/*
	* Start a counter associated with the given input action
	* @param InputAction - action to be associated with counter
	* @returns True if there was no counter already associated with the input action
	 */
	bool StartCounter(UInputAction* InputAction);

	/*
	* Stops the counter associated with the given input action and passes back the final value for the counter via reference
	* @param InputAction - action associated with counter
	* @param OutFinalValue - final value for the counter passed via reference
	* @returns True if there was a counter associated with the input action
	 */
	bool StopCounter(UInputAction* InputAction, float& OutFinalValue);

	/*
	* Returns true if this tracker has a counter associated with the input action
	* @param InputAction - action associated with counter
	* @param OutValue - value for the counter passed via reference
	* @returns True if there was a counter associated with the input action
	 */
	bool HasCounter(UInputAction* InputAction, float& OutValue);

	/*
	* Return the value of the counter associated with an input action
	* @param InputAction - action to be associated with counter
	* @returns Value of the counter associated with the input action
	 */
	float GetCounter(UInputAction* InputAction);

	// Increment the active counters based on the passed time between tick updates
	void TickCounters(float DeltaTime);
};

/**
 * Character class that facilitates VR gameplay
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECTECLIPSEVR_API AVREntityCharacter : public AEntityCharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Origin", meta = (AllowPrivateAccess = "true"))
	USceneComponent* VROrigin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController_Head;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UGripMotionControllerComponent* MotionController_LeftGrip;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UGripMotionControllerComponent* MotionController_RightGrip;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController_LeftAim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController_RightAim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	bool bDrawMotionControllerDebug = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR|Held Grips", meta = (AllowPrivateAccess = "true"))
	UGripComponent* LeftHeldGrip;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR|Held Grips", meta = (AllowPrivateAccess = "true"))
	UGripComponent* RightHeldGrip;

	// Inputs in this mapping context are the core functions for gameplay
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultContext;

	// Inputs in this mapping context correlate to moving the player's body parts
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* HandsContext;

	///////////////////
	// INPUT ACTIONS //
	///////////////////

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	FInputCounterTracker InputCounters;

	FVector2D MoveInput = FVector2D::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* TurnAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* DodgeAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftGrabAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightGrabAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftTriggerAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightTriggerAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftPointAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightPointAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftThumbUpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightThumbUpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftGraspAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightGraspAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftIndexCurlAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightIndexCurlAction;


	//////////////////////
	// DELEGATES/EVENTS //
	//////////////////////

	UPROPERTY(BlueprintAssignable, BlueprintCallable, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	FPlayerInputEvent JumpEvent;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	FPlayerInputEvent DodgeEvent;

public:

	AVREntityCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetupTrackingOrigin();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:

	//////////////////////////////
	// INPUT ACTION SUBSCRIBERS //
	//////////////////////////////


	void Move(const FInputActionValue& Value);

	void Turn(const FInputActionValue& Value);

	void JumpTriggered(const FInputActionValue& Value);

	virtual void Jump() override;

	virtual void StopJumping() override;

	void Dodge(const FInputActionValue& Value);

	void LeftGrab();

	void LeftRelease();

	void RightGrab();

	void RightRelease();

	void LeftTrigger(const FInputActionValue& Value);

	void RightTrigger(const FInputActionValue& Value);

	void LeftPoint(const FInputActionValue& Value);

	void RightPoint(const FInputActionValue& Value);

	void LeftThumbUp(const FInputActionValue& Value);

	void RightThumbUp(const FInputActionValue& Value);

	void LeftGrasp(const FInputActionValue& Value);

	void RightGrasp(const FInputActionValue& Value);

	void LeftIndexCurl(const FInputActionValue& Value);

	void RightIndexCurl(const FInputActionValue& Value);


	//////////////
	// MOVEMENT //
	//////////////

	virtual void Crouch(bool bClientSimulation = false) override;

protected:

	// Perform all debug displays for character's motion controllers (except head)
	virtual void DisplayMotionControllerDebug();

	// Perform debug display on specific motion controller
	void DisplayMotionControllerDebug(UMotionControllerComponent* MotionController);

public:

	UVRMovementComponent* GetVRMovement();

};
