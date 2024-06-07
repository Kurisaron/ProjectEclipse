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

// Input Action Pools are utilized to facilitate modularity for input actions on player-controlled actors
USTRUCT(BlueprintType)
struct FInputActionPool
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* MappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TMap<FString, UInputAction*> InputActions;

public:

	UInputMappingContext* GetMappingContext();

	bool HasAction(FString Key);

	UInputAction* GetAction(FString Key);

};


USTRUCT(BlueprintType)
struct FHandPoseData
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Point = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float ThumbUp = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Grasp = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float IndexCurl = 0;
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

	////////////////////////
	// MOTION CONTROLLERS //
	////////////////////////

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

	/////////////
	// HOLDING //
	/////////////

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR|Held Grips", meta = (AllowPrivateAccess = "true"))
	UGripComponent* LeftHeldGrip;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR|Held Grips", meta = (AllowPrivateAccess = "true"))
	UGripComponent* RightHeldGrip;

	///////////
	// INPUT //
	///////////

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	FInputCounterTracker InputCounters;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	FVector2D MoveInput = FVector2D::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TMap<FString, FInputActionPool> InputPools;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	FHandPoseData LeftHandPose;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	FHandPoseData RightHandPose;

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

	// Called to set the XR tracking origin
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

	// Called via Move Input Action to perform locomotion-style movement
	void Move(const FInputActionValue& Value);

	// Called via Turn Input Action to turn the player on the spot
	void Turn(const FInputActionValue& Value);

	// Called via Jump Input Action to collect input value
	void JumpTriggered(const FInputActionValue& Value);

	// Called via Jump Input Action when it has started being pressed
	virtual void Jump() override;

	// Called via Jump Input Action when it has stopped being pressed
	virtual void StopJumping() override;

	// Called via Dodge Input Action to perform dodging/dashing behaviour
	void Dodge(const FInputActionValue& Value);

	// Called via Left Grab Input Action when it has started being pressed
	void LeftGrab();

	// Called via Left Grab Input Action when it has stopped being pressed
	void LeftRelease();

	// Called via Right Grab Input Action when it has started being pressed
	void RightGrab();

	// Called via Right Grab Input Action when it has stopped being pressed
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
