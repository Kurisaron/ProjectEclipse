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
#include "VREntityCharacter.generated.h"

class UGripComponent;

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECTECLIPSEVR_API AVREntityCharacter : public AEntityCharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Origin", meta = (AllowPrivateAccess = "true"))
	USphereComponent* VROrigin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController_Head;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController_LeftGrip;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Motion Controllers", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* MotionController_RightGrip;

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VR|Held Grips", meta = (AllowPrivateAccess = "true"))
	float GrabRadius = 6.0f;


	// Inputs in this mapping context are the core functions for gameplay
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultContext;

	// Inputs in this mapping context correlate to moving the player's body parts
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Hands Context", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* HandsContext;



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* TurnAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftGrabAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Default Context", meta = (AllowPrivateAccess = "true"))
	UInputAction* RightGrabAction;

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

	//============================================
	// INPUT ACTION SUBSCRIBERS
	//============================================

	void Move(const FInputActionValue& Value);

	void Turn(const FInputActionValue& Value);

	void LeftGrab();

	void LeftRelease();

	void RightGrab();

	void RightRelease();

	void LeftPoint(const FInputActionValue& Value);

	void RightPoint(const FInputActionValue& Value);

	void LeftThumbUp(const FInputActionValue& Value);

	void RightThumbUp(const FInputActionValue& Value);

	void LeftGrasp(const FInputActionValue& Value);

	void RightGrasp(const FInputActionValue& Value);

	void LeftIndexCurl(const FInputActionValue& Value);

	void RightIndexCurl(const FInputActionValue& Value);

protected:

	UGripComponent* GetGripNearController(UMotionControllerComponent* MotionController);

public:

	UVRMovementComponent* GetVRMovement();

};
