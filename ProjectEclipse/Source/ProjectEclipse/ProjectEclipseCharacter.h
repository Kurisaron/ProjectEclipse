// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "ProjectEclipseCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AProjectEclipseCharacter : public ACharacter
{
	GENERATED_BODY()

	/** List of time counters for tracking how long something has been active */
	TMap<FString, float> activeTimeCounters;

	/** Origin of character's bounds */
	FVector BoundOrigin;

	/** Extend of character's bounds */
	FVector BoundExtent;
	
	/** Direction of character movement*/
	FVector2D MovementVector;

	/** Key used in time counter map for tracking how long the jump button has been pressed */
	FString JumpCounterKey = "JumpPressed";

	/** Threshold value for time jump button has been pressed for the character to be considered freerunning */
	float JumpFreerunThreshold = 0.25f;

	/** Tracks if the character has double jumped */
	bool bCanDoubleJump = true;

	DECLARE_EVENT_OneParam(AProjectEclipseCharacter, FDoubleJumpEvent, const AProjectEclipseCharacter*);
	/** Broadcasts whenever the player presses the jump button in the air */
	FDoubleJumpEvent DoubleJumpEvent;

	/** Key used in time counter map for tracking how long the primary attack button has been pressed */
	FString PrimaryAttackCounterKey = "PrimaryAttackPressed";

	/** Tracks whether character is sprinting*/
	bool bSprinting = false;

	/** Tracks whether character is wallrunning */
	bool bWallRunning = false;

	/** Setting for how far the line trace should be to check for wall running */
	float WallCheckDistance = 70.0f;

	/** Tracks whether character can dodge */
	bool bCanDodge = true;

	/** Tracks whether character is crouching */
	bool bCrouching = false;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Third person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* ThirdPersonCamera;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SprintAction;

	/** Main Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PrimaryAttackAction;

	/** Dodge Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DodgeAction;

	/** Crouch Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CrouchAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	AProjectEclipseCharacter();
	
	/** Broadcasts whenever the player presses the jump button in the air */
	FDoubleJumpEvent& GetDoubleJumpEvent() { return DoubleJumpEvent; }

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for jumping input */
	void Jump(const FInputActionValue& Value);

	/** Called for double jump action (fires event) */
	void DoubleJump();

	/** Default AirJumpEvent subscriber */
	void Default_DoubleJump(const AProjectEclipseCharacter* Char);

	/** Called to reset character's ability to double jump */
	void ResetDoubleJump(const FHitResult& Hit);
	
	/** Called for sprint input */
	void Sprint(const FInputActionValue& Value);

	/** Called for freerunning ongoing input */
	void FreerunTick();

	/** Checks if the character is freerunning */
	bool IsFreerunning();

	/** Checks for forward obstacle */
	bool ForwardObstacle(TArray<FVector> StartLocations);

	/** Called to check for a wall */
	bool CheckForObstacle(const FVector& Start, const FVector& Direction);

	/** Called to perform the main attack */
	void PrimaryAttack(const FInputActionValue& Value);

	/** Called for dodge input */
	void Dodge(const FInputActionValue& Value);

	/** Called to reset dodge */
	void ResetDodge();

	/** Called for crouch input */
	void Crouch(const FInputActionValue& Value);

	/** Called to update bound information */
	void UpdateBounds();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

	// To handle 
	virtual void Tick(float DeltaSeconds);

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return ThirdPersonCamera; }
};

void StartCounter(TMap<FString, float>& Tracker, FString Key);
void StopCounter(TMap<FString, float>& Tracker, FString Key);
float GetCounter(TMap<FString, float>& Tracker, FString Key);
void UpdateCounters(TMap<FString, float>& Tracker, float DeltaSeconds);
