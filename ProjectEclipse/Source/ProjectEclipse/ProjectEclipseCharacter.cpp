// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEclipseCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/PointLightComponent.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AProjectEclipseCharacter

AProjectEclipseCharacter::AProjectEclipseCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a third person camera
	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	ThirdPersonCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	ThirdPersonCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Bind delegates/events
	DoubleJumpEvent.AddUObject<AProjectEclipseCharacter>(this, &AProjectEclipseCharacter::Default_DoubleJump);
	CrouchEvent.AddUObject<AProjectEclipseCharacter>(this, &AProjectEclipseCharacter::Default_Crouch);
	DodgeEvent.AddUObject<AProjectEclipseCharacter>(this, &AProjectEclipseCharacter::Default_Dodge);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AProjectEclipseCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AProjectEclipseCharacter::Tick(float DeltaSeconds)
{
	UpdateBounds();

	UpdateCounters(activeTimeCounters, DeltaSeconds);

	if (GetCharacterMovement()->IsMovingOnGround())
	{
		if (!bCanDoubleJump)
			bCanDoubleJump = true;
	}

}

//////////////////////////////////////////////////////////////////////////
// Input

void AProjectEclipseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Jump);
		//EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Ongoing, this, &AProjectEclipseCharacter::FreerunTick);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Move);

		// Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Sprint);

		// Attacking
		EnhancedInputComponent->BindAction(PrimaryAttackAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::PrimaryAttack);

		// Dodging
		EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Dodge);

		// Crouching
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Crouch);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AProjectEclipseCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	MovementVector = Value.Get<FVector2D>();
	//UE_LOG(LogTemp, Warning, TEXT("Move vector value is: %s"), *MovementVector.ToString());

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);

	}
}

void AProjectEclipseCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AProjectEclipseCharacter::Jump(const FInputActionValue& Value)
{
	// input is a bool
	bool pressed = Value.Get<bool>();
	
	bool grounded = GetCharacterMovement()->IsMovingOnGround();
	//UE_LOG(LogTemp, Warning, TEXT("The character is %s grounded"), (grounded ? TEXT("currently") : TEXT("not")));

	if (pressed)
	{
		StartCounter(activeTimeCounters, JumpCounterKey);
		JumpFreerunThreshold = grounded ? 0.25f : 0.0f;
		if (grounded)
		{
			ACharacter::Jump();
		}
		else
		{
			DoubleJump();
		}
	}
	else
	{
		StopCounter(activeTimeCounters, JumpCounterKey);
		ACharacter::StopJumping();
	}

}

void AProjectEclipseCharacter::DoubleJump()
{
	// Broadcasts AirJumpEvent
	if (DoubleJumpEvent.IsBound()) 
		DoubleJumpEvent.Broadcast(this);
}

void AProjectEclipseCharacter::Default_DoubleJump(const AProjectEclipseCharacter* Character)
{
	if (!bCanDoubleJump) return;
	
	FVector forceDirection(0.0, 0.0, 1.0);
	LaunchCharacter(forceDirection * 800.0, false, true);
	//UE_LOG(LogTemp, Warning, TEXT("Character performed double jump"));
	bCanDoubleJump = false;
}

void AProjectEclipseCharacter::ResetDoubleJump(const FHitResult& Hit)
{
	bCanDoubleJump = true;
}

void AProjectEclipseCharacter::Sprint(const FInputActionValue& Value)
{
	// input is a bool
	bSprinting = Value.Get<bool>();

	if (Controller != nullptr)
	{
		GetCharacterMovement()->MaxWalkSpeed *= bSprinting ? 2.0f : 0.5f;
	}
}

void AProjectEclipseCharacter::FreerunTick()
{
	float DeltaTime = GetWorld()->DeltaTimeSeconds;
	//UE_LOG(LogTemp, Warning, TEXT("Jump pressed for %f seconds"), JumpPressedTime);

	if (!IsFreerunning()) return;
	
	//UE_LOG(LogTemp, Warning, TEXT("Freerunning"));

	const FVector Location = GetActorLocation();
	FVector High(Location.X, Location.Y, BoundOrigin.Z + BoundExtent.Z);
	FVector Low(Location.X, Location.Y, BoundOrigin.Z - BoundExtent.Z);
	
	TMap<FString, TTuple<FVector, bool>> FrontStarts;
	FrontStarts.Add("Location", TTuple<FVector, bool>(Location, false));
	FrontStarts.Add("High", TTuple<FVector, bool>(High, false));
	FrontStarts.Add("Low", TTuple<FVector, bool>(Low, false));

	if (CheckForwardObstacle(FrontStarts))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Forward Obstacle Present"));

	}
}

bool AProjectEclipseCharacter::IsFreerunning()
{
	return !GetCharacterMovement()->IsMovingOnGround() && GetCounter(activeTimeCounters, JumpCounterKey) > JumpFreerunThreshold;
}

bool AProjectEclipseCharacter::CheckForwardObstacle(TMap<FString, TTuple<FVector, bool>>& StartLocations)
{
	bool obstaclePresent(false);
	const FVector ForwardVector = GetActorForwardVector();

	for (auto& Element : StartLocations)
	{
		TTuple<FVector, bool>& Value = Element.Value;
		FVector location = Value.Get<0>();
		bool& flag = Value.Get<1>();
		
		flag = CheckForObstacle(location, ForwardVector);
		if (flag) obstaclePresent = true;
	}

	return obstaclePresent;
}

bool AProjectEclipseCharacter::CheckForObstacle(const FVector& Start, const FVector& Direction)
{
	FHitResult HitResult;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	// Perform a line trace to check for walls
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, Start + (Direction * WallCheckDistance), ECollisionChannel::ECC_Visibility, QueryParams);

	DrawDebugLine(GetWorld(), Start, Start + (Direction * WallCheckDistance), bHit ? FColor::Green : FColor::Red);

	return bHit;
}


void AProjectEclipseCharacter::PrimaryAttack(const FInputActionValue& Value)
{
	// input is a bool
	bool attacking = Value.Get<bool>();

	if (Controller != nullptr)
	{
		float timePressed(0.0f);
		if (attacking)
		{
			StartCounter(activeTimeCounters, PrimaryAttackCounterKey);
		}
		else
		{
			timePressed = GetCounter(activeTimeCounters, PrimaryAttackCounterKey);

			StopCounter(activeTimeCounters, PrimaryAttackCounterKey);
		}

		PrimaryAttackEvent.Broadcast(attacking, timePressed);
		//UE_LOG(LogTemp, Warning, TEXT("The attack button was pressed for %f seconds"), timePressed);
	}
}

void AProjectEclipseCharacter::Dodge(const FInputActionValue& Value)
{
	// input is a bool
	bool dodging = Value.Get<bool>();
	if (dodging) StartCounter(activeTimeCounters, DodgeCounterKey);

	if (DodgeEvent.IsBound())
		DodgeEvent.Broadcast(this, dodging, GetCounter(activeTimeCounters, DodgeCounterKey));

	if (dodging) StopCounter(activeTimeCounters, DodgeCounterKey);
}

void AProjectEclipseCharacter::Default_Dodge(AProjectEclipseCharacter* Character, const bool Pressed, const float PressedTime)
{
	if (Pressed && Character->Controller != nullptr && Character->CanDodge())
	{
		// find out which way is forward
		const FRotator Rotation = Character->Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		FVector2D MoveVector = Character->GetMovementVector();
		const FVector2D TargetDirection = MoveVector != FVector2D(0.0, 0.0) ? MoveVector : FVector2D(0.0f, -1.0);
		const FVector DodgeDirection = ((ForwardDirection * TargetDirection.Y) + (RightDirection * TargetDirection.X));
		const double DodgeStrength = 1500.0 * (Character->Sprinting() ? 1.5 : 1.0);

		Character->LaunchCharacter(DodgeDirection * DodgeStrength, true, false);
		Character->CanDodge(false);

		FTimerHandle TimerHandle;
		Character->GetWorldTimerManager().SetTimer(TimerHandle, Character, &AProjectEclipseCharacter::ResetDodge, 0.75f, false);
	}
}


void AProjectEclipseCharacter::Crouch(const FInputActionValue& Value)
{
	// input is a bool
	bCrouchPressed = Value.Get<bool>();
	if (bCrouchPressed) StartCounter(activeTimeCounters, CrouchCounterKey);

	if (CrouchEvent.IsBound())
	{
		CrouchEvent.Broadcast(this, bCrouchPressed, GetCounter(activeTimeCounters, CrouchCounterKey));
	}

	if (!bCrouchPressed) StopCounter(activeTimeCounters, CrouchCounterKey);
}

void AProjectEclipseCharacter::Crouch(const bool State)
{
	if (State)
	{
		ACharacter::Crouch();
	}
	else
	{
		ACharacter::UnCrouch();
	}
}

void AProjectEclipseCharacter::Default_Crouch(AProjectEclipseCharacter* Character, const bool Pressed, const float PressedTime)
{
	UE_LOG(LogTemp, Warning, TEXT("The character is %s crouching"), (Pressed ? TEXT("now") : TEXT("NOT")));
	Character->Crouch(Pressed);
}

void AProjectEclipseCharacter::UpdateBounds()
{
	GetActorBounds(true, BoundOrigin, BoundExtent, true);

	if (false)
	{
		const FVector Location = GetActorLocation();

		DrawDebugBox(GetWorld(), BoundOrigin, BoundExtent, FColor::Red);
		DrawDebugSphere(GetWorld(), BoundOrigin, 10.0f, 64, FColor::Red);
		FVector High(Location.X, Location.Y, BoundOrigin.Z + BoundExtent.Z);
		FVector Low(Location.X, Location.Y, BoundOrigin.Z - BoundExtent.Z);
		DrawDebugSphere(GetWorld(), High, 10.0f, 64, FColor::Green);
		DrawDebugSphere(GetWorld(), Low, 10.0f, 64, FColor::Green);

		DrawDebugSphere(GetWorld(), GetActorLocation(), 10.0f, 64, FColor::Blue);

		UCapsuleComponent* capsule = GetCapsuleComponent();
		DrawDebugCapsule(GetWorld(), capsule->GetComponentLocation(), capsule->GetScaledCapsuleHalfHeight(), capsule->GetScaledCapsuleRadius(), FQuat::Identity, FColor::Cyan);
	}
}


//////////////////////////////////////////////////////////////////////////
// Free Functions

void StartCounter(TMap<FString, float>& Tracker, FString Key)
{
	Tracker.Add(Key, 0.0f);
	//UE_LOG(LogTemp, Warning, TEXT("%s counter added tracker"), *Key);
}

void StopCounter(TMap<FString, float>& Tracker, FString Key)
{
	if (Tracker.Contains(Key))
	{
		Tracker.Remove(Key);
		//UE_LOG(LogTemp, Warning, TEXT("%s counter removed from tracker"), *Key);
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("%s counter not present in tracker"), *Key);
	}
}

bool HasCounter(TMap<FString, float>& Tracker, FString Key)
{
	return Tracker.Contains(Key);
}

float GetCounter(TMap<FString, float>& Tracker, FString Key)
{
	if (Tracker.Contains(Key))
	{
		float Value = Tracker[Key];
		//UE_LOG(LogTemp, Warning, TEXT("%s counter found, value is: %f"), *Key, Value);
		return Value;
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("%s counter not present in tracker"), *Key);
		return 0.0f;
	}
		
}

void UpdateCounters(TMap<FString, float>& Tracker, float DeltaSeconds)
{
	for (auto& Element : Tracker)
	{
		Element.Value += DeltaSeconds;
		//UE_LOG(LogTemp, Warning, TEXT("%s counter is now at %f seconds"), *Element.Key, Element.Value);
	}
}