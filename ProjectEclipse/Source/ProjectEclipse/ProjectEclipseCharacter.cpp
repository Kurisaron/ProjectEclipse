// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEclipseCharacter.h"
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

	// Bind events for default double jump
	DoubleJumpEvent.AddUObject<AProjectEclipseCharacter>(this, &AProjectEclipseCharacter::Default_DoubleJump);

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

	if (!CanDoubleJump && GetCharacterMovement()->IsMovingOnGround())
		CanDoubleJump = true;
	
	if (Sprinting)
	{
		// While sprinting, the character can freerun
		FreerunTick(DeltaSeconds);
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

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Move);

		// Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AProjectEclipseCharacter::Sprint);

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
	Jumping = Value.Get<bool>();
	
	bool grounded = GetCharacterMovement()->IsMovingOnGround();
	//UE_LOG(LogTemp, Warning, TEXT("The character is %s grounded"), (grounded ? TEXT("currently") : TEXT("not")));

	if (Jumping)
	{
		if (grounded) ACharacter::Jump();
		else AirJump();
	}
	else
	{
		ACharacter::StopJumping();
	}
}

void AProjectEclipseCharacter::AirJump()
{
	// Broadcasts AirJumpEvent
	DoubleJumpEvent.Broadcast(this);
}

void AProjectEclipseCharacter::Default_DoubleJump(const AProjectEclipseCharacter* Char)
{
	if (!CanDoubleJump) return;
	
	FVector forceDirection(0.0, 0.0, 1.0);
	LaunchCharacter(forceDirection * 1000.0, false, true);
	//UE_LOG(LogTemp, Warning, TEXT("Character performed double jump"));
	CanDoubleJump = false;
}

void AProjectEclipseCharacter::ResetDoubleJump(const FHitResult& Hit)
{
	CanDoubleJump = true;
}

void AProjectEclipseCharacter::Sprint(const FInputActionValue& Value)
{
	// input is a bool
	Sprinting = Value.Get<bool>();

	if (Controller != nullptr)
	{
		GetCharacterMovement()->MaxWalkSpeed *= Sprinting ? 2.0f : 0.5f;
	}
}

void AProjectEclipseCharacter::FreerunTick(float DeltaSeconds)
{
	
}


void AProjectEclipseCharacter::Dodge(const FInputActionValue& Value)
{
	// input is a bool
	bool dodging = Value.Get<bool>();

	if (Controller != nullptr && dodging && canDodge)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		const FVector2D TargetDirection = MovementVector != FVector2D(0.0, 0.0) ? MovementVector : FVector2D(0.0f, -1.0);
		const FVector DodgeDirection = ((ForwardDirection * TargetDirection.Y) + (RightDirection * TargetDirection.X));
		const double DodgeStrength = 1500.0 * (Sprinting ? 2.0 : 1.0);

		//FHitResult hitResult;
		//const FVector ActorLocation = GetActorLocation();

		//FCollisionQueryParams QueryParams;
		//QueryParams.AddIgnoredActor(this);

		//SetActorLocation(GetActorLocation() + DodgeDirection, true, &hitResult, ETeleportType::None);
		//bool targetObstructed = GetWorld()->LineTraceSingleByChannel(hitResult, ActorLocation, ActorLocation + DodgeDirection, ECollisionChannel::ECC_MAX, QueryParams);
		LaunchCharacter(DodgeDirection * DodgeStrength, true, false);
		//GetCharacterMovement()->AddImpulse(DodgeDirection * 10000.0, true);
		canDodge = false;

		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AProjectEclipseCharacter::ResetDodge, 1.0f, false);
	}
}

void AProjectEclipseCharacter::ResetDodge()
{
	canDodge = true;
}


void AProjectEclipseCharacter::Crouch(const FInputActionValue& Value)
{
	// input is a bool
	Crouching = Value.Get<bool>();

	UE_LOG(LogTemp, Warning, TEXT("The character is %s crouching"), (Crouching ? TEXT("now") : TEXT("NOT")));

	if (Crouching)
	{
		ACharacter::Crouch();
	}
	else
	{
		ACharacter::UnCrouch();
	}
}

void AProjectEclipseCharacter::UpdateBounds()
{
	GetActorBounds(true, BoundOrigin, BoundExtent, true);

	if (true)
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
		DrawDebugCapsule(GetWorld(), capsule->GetComponentLocation(), capsule->GetScaledCapsuleHalfHeight(), capsule->GetScaledCapsuleRadius(), FQuat::Identity, FColor::Magenta);
	}
}
