// Fill out your copyright notice in the Description page of Project Settings.


#include "VREntityCharacter.h"
#include "VRRootComponent.h"
#include "GripComponent.h"

AVREntityCharacter::AVREntityCharacter(const FObjectInitializer& ObjectInitializer) : AEntityCharacter(ObjectInitializer.SetDefaultSubobjectClass<UVRMovementComponent>(ACharacter::CharacterMovementComponentName).SetDefaultSubobjectClass<UVRRootComponent>(ACharacter::CapsuleComponentName))
{
	
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	UVRRootComponent* VRRootComp = Cast<UVRRootComponent>(Capsule);
	if (VRRootComp == nullptr)
	{
		return;
	}
	VRRootComp->InitCapsuleSize(42.f, 96.0f);

	// Only enable the character to rotate the yaw
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->SetUpdatedComponent(RootComponent);
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	VROrigin->SetupAttachment(Capsule);
	VROrigin->SetRelativeLocation(FVector(0.0, 0.0, -90.0));

	// Create the HMD camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VROrigin);
	Camera->bLockToHmd = true;

	// Setup roomscale movement
	VRRootComp->SetupRoomscale(VROrigin, Camera);

	// Create the motion controllers
	FName SourceName = TEXT("Head");
	MotionController_Head = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_Head->SetupAttachment(VROrigin);
	MotionController_Head->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("LeftGrip");
	MotionController_LeftGrip = CreateDefaultSubobject<UGripMotionControllerComponent>(SourceName);
	MotionController_LeftGrip->SetupAttachment(VROrigin);
	MotionController_LeftGrip->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("LeftAim");
	MotionController_LeftAim = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_LeftAim->SetupAttachment(VROrigin);
	MotionController_LeftAim->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("RightGrip");
	MotionController_RightGrip = CreateDefaultSubobject<UGripMotionControllerComponent>(SourceName);
	MotionController_RightGrip->SetupAttachment(VROrigin);
	MotionController_RightGrip->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("RightAim");
	MotionController_RightAim = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_RightAim->SetupAttachment(VROrigin);
	MotionController_RightAim->SetTrackingMotionSource(SourceName);

}

void AVREntityCharacter::BeginPlay()
{
	AEntityCharacter::BeginPlay();

	SetupTrackingOrigin();

	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("vr.PixelDensity 1.0"));

	// Create instance of input counter tracker
	InputCounters = FInputCounterTracker();

}

void AVREntityCharacter::SetupTrackingOrigin()
{
	if (GEngine && GEngine->XRSystem)
		GEngine->XRSystem->SetTrackingOrigin(EHMDTrackingOrigin::Stage);
}

void AVREntityCharacter::Tick(float DeltaTime)
{
	AEntityCharacter::Tick(DeltaTime);

	InputCounters.TickCounters(DeltaTime);
	DisplayMotionControllerDebug();
}

void AVREntityCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	AEntityCharacter::SetupPlayerInputComponent(PlayerInputComponent);

	// Add Input Mapping Contexts
	if (auto PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultContext, 0);
			Subsystem->AddMappingContext(HandsContext, 0);
		}
	}

	// Set up action bindings
	if (auto EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Bind default context inputs
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Move);
		EnhancedInput->BindAction(TurnAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Turn);
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &AVREntityCharacter::Jump);
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::JumpTriggered);
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &AVREntityCharacter::StopJumping);
		EnhancedInput->BindAction(DodgeAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Dodge);
		EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Started, this, &AVREntityCharacter::LeftGrab);
		EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Completed, this, &AVREntityCharacter::LeftRelease);
		EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Started, this, &AVREntityCharacter::RightGrab);
		EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Completed, this, &AVREntityCharacter::RightRelease);
		EnhancedInput->BindAction(LeftTriggerAction, ETriggerEvent::Completed, this, &AVREntityCharacter::LeftTrigger);
		EnhancedInput->BindAction(RightTriggerAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightTrigger);

		// Bind hands context inputs
		EnhancedInput->BindAction(LeftPointAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftPoint);
		EnhancedInput->BindAction(RightPointAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightPoint);
		EnhancedInput->BindAction(LeftThumbUpAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftThumbUp);
		EnhancedInput->BindAction(RightThumbUpAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightThumbUp);
		EnhancedInput->BindAction(LeftGraspAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftGrasp);
		EnhancedInput->BindAction(RightGraspAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightGrasp);
		EnhancedInput->BindAction(LeftIndexCurlAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftIndexCurl);
		EnhancedInput->BindAction(RightIndexCurlAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightIndexCurl);

	}
}

void AVREntityCharacter::Move(const FInputActionValue& Value)
{
	MoveInput = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Camera->GetComponentRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MoveInput.Y);
		AddMovementInput(RightDirection, MoveInput.X);
	}

}

void AVREntityCharacter::Turn(const FInputActionValue& Value)
{
	float TurnScale = Value.Get<float>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(TurnScale);
	}
}

void AVREntityCharacter::JumpTriggered(const FInputActionValue& Value)
{
	float JumpScale = Value.Get<float>();
	float PressedTime = InputCounters.GetCounter(JumpAction);

	UE_LOG(LogTemp, Warning, TEXT("Jump scale is %f and jump pressed time is %f"), JumpScale, PressedTime);
}

void AVREntityCharacter::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("VR Character now jumping"));

	if (InputCounters.StartCounter(JumpAction))
	{
		if (JumpEvent.IsBound())
			JumpEvent.Broadcast(this, true, 0.0f);
		else
			ACharacter::Jump();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Jump counter already present"));
	}
}

void AVREntityCharacter::StopJumping()
{
	UE_LOG(LogTemp, Warning, TEXT("VR Character now NOT jumping"));

	float FinalValue;
	if (InputCounters.StopCounter(JumpAction, FinalValue))
	{
		if (JumpEvent.IsBound())
			JumpEvent.Broadcast(this, false, FinalValue);
		else
			ACharacter::StopJumping();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Jump counter not present"));
	}
}

void AVREntityCharacter::Dodge(const FInputActionValue& Value)
{
	bool Dodging = Value.Get<bool>();

	// Start/stop the counter for dodge input
	float PressTime(0.0f);
	if (Dodging)
	{
		if (!InputCounters.StartCounter(DodgeAction)) return;
	}
	else
	{
		if (!InputCounters.StopCounter(DodgeAction, PressTime)) return;
	}
		
	// Broadcast the dodge event if any alternate dodge behaviours are bound
	if (DodgeEvent.IsBound())
		DodgeEvent.Broadcast(this, Dodging, PressTime);
	else
	{
		// Perform default behaviour for dodging
		FVector2D DodgeDirection = MoveInput.IsZero() ? MoveInput : FVector2D(0.0, -1.0);

		// find out which way is forward
		const FRotator Rotation = Camera->GetComponentRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add force
		FVector DodgeVector = (ForwardDirection * DodgeDirection.Y) + (RightDirection * DodgeDirection.X);
		GetVRMovement()->AddImpulse(DodgeVector, true);
	}
}

void AVREntityCharacter::LeftGrab()
{
	MotionController_LeftGrip->Grab();
	if (MotionController_LeftGrip->GetHeldGrip() == MotionController_RightGrip->GetHeldGrip())
		MotionController_RightGrip->ClearGrip();
}

void AVREntityCharacter::LeftRelease()
{
	MotionController_LeftGrip->Release();
}

void AVREntityCharacter::RightGrab()
{
	MotionController_RightGrip->Grab();
	if (MotionController_LeftGrip->GetHeldGrip() == MotionController_RightGrip->GetHeldGrip())
		MotionController_LeftGrip->ClearGrip();
}

void AVREntityCharacter::RightRelease()
{
	MotionController_RightGrip->Release();
}

void AVREntityCharacter::LeftTrigger(const FInputActionValue& Value)
{
	
}

void AVREntityCharacter::RightTrigger(const FInputActionValue& Value)
{

}

void AVREntityCharacter::LeftPoint(const FInputActionValue& Value)
{

}

void AVREntityCharacter::RightPoint(const FInputActionValue& Value)
{

}

void AVREntityCharacter::LeftThumbUp(const FInputActionValue& Value)
{

}

void AVREntityCharacter::RightThumbUp(const FInputActionValue& Value)
{

}

void AVREntityCharacter::LeftGrasp(const FInputActionValue& Value)
{

}

void AVREntityCharacter::RightGrasp(const FInputActionValue& Value)
{

}

void AVREntityCharacter::LeftIndexCurl(const FInputActionValue& Value)
{

}

void AVREntityCharacter::RightIndexCurl(const FInputActionValue& Value)
{

}

void AVREntityCharacter::Crouch(bool bClientSimulation)
{
	// TO-DO: Fill-in crouching for VR character
	// Only currently defined to override ACharacter::Crouch default logic
}

UVRMovementComponent* AVREntityCharacter::GetVRMovement() { return GetCharacterMovement<UVRMovementComponent>(); }

void AVREntityCharacter::DisplayMotionControllerDebug()
{
	if (!bDrawMotionControllerDebug) return;
	
	DisplayMotionControllerDebug(MotionController_LeftAim);
	DisplayMotionControllerDebug(MotionController_LeftGrip);
	DisplayMotionControllerDebug(MotionController_RightAim);
	DisplayMotionControllerDebug(MotionController_RightGrip);
}

void AVREntityCharacter::DisplayMotionControllerDebug(UMotionControllerComponent* MotionController)
{
	FString MotionSource = MotionController->GetTrackingMotionSource().ToString();

	bool bIsHead = MotionSource.Contains(TEXT("Head"));
	if (bIsHead) return;
	bool bIsGrip = MotionSource.Contains(TEXT("Grip"));
	bool bIsAim = !bIsGrip && MotionSource.Contains(TEXT("Aim"));

	UWorld* World = MotionController->GetWorld();
	FVector ControllerLocation = MotionController->GetComponentLocation();
	FColor DebugColor = bIsGrip ? FColor::Green /* Grip Color */ : (bIsAim ? FColor::Emerald /* Aim Color */ : FColor::White /* Default Color */);
	float Radius = bIsGrip ? 3.0f /* Grip */ : (bIsAim ? 2.5f /* Aim */ : 2.0f /* Default */);
	int Segments = 16;

	DrawDebugSphere(World, ControllerLocation, Radius, Segments, DebugColor);
	DrawDebugLine(World, ControllerLocation, ControllerLocation + (MotionController->GetForwardVector() * Radius * 1.5f), FColor::Red);
	DrawDebugLine(World, ControllerLocation, ControllerLocation + (MotionController->GetRightVector() * Radius * 1.5f), FColor::Green);
	DrawDebugLine(World, ControllerLocation, ControllerLocation + (MotionController->GetUpVector() * Radius * 1.5f), FColor::Blue);
}


////////////////////
// INPUT COUNTERS //
////////////////////


bool FInputCounterTracker::StartCounter(UInputAction* InputAction)
{
	if (Counters.Contains(InputAction)) return false;

	Counters.Add(InputAction, 0.0f);
	return true;
}

bool FInputCounterTracker::StopCounter(UInputAction* InputAction, float& OutFinalValue)
{
	if (!Counters.Contains(InputAction)) return false;

	return Counters.RemoveAndCopyValue(InputAction, OutFinalValue);
}

bool FInputCounterTracker::HasCounter(UInputAction* InputAction, float& OutValue)
{
	bool ReturnValue = Counters.Contains(InputAction);
	OutValue = ReturnValue ? Counters[InputAction] : 0.0f;
	return ReturnValue;
}

float FInputCounterTracker::GetCounter(UInputAction* InputAction)
{
	return Counters.Contains(InputAction) ? Counters[InputAction] : 0.0f;
}

void FInputCounterTracker::TickCounters(float DeltaTime)
{
	if (Counters.IsEmpty()) return;

	for (const auto& Pair : Counters)
	{
		Counters[Pair.Key] += DeltaTime;
	}
}