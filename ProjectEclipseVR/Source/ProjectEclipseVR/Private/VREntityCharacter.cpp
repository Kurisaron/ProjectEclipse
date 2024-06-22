// Fill out your copyright notice in the Description page of Project Settings.


#include "VREntityCharacter.h"
#include "VRRootComponent.h"
#include "GripComponent.h"
#include "EntityCharacterMeshComponent.h"

AVREntityCharacter::AVREntityCharacter(const FObjectInitializer& ObjectInitializer) : AEntityCharacter(ObjectInitializer.SetDefaultSubobjectClass<UVRMovementComponent>(ACharacter::CharacterMovementComponentName).SetDefaultSubobjectClass<UVRRootComponent>(ACharacter::CapsuleComponentName))
{
	
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	UVRRootComponent* VRRootComp = Cast<UVRRootComponent>(Capsule);
	if (VRRootComp == nullptr)
	{
		return;
	}
	VRRootComp->InitCapsuleSize(10.0f, 96.0f);

	// Only enable the character to rotate the yaw
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->SetUpdatedComponent(RootComponent);
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 800.f;
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

	// Setup/modify values for character mesh
	if (UEntityCharacterMeshComponent* ECharacterMesh = GetEntityCharacterMesh())
	{
		ECharacterMesh->CanRagdoll(false);
	}

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

	// Set up constrained hands
	StableMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftStableMesh"));
	StableMeshL->SetupAttachment(MotionController_LeftGrip);
	StableMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightStableMesh"));
	StableMeshR->SetupAttachment(MotionController_RightGrip);
	ConstrainedMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftConstrainedMesh"));
	ConstrainedMeshL->SetupAttachment(MotionController_LeftGrip);
	ConstrainedMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightConstrainedMesh"));
	ConstrainedMeshR->SetupAttachment(MotionController_RightGrip);
	HandConstraintL = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("LeftConstraint"));
	HandConstraintL->SetupAttachment(MotionController_LeftGrip);
	HandConstraintL->SetConstrainedComponents(StableMeshL, TEXT(""), ConstrainedMeshL, TEXT(""));
	HandConstraintR = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("RightConstraint"));
	HandConstraintR->SetupAttachment(MotionController_RightGrip);
	HandConstraintR->SetConstrainedComponents(StableMeshR, TEXT(""), ConstrainedMeshR, TEXT(""));
	MotionController_LeftGrip->SetConstrainedHand(ConstrainedMeshL);
	MotionController_RightGrip->SetConstrainedHand(ConstrainedMeshR);
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

	UInputActionPool* DefaultPool = GetDefaultPool();
	UInputActionPool* HandsPool = GetHandsPool();
	
	// Add Input Mapping Contexts
	if (auto PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (DefaultPool)
				if (UInputMappingContext* DefaultContext = DefaultPool->GetMappingContext())
					Subsystem->AddMappingContext(DefaultContext, 0);

			if (HandsPool)
				if (UInputMappingContext* HandsContext = HandsPool->GetMappingContext())
					Subsystem->AddMappingContext(HandsContext, 0);
			
		}
	}

	// Set up action bindings
	if (auto EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Bind default context inputs
		
		if (DefaultPool)
		{

			// Bind move input
			if (UInputAction* MoveAction = DefaultPool->GetAction("Move"))
			{
				EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Move);
			}

			// Bind turn input
			if (UInputAction* TurnAction = DefaultPool->GetAction("Turn"))
			{
				EnhancedInput->BindAction(TurnAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Turn);
			}

			// Bind sprint input
			if (UInputAction* SprintAction = DefaultPool->GetAction("Sprint"))
			{
				EnhancedInput->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Sprint);
			}

			// Bind jump input
			if (UInputAction* JumpAction = DefaultPool->GetAction("Jump"))
			{
				EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &AVREntityCharacter::Jump);
				EnhancedInput->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Jump_Value);
				EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &AVREntityCharacter::StopJumping);
			}

			// Bind dodge input
			if (UInputAction* DodgeAction = DefaultPool->GetAction("Dodge"))
			{
				EnhancedInput->BindAction(DodgeAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::Dodge);
			}

			// Bind left grab input
			if (UInputAction* LeftGrabAction = DefaultPool->GetAction("Left Grab"))
			{
				EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Started, this, &AVREntityCharacter::LeftGrab_Press);
				EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftGrab_Value);
				EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Completed, this, &AVREntityCharacter::LeftGrab_Release);
			}

			// Bind right grab input
			if (UInputAction* RightGrabAction = DefaultPool->GetAction("Right Grab"))
			{
				EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Started, this, &AVREntityCharacter::RightGrab_Press);
				EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightGrab_Value);
				EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Completed, this, &AVREntityCharacter::RightGrab_Release);
			}

			// Bind left trigger input
			if (UInputAction* LeftTriggerAction = DefaultPool->GetAction("Left Trigger"))
			{
				EnhancedInput->BindAction(LeftTriggerAction, ETriggerEvent::Started, this, &AVREntityCharacter::LeftTrigger_Press);
				EnhancedInput->BindAction(LeftTriggerAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftTrigger_Value);
				EnhancedInput->BindAction(LeftTriggerAction, ETriggerEvent::Completed, this, &AVREntityCharacter::LeftTrigger_Release);
			}

			// Bind right trigger input
			if (UInputAction* RightTriggerAction = DefaultPool->GetAction("Right Trigger"))
			{
				EnhancedInput->BindAction(RightTriggerAction, ETriggerEvent::Started, this, &AVREntityCharacter::RightTrigger_Press);
				EnhancedInput->BindAction(RightTriggerAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightTrigger_Value);
				EnhancedInput->BindAction(RightTriggerAction, ETriggerEvent::Completed, this, &AVREntityCharacter::RightTrigger_Release);
			}

			// Bind left use button
			if (UInputAction* LeftUseAction = DefaultPool->GetAction("Left Use"))
			{
				EnhancedInput->BindAction(LeftUseAction, ETriggerEvent::Started, this, &AVREntityCharacter::LeftUse_Press);
				EnhancedInput->BindAction(LeftUseAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftUse_Value);
				EnhancedInput->BindAction(LeftUseAction, ETriggerEvent::Completed, this, &AVREntityCharacter::LeftUse_Release);
			}

			// Bind right use button
			if (UInputAction* RightUseAction = DefaultPool->GetAction("Right Use"))
			{
				EnhancedInput->BindAction(RightUseAction, ETriggerEvent::Started, this, &AVREntityCharacter::RightUse_Press);
				EnhancedInput->BindAction(RightUseAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightUse_Value);
				EnhancedInput->BindAction(RightUseAction, ETriggerEvent::Completed, this, &AVREntityCharacter::RightUse_Release);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Default pool not present or invalid"));
		}
		
		// Bind hands context inputs for hand animation
		if (HandsPool)
		{
			
			if (UInputAction* LeftPointAction = HandsPool->GetAction("Left Point"))
			{
				EnhancedInput->BindAction(LeftPointAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftPoint);
			}

			if (UInputAction* RightPointAction = HandsPool->GetAction("Right Point"))
			{
				EnhancedInput->BindAction(RightPointAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightPoint);
			}

			if (UInputAction* LeftThumbUpAction = HandsPool->GetAction("Left Thumb Up"))
			{
				EnhancedInput->BindAction(LeftThumbUpAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftThumbUp);
			}

			if (UInputAction* RightThumbUpAction = HandsPool->GetAction("Right Thumb Up"))
			{
				EnhancedInput->BindAction(RightThumbUpAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightThumbUp);
			}

			if (UInputAction* LeftGraspAction = HandsPool->GetAction("Left Grasp"))
			{
				EnhancedInput->BindAction(LeftGraspAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftGrasp);
			}

			if (UInputAction* RightGraspAction = HandsPool->GetAction("Right Grasp"))
			{
				EnhancedInput->BindAction(RightGraspAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightGrasp);
			}

			if (UInputAction* LeftIndexCurlAction = HandsPool->GetAction("Left Index Curl"))
			{
				EnhancedInput->BindAction(LeftIndexCurlAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::LeftIndexCurl);
			}

			if (UInputAction* RightIndexCurlAction = HandsPool->GetAction("Right Index Curl"))
			{
				EnhancedInput->BindAction(RightIndexCurlAction, ETriggerEvent::Triggered, this, &AVREntityCharacter::RightIndexCurl);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Hands pool not present or invalid"));
		}
		

		// End of action binding setup
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

void AVREntityCharacter::Sprint(const FInputActionValue& Value)
{
	// Input value is a bool
	bool Sprinting = Value.Get<bool>();
}

void AVREntityCharacter::Jump_Value(const FInputActionValue& Value)
{
	float JumpScale = Value.Get<float>();
	float PressedTime(0.0f);

	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* JumpAction = DefaultPool->GetAction("Jump"))
		{
			PressedTime = InputCounters.GetCounter(JumpAction);
		}
	}
	;
	
	UE_LOG(LogTemp, Warning, TEXT("Jump scale is %f and jump pressed time is %f"), JumpScale, PressedTime);
}

void AVREntityCharacter::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("VR Character now jumping"));

	// Attempt to access the default input pool
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		// Attempt to access the jump input action from the input pool
		if (UInputAction* JumpAction = DefaultPool->GetAction("Jump"))
		{
			// Attempt to start the counter for jump input
			if (InputCounters.StartCounter(JumpAction))
			{
				// All prerequisites met for performing jump

				// Broadcast the Jump Event if alternate behaviour has been bound
				// Otherwise perform default jump
				if (JumpEvent.IsBound())
					JumpEvent.Broadcast(this, true, 0.0f);
				else
					ACharacter::Jump();
			}
			else
				UE_LOG(LogTemp, Error, TEXT("Jump counter already present"));
		}
	}

}

void AVREntityCharacter::StopJumping()
{
	UE_LOG(LogTemp, Warning, TEXT("VR Character now NOT jumping"));

	// Attempt to access the default input pool
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		// Attempt to access the jump input action from the input pool
		if (UInputAction* JumpAction = DefaultPool->GetAction("Jump"))
		{
			// Attempt to stop the counter for jump input
			float FinalValue;
			if (InputCounters.StopCounter(JumpAction, FinalValue))
			{
				// All prerequisites met for stopping jump

				// Broadcast the Jump Event if alternate behaviour has been bound
				// Otherwise perform default jump
				if (JumpEvent.IsBound())
					JumpEvent.Broadcast(this, false, FinalValue);
				else
					ACharacter::StopJumping();
			}
			else
				UE_LOG(LogTemp, Error, TEXT("Jump counter not present"));
		}
	}

}

void AVREntityCharacter::Dodge(const FInputActionValue& Value)
{
	bool Dodging = Value.Get<bool>();

	// Attempt to access the default input pool
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		// Attempt to access the dodge input action from the input pool
		if (UInputAction* DodgeAction = DefaultPool->GetAction("Dodge"))
		{
			// Attempt to start/stop the counter for dodge input
			float PressTime(0.0f);
			if ((Dodging ? !InputCounters.StartCounter(DodgeAction) : !InputCounters.StopCounter(DodgeAction, PressTime))) return;

			// All prerequisites met for performing dodge behaviour

			// Broadcast the Dodge Event if alternate behaviour has been bound
			// Otherwise perform default dodge
			if (DodgeEvent.IsBound())
				DodgeEvent.Broadcast(this, Dodging, PressTime);
			else
			{
				// DEFAULT DODGE

				// Get dodge direction (backward if not moving)
				FVector2D DodgeDirection = MoveInput.IsZero() ? MoveInput : FVector2D(0.0, -1.0);

				// Find out which way is forward
				const FRotator Rotation = Camera->GetComponentRotation();
				const FRotator YawRotation(0, Rotation.Yaw, 0);

				// Get forward vector
				const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

				// Get right vector 
				const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

				// Perform dodge
				FVector DodgeVector = (ForwardDirection * DodgeDirection.Y) + (RightDirection * DodgeDirection.X);
				GetVRMovement()->Dodge(DodgeVector);
			}
		}
	}
}

void AVREntityCharacter::LeftGrab_Press()
{
	//MotionController_LeftGrip->Grab();
}

void AVREntityCharacter::LeftGrab_Release()
{
	//MotionController_LeftGrip->Release();
}

void AVREntityCharacter::LeftGrab_Value(const FInputActionValue& Value)
{
	// Input value is a float
	float GripValue = Value.Get<float>();

	// Set the pressure on the left grip controller
	MotionController_LeftGrip->SetGripPressure(GripValue);
}

void AVREntityCharacter::RightGrab_Press()
{
	//MotionController_RightGrip->Grab();
}

void AVREntityCharacter::RightGrab_Release()
{
	//MotionController_RightGrip->Release();
}

void AVREntityCharacter::RightGrab_Value(const FInputActionValue& Value)
{
	// Input value is a float
	float GripValue = Value.Get<float>();

	MotionController_RightGrip->SetGripPressure(GripValue);
}

void AVREntityCharacter::LeftTrigger_Press()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* LeftTriggerAction = DefaultPool->GetAction(TEXT("Left Trigger")))
		{
			if (InputCounters.StartCounter(LeftTriggerAction))
			{
				// All prerequisites met
				// Perform behaviour for when the left trigger is starting to be pressed

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_LeftGrip->GetHeldGrip())
				{
					HeldGrip->Fire(true, 0.0f);
				}
			}
		}
	}
}

void AVREntityCharacter::LeftTrigger_Release()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* LeftTriggerAction = DefaultPool->GetAction(TEXT("Left Trigger")))
		{
			float PressedTime;
			if (InputCounters.StopCounter(LeftTriggerAction, PressedTime))
			{
				// All prerequisites met
				// Perform behaviour for when the left trigger is being released

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_LeftGrip->GetHeldGrip())
				{
					HeldGrip->Fire(false, PressedTime);
				}
			}
		}
	}
}

void AVREntityCharacter::LeftTrigger_Value(const FInputActionValue& Value)
{
	float TriggerValue = Value.Get<float>();
}

void AVREntityCharacter::RightTrigger_Press()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* RightTriggerAction = DefaultPool->GetAction(TEXT("Right Trigger")))
		{
			if (InputCounters.StartCounter(RightTriggerAction))
			{
				// All prerequisites met
				// Perform behaviour for when the right trigger is starting to be pressed

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_RightGrip->GetHeldGrip())
				{
					HeldGrip->Fire(true, 0.0f);
				}
			}
		}
	}
}

void AVREntityCharacter::RightTrigger_Release()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* RightTriggerAction = DefaultPool->GetAction(TEXT("Right Trigger")))
		{
			float PressedTime;
			if (InputCounters.StopCounter(RightTriggerAction, PressedTime))
			{
				// All prerequisites met
				// Perform behaviour for when the left trigger is being released

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_RightGrip->GetHeldGrip())
				{
					HeldGrip->Fire(false, PressedTime);
				}
			}
		}
	}
}

void AVREntityCharacter::RightTrigger_Value(const FInputActionValue& Value)
{
	float TriggerValue = Value.Get<float>();
}

void AVREntityCharacter::LeftUse_Press()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* LeftUseAction = DefaultPool->GetAction(TEXT("Left Use")))
		{
			if (InputCounters.StartCounter(LeftUseAction))
			{
				// All prerequisites met
				// Perform behaviour for when the left use is starting to be pressed

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_LeftGrip->GetHeldGrip())
				{
					HeldGrip->Use(true, 0.0f);
				}
			}
		}
	}
}

void AVREntityCharacter::LeftUse_Release()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* LeftUseAction = DefaultPool->GetAction(TEXT("Left Use")))
		{
			float PressedTime;
			if (InputCounters.StopCounter(LeftUseAction, PressedTime))
			{
				// All prerequisites met
				// Perform behaviour for when the left use is being released

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_LeftGrip->GetHeldGrip())
				{
					HeldGrip->Use(false, PressedTime);
				}
			}
		}
	}
}

void AVREntityCharacter::LeftUse_Value(const FInputActionValue& Value)
{
	float UseValue = Value.Get<float>();
}

void AVREntityCharacter::RightUse_Press()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* RightUseAction = DefaultPool->GetAction(TEXT("Right Use")))
		{
			if (InputCounters.StartCounter(RightUseAction))
			{
				// All prerequisites met
				// Perform behaviour for when the right use is starting to be pressed

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_RightGrip->GetHeldGrip())
				{
					HeldGrip->Use(true, 0.0f);
				}
			}
		}
	}
}

void AVREntityCharacter::RightUse_Release()
{
	if (UInputActionPool* DefaultPool = GetDefaultPool())
	{
		if (UInputAction* RightUseAction = DefaultPool->GetAction(TEXT("Right Use")))
		{
			float PressedTime;
			if (InputCounters.StopCounter(RightUseAction, PressedTime))
			{
				// All prerequisites met
				// Perform behaviour for when the left use is being released

				// Perform logic on Grip Motion Controller's held grip if there is one
				if (UGripComponent* HeldGrip = MotionController_RightGrip->GetHeldGrip())
				{
					HeldGrip->Use(false, PressedTime);
				}
			}
		}
	}
}

void AVREntityCharacter::RightUse_Value(const FInputActionValue& Value)
{
	float UseValue = Value.Get<float>();
}



void AVREntityCharacter::LeftPoint(const FInputActionValue& Value)
{
	LeftHandPose.Point = Value.Get<float>();
}

void AVREntityCharacter::RightPoint(const FInputActionValue& Value)
{
	RightHandPose.Point = Value.Get<float>();
}

void AVREntityCharacter::LeftThumbUp(const FInputActionValue& Value)
{
	LeftHandPose.ThumbUp = Value.Get<float>();
}

void AVREntityCharacter::RightThumbUp(const FInputActionValue& Value)
{
	RightHandPose.ThumbUp = Value.Get<float>();
}

void AVREntityCharacter::LeftGrasp(const FInputActionValue& Value)
{
	LeftHandPose.Grasp = Value.Get<float>();
}

void AVREntityCharacter::RightGrasp(const FInputActionValue& Value)
{
	RightHandPose.Grasp = Value.Get<float>();
}

void AVREntityCharacter::LeftIndexCurl(const FInputActionValue& Value)
{
	LeftHandPose.IndexCurl = Value.Get<float>();
}

void AVREntityCharacter::RightIndexCurl(const FInputActionValue& Value)
{
	RightHandPose.IndexCurl = Value.Get<float>();
}

void AVREntityCharacter::Crouch(bool bClientSimulation)
{
	// TO-DO: Fill-in crouching for VR character
	// Only currently defined to override ACharacter::Crouch default logic
}

UInputActionPool* AVREntityCharacter::GetDefaultPool()
{
	FString DefaultKey(TEXT("Default"));
	bool ContainsDefault = InputPools.Contains(DefaultKey);
	
	if (!ContainsDefault)
		UE_LOG(LogTemp, Warning, TEXT("VR Character does not contain default input pool"));

	return ContainsDefault ? NewObject<UInputActionPool>(this, InputPools[DefaultKey]->GetAuthoritativeClass()) : nullptr;
}

UInputActionPool* AVREntityCharacter::GetHandsPool()
{
	FString HandsKey(TEXT("Hands"));
	bool ContainsHands = InputPools.Contains(HandsKey);

	if (!ContainsHands)
		UE_LOG(LogTemp, Warning, TEXT("VR Character does not contain hands input pool"));

	return ContainsHands ? NewObject<UInputActionPool>(this, InputPools[HandsKey]->GetAuthoritativeClass()) : nullptr;
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


///////////////////////
// INPUT ACTION POOL //
///////////////////////

UInputActionPool::UInputActionPool()
{

}

UInputMappingContext* UInputActionPool::GetMappingContext() { return MappingContext; }

bool UInputActionPool::HasAction(FString Key) { return InputActions.Contains(Key); }

UInputAction* UInputActionPool::GetAction(FString Key)
{
	if (!HasAction(Key))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s input pool does not have action %s"), *GetName(), *Key);
		return nullptr;
	}
	else
		return InputActions[Key];
}
