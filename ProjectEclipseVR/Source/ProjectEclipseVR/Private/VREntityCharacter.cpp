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
	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules::KeepWorldTransform;
	AttachmentRules.bWeldSimulatedBodies = true;
	Camera->AttachToComponent(VROrigin, AttachmentRules);
	Camera->bLockToHmd = true;

	// Setup roomscale movement
	VRRootComp->SetupRoomscale(VROrigin, Camera);

	// Create the motion controllers
	FName SourceName = TEXT("Head");
	MotionController_Head = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_Head->AttachToComponent(VROrigin, AttachmentRules);
	MotionController_Head->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("LeftGrip");
	MotionController_LeftGrip = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_LeftGrip->AttachToComponent(VROrigin, AttachmentRules);
	MotionController_LeftGrip->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("LeftAim");
	MotionController_LeftAim = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_LeftAim->AttachToComponent(VROrigin, AttachmentRules);
	MotionController_LeftAim->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("RightGrip");
	MotionController_RightGrip = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_RightGrip->AttachToComponent(VROrigin, AttachmentRules);
	MotionController_RightGrip->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("RightAim");
	MotionController_RightAim = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_RightAim->AttachToComponent(VROrigin, AttachmentRules);
	MotionController_RightAim->SetTrackingMotionSource(SourceName);

}

void AVREntityCharacter::BeginPlay()
{
	AEntityCharacter::BeginPlay();

	SetupTrackingOrigin();

	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("vr.PixelDensity 1.0"));

}

void AVREntityCharacter::SetupTrackingOrigin()
{
	if (GEngine && GEngine->XRSystem)
		GEngine->XRSystem->SetTrackingOrigin(EHMDTrackingOrigin::Stage);
}

void AVREntityCharacter::Tick(float DeltaTime)
{
	AEntityCharacter::Tick(DeltaTime);

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
		EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Started, this, &AVREntityCharacter::LeftGrab);
		EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Completed, this, &AVREntityCharacter::LeftRelease);
		EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Started, this, &AVREntityCharacter::RightGrab);
		EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Completed, this, &AVREntityCharacter::RightRelease);

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
	FVector2D MovementVector = Value.Get<FVector2D>();

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
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
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

void AVREntityCharacter::LeftGrab()
{
	UGripComponent* FoundGrip = GetGripNearController(MotionController_LeftGrip);
	if (IsValid(FoundGrip) && FoundGrip->TryGrab(MotionController_LeftGrip))
	{
		LeftHeldGrip = FoundGrip;
		if (RightHeldGrip == LeftHeldGrip) RightHeldGrip = nullptr;
	}
}

void AVREntityCharacter::LeftRelease()
{
	if (IsValid(LeftHeldGrip) && LeftHeldGrip->TryRelease())
		LeftHeldGrip = nullptr;
}

void AVREntityCharacter::RightGrab()
{
	UGripComponent* FoundGrip = GetGripNearController(MotionController_RightGrip);
	if (IsValid(FoundGrip) && FoundGrip->TryGrab(MotionController_RightGrip))
	{
		RightHeldGrip = FoundGrip;
		if (LeftHeldGrip == RightHeldGrip) LeftHeldGrip = nullptr;
	}
}

void AVREntityCharacter::RightRelease()
{
	if (IsValid(RightHeldGrip) && RightHeldGrip->TryRelease())
		RightHeldGrip = nullptr;
}

UGripComponent* AVREntityCharacter::GetGripNearController(UMotionControllerComponent* MotionController)
{
	FVector ControllerGripPosition = MotionController->GetComponentLocation();

	UWorld* World = GetWorld();
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_PhysicsBody));

	FHitResult HitResult;

	UGripComponent* ClosestGrip = nullptr;
	float ClosestDistance = 9999999.0f;

	bool hit = UKismetSystemLibrary::SphereTraceSingleForObjects(World, ControllerGripPosition, ControllerGripPosition, GrabRadius, ObjectTypes, false, TArray<AActor*, FDefaultAllocator>(), EDrawDebugTrace::None, HitResult, true, FColor::Cyan, FColor::Green, 1.0f);
	if (hit)
	{
		AActor* HitActor = HitResult.GetActor();
		TArray<UGripComponent*> Grips;
		HitActor->GetComponents<UGripComponent>(Grips, true);

		if (Grips.Num() > 0)
		{
			for (auto Element : Grips)
			{
				FVector ItemGripPosition = Element->GetComponentLocation();
				FVector PositionDifference = ItemGripPosition - ControllerGripPosition;
				float DifferenceLengthSquared = PositionDifference.SquaredLength();
				if (DifferenceLengthSquared <= ClosestDistance)
				{
					ClosestDistance = DifferenceLengthSquared;
					ClosestGrip = Element;
				}
			}
		}
	}

	return ClosestGrip;
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