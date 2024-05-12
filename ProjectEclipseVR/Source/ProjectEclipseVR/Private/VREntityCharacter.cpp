// Fill out your copyright notice in the Description page of Project Settings.


#include "VREntityCharacter.h"
#include "GripComponent.h"

AVREntityCharacter::AVREntityCharacter(const FObjectInitializer& ObjectInitializer) : AEntityCharacter(ObjectInitializer.SetDefaultSubobjectClass<UVRMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	SetRootComponent(VROrigin = CreateDefaultSubobject<USphereComponent>(TEXT("VROrigin")));
	VROrigin->SetSphereRadius(10.0f);
	VROrigin->bDynamicObstacle = true;
	VROrigin->SetSimulatePhysics(false);
	VROrigin->SetEnableGravity(true);

	UCapsuleComponent* Capsule = GetCapsuleComponent();
	Capsule->InitCapsuleSize(42.f, 96.0f);
	Capsule->SetupAttachment(RootComponent);
	Capsule->AddLocalOffset(FVector(0.0f, 0.0f, Capsule->GetScaledCapsuleHalfHeight()));

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

	// Create the HMD camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules::KeepWorldTransform;
	AttachmentRules.bWeldSimulatedBodies = true;
	Camera->AttachToComponent(RootComponent, AttachmentRules);
	Camera->bLockToHmd = true;

	// Create the motion controllers
	FName SourceName = TEXT("Head");
	MotionController_Head = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_Head->AttachToComponent(RootComponent, AttachmentRules);
	MotionController_Head->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("LeftGrip");
	MotionController_LeftGrip = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_LeftGrip->AttachToComponent(RootComponent, AttachmentRules);
	MotionController_LeftGrip->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("LeftAim");
	MotionController_LeftAim = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_LeftAim->AttachToComponent(RootComponent, AttachmentRules);
	MotionController_LeftAim->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("RightGrip");
	MotionController_RightGrip = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_RightGrip->AttachToComponent(RootComponent, AttachmentRules);
	MotionController_RightGrip->SetTrackingMotionSource(SourceName);
	SourceName = TEXT("RightAim");
	MotionController_RightAim = CreateDefaultSubobject<UMotionControllerComponent>(SourceName);
	MotionController_RightAim->AttachToComponent(RootComponent, AttachmentRules);
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
	GEngine->XRSystem->SetTrackingOrigin(EHMDTrackingOrigin::Stage);
}

void AVREntityCharacter::Tick(float DeltaTime)
{
	AEntityCharacter::Tick(DeltaTime);

	DrawDebugSphere(GetWorld(), RootComponent->GetComponentLocation(), 20.0f, 32, FColor::Red);
	EHMDTrackingOrigin::Type TrackingOriginType = GEngine->XRSystem->GetTrackingOrigin();
	FTransform TrackingOriginTransform;
	if (GEngine->XRSystem->GetTrackingOriginTransform(TrackingOriginType, TrackingOriginTransform))
	{
		DrawDebugSphere(GetWorld(), TrackingOriginTransform.GetLocation(), 25.0f, 32, FColor::Magenta);
	}

	if (bDrawMotionControllerDebug)
	{
		UWorld* World = GetWorld();
		float GripRadius(5.0f), AimRadius(3.0f);
		int Segments(20);
		FColor GripColor(FColor::Blue), AimColor(FColor::Green);
		DrawDebugSphere(World, MotionController_LeftGrip->GetComponentLocation(), GripRadius, Segments, GripColor, false);
		DrawDebugSphere(World, MotionController_RightGrip->GetComponentLocation(), GripRadius, Segments, GripColor, false);
		DrawDebugSphere(World, MotionController_LeftAim->GetComponentLocation(), AimRadius, Segments, AimColor, false);
		DrawDebugSphere(World, MotionController_RightAim->GetComponentLocation(), AimRadius, Segments, AimColor, false);
	}
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

UVRMovementComponent* AVREntityCharacter::GetVRMovement() { return GetCharacterMovement<UVRMovementComponent>(); }
