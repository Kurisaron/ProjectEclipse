// Fill out your copyright notice in the Description page of Project Settings.


#include "VREntityPawn.h"
#include "GripComponent.h"


AVREntityPawn::AVREntityPawn() : AEntityPawn()
{
	VROrigin = CreateDefaultSubobject<USphereComponent>(TEXT("VROrigin"));
	SetRootComponent(VROrigin);
	VROrigin->SetSphereRadius(10.0f);
	VROrigin->bDynamicObstacle = true;
	VROrigin->SetSimulatePhysics(false);
	VROrigin->SetEnableGravity(true);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules::KeepWorldTransform;
	AttachmentRules.bWeldSimulatedBodies = true;
	Camera->AttachToComponent(RootComponent, AttachmentRules);
	Camera->bLockToHmd = true;

	Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VRBody"));
	Body->AttachToComponent(RootComponent, AttachmentRules);

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

void AVREntityPawn::BeginPlay()
{
	AEntityPawn::BeginPlay();

	SetupTrackingOrigin();

	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("vr.PixelDensity 1.0"));

	if (auto PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultContext, 0);
			Subsystem->AddMappingContext(HandsContext, 0);
		}
	}
}

void AVREntityPawn::Tick(float DeltaTime)
{
	AEntityPawn::Tick(DeltaTime);

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

void AVREntityPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	AEntityPawn::SetupPlayerInputComponent(PlayerInputComponent);

	if (auto EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Bind default context inputs
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AVREntityPawn::Move);
		EnhancedInput->BindAction(TurnAction, ETriggerEvent::Triggered, this, &AVREntityPawn::Turn);
		EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Started, this, &AVREntityPawn::LeftGrab);
		EnhancedInput->BindAction(LeftGrabAction, ETriggerEvent::Completed, this, &AVREntityPawn::LeftRelease);
		EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Started, this, &AVREntityPawn::RightGrab);
		EnhancedInput->BindAction(RightGrabAction, ETriggerEvent::Completed, this, &AVREntityPawn::RightRelease);

		// Bind hands context inputs
		EnhancedInput->BindAction(LeftPointAction, ETriggerEvent::Triggered, this, &AVREntityPawn::LeftPoint);
		EnhancedInput->BindAction(RightPointAction, ETriggerEvent::Triggered, this, &AVREntityPawn::RightPoint);
		EnhancedInput->BindAction(LeftThumbUpAction, ETriggerEvent::Triggered, this, &AVREntityPawn::LeftThumbUp);
		EnhancedInput->BindAction(RightThumbUpAction, ETriggerEvent::Triggered, this, &AVREntityPawn::RightThumbUp);
		EnhancedInput->BindAction(LeftGraspAction, ETriggerEvent::Triggered, this, &AVREntityPawn::LeftGrasp);
		EnhancedInput->BindAction(RightGraspAction, ETriggerEvent::Triggered, this, &AVREntityPawn::RightGrasp);
		EnhancedInput->BindAction(LeftIndexCurlAction, ETriggerEvent::Triggered, this, &AVREntityPawn::LeftIndexCurl);
		EnhancedInput->BindAction(RightIndexCurlAction, ETriggerEvent::Triggered, this, &AVREntityPawn::RightIndexCurl);

	}
}


void AVREntityPawn::SetupTrackingOrigin()
{
	GEngine->XRSystem->SetTrackingOrigin(EHMDTrackingOrigin::Stage);
}

FVRHandPoseData AVREntityPawn::GetLeftHandPose() { return LeftHandPose; }

FVRHandPoseData AVREntityPawn::GetRightHandPose() { return RightHandPose; }

void AVREntityPawn::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

}

void AVREntityPawn::Turn(const FInputActionValue& Value)
{
	float TurnScale = Value.Get<float>();

	// TO-DO: Rotate the character
}

void AVREntityPawn::LeftGrab()
{
	UGripComponent* FoundGrip = GetGripNearController(MotionController_LeftGrip);
	if (IsValid(FoundGrip) && FoundGrip->TryGrab(MotionController_LeftGrip))
	{
		LeftHeldGrip = FoundGrip;
		if (RightHeldGrip == LeftHeldGrip) RightHeldGrip = nullptr;
	}
}

void AVREntityPawn::LeftRelease()
{
	if (IsValid(LeftHeldGrip) && LeftHeldGrip->TryRelease())
		LeftHeldGrip = nullptr;
}

void AVREntityPawn::RightGrab()
{
	UGripComponent* FoundGrip = GetGripNearController(MotionController_RightGrip);
	if (IsValid(FoundGrip) && FoundGrip->TryGrab(MotionController_RightGrip))
	{
		RightHeldGrip = FoundGrip;
		if (LeftHeldGrip == RightHeldGrip) LeftHeldGrip = nullptr;
	}
}

void AVREntityPawn::RightRelease()
{
	if (IsValid(RightHeldGrip) && RightHeldGrip->TryRelease())
		RightHeldGrip = nullptr;
}

UGripComponent* AVREntityPawn::GetGripNearController(UMotionControllerComponent* MotionController)
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

void AVREntityPawn::LeftPoint(const FInputActionValue& Value)
{
	LeftHandPose.Point = Value.Get<float>();
}

void AVREntityPawn::RightPoint(const FInputActionValue& Value)
{
	RightHandPose.Point = Value.Get<float>();
}

void AVREntityPawn::LeftThumbUp(const FInputActionValue& Value)
{
	LeftHandPose.ThumbUp = Value.Get<float>();
}

void AVREntityPawn::RightThumbUp(const FInputActionValue& Value)
{
	RightHandPose.ThumbUp = Value.Get<float>();
}

void AVREntityPawn::LeftGrasp(const FInputActionValue& Value)
{
	LeftHandPose.Grasp = Value.Get<float>();
}

void AVREntityPawn::RightGrasp(const FInputActionValue& Value)
{
	RightHandPose.Grasp = Value.Get<float>();
}

void AVREntityPawn::LeftIndexCurl(const FInputActionValue& Value)
{
	LeftHandPose.IndexCurl = Value.Get<float>();
}

void AVREntityPawn::RightIndexCurl(const FInputActionValue& Value)
{
	RightHandPose.IndexCurl = Value.Get<float>();
}