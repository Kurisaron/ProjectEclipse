// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "HeadMountedDisplayTypes.h"
#include "IXRTrackingSystem.h"
#include "VRRootComponent.generated.h"

class AVREntityCharacter;

/**
 * Capsule component that maintains its location with the camera/HMD to facilitate room-scale movement
 */
UCLASS()
class PROJECTECLIPSEVR_API UVRRootComponent : public UCapsuleComponent
{
	GENERATED_BODY()

	// Whether the root component should run roomscale movement
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracking", meta = (AllowPrivateAccess = "true"))
	bool bTrackRoomscaleMovement = true;

	// Time in seconds between roomscale movement updates. Rate does not change after BeginPlay
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tracking", meta = (AllowPrivateAccess = "true"))
	float TrackingRate = 0.1f;

	// Should the editor draw debug tools during gameplay for ensuring the root component is working correctly
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tracking", AdvancedDisplay, meta = (AllowPrivateAccess = "true"))
	bool bDisplayTrackingDebug = false;

	USceneComponent* TrackedOrigin;

	UCameraComponent* TrackedCamera;

	FTimerHandle MemberHandle;
	
public:

	UVRRootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	void SetupRoomscale(USceneComponent* Origin, UCameraComponent* Camera);

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void UpdateRoomscaleMovement();

private:

	void DisplayTrackingDebug(bool bPreUpdate);


};
