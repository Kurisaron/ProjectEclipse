// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileActor.h"
#include "FirearmMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFirearmFireEvent, APawn*, Wielder, const bool, Pressed, const float, PressedTime);

/**
 * 
 */
UCLASS()
class PROJECTECLIPSE_API UFirearmMode : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectiles", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AProjectileActor> Projectile;

	UPROPERTY(BlueprintAssignable)
	FFirearmFireEvent FireEvent;

public:

	virtual void Fire(APawn* Wielder, const bool Pressed, const float PressedTime);
};
