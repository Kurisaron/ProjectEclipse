// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Equipment.h"
#include "Weapon.generated.h"

/**
 * Weapons are a subtype of equipment to be used to combat enemies in the world. Weapons typically have damagers (aside from weapon types like firearms that lauch projectiles)
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECTECLIPSEVR_API AWeapon : public AEquipment
{
	GENERATED_BODY()
	
public:

	// Sets default values for this actor's properties
	AWeapon();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
