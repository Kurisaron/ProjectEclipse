// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Equipment.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UWeapon : public UEquipment
{
	GENERATED_BODY()


public:

	UWeapon();

	void PrimaryUse(bool Pressed, float PressedTime);
	virtual void PrimaryUse_Implementation(bool Pressed, float PressedTime) override;

	void SecondaryUse(bool Pressed, float PressedTime);
	virtual void SecondaryUse_Implementation(bool Pressed, float PressedTime) override;

	void AlternateUse(bool Pressed, float PressedTime);
	virtual void AlternateUse_Implementation(bool Pressed, float PressedTime) override;

};
