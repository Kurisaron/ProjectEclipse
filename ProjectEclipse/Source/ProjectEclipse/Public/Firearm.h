// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Firearm.generated.h"

class AProjectEclipseCharacter;
class UEquipmentComponent;
class UFirearmMode;

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UFirearm : public UWeapon
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CyclePrimaryAction;
	uint32 CyclePrimaryBindingHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Modes, meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UFirearmMode>> PrimaryCycle;
	UFirearmMode* CurrentPrimaryMode;

public:

	UFirearm();

	void Load();

	virtual void Equip(UEquipmentComponent* NewWielder) override;

	virtual void Unequip() override;

	virtual void PrimaryUse(bool Pressed, float PressedTime) override;

	void CyclePrimary();
};
