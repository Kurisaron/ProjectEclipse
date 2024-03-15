// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Firearm.generated.h"

class AProjectEclipseCharacter;
class UEquipmentComponent;
class UFirearmMode;
class UCameraComponent;

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

	/** Default aim function for firearm, will use default zoom if set to none */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Modes, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UFirearmMode> DefaultSecondaryMode;
	UFirearmMode* CurrentSecondaryMode;

	/** Default alternate fire function firearm, not all weapons will  */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Modes, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UFirearmMode> DefaultAlternateMode;
	UFirearmMode* CurrentAlternateMode;

public:

	UFirearm();

	void Load();

	virtual void Equip(UEquipmentComponent* NewWielder) override;

	virtual void Unequip() override;

	void PrimaryUse(bool Pressed, float PressedTime);
	virtual void PrimaryUse_Implementation(bool Pressed, float PressedTime) override;

	void CyclePrimary();

	void SecondaryUse(bool Pressed, float PressedTime);
	virtual void SecondaryUse_Implementation(bool Pressed, float PressedTime) override;

	void AlternateUse(bool Pressed, float PressedTime);
	virtual void AlternateUse_Implementation(bool Pressed, float PressedTime) override;

};
