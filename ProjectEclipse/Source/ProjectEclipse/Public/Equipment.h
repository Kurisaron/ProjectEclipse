// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputMappingContext.h"
#include "Equipment.generated.h"

class UEquipmentComponent;

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UEquipment : public UObject
{
	GENERATED_BODY()

	UEquipmentComponent* Wielder;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMesh* Mesh;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* EquipmentMappingContext;

public:

	UEquipment();

	virtual void Equip(UEquipmentComponent* NewWielder);

	virtual void Unequip();

	virtual void PrimaryUse(bool Pressed, float PressedTime);

	UEquipmentComponent* GetWielder();

	UStaticMesh* GetMesh();

	UInputMappingContext* GetInputMappingContext();
};
