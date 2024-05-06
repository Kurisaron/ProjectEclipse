// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "Item.h"
#include "Equipment.generated.h"

/**
 * Equipment are a subtype of item that have some sort of direct use for the wielder. Equipment often has some additional input attached to it (but not always)
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECTECLIPSEVR_API AEquipment : public AItem
{
	GENERATED_BODY()

	/** Additional inputs that the equipment allows for the player */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item|Equipment|Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* EquipmentInputs;

public:

	// Sets default values for this actor's properties
	AEquipment();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintPure, Category = "Item|Equipment|Input")
	UInputMappingContext* GetInputs();

};
