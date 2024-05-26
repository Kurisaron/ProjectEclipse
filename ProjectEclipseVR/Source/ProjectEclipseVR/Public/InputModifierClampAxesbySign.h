// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "InputModifierClampAxesbySign.generated.h"

USTRUCT(BlueprintType)
struct FAxisClampRules
{
	GENERATED_BODY()

	// Should the given axis be clamped by a positive/negative sign
	UPROPERTY(EditAnywhere, BlueprintType)
	bool ClampBySign = false;
	
	// True = output is clamped to positive value(s), false = negative value(s) [Only affects output if clamped]
	UPROPERTY(EditAnywhere, BlueprintType)
	bool ClampSignIsPositive = true;

	// Should the output value have it's sign removed, making it positive [Only affects output clamped to negative values]
	UPROPERTY(EditAnywhere, BlueprintType)
	bool RemoveSign = false;

};

/**
 * 
 */
UCLASS()
class PROJECTECLIPSEVR_API UInputModifierClampAxesBySign : public UInputModifier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintType)
	FAxisClampRules X_AxisClampRules;
	UPROPERTY(EditAnywhere, BlueprintType)
	FAxisClampRules Y_AxisClampRules;
	UPROPERTY(EditAnywhere, BlueprintType)
	FAxisClampRules Z_AxisClampRules;

public:

	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;
};
