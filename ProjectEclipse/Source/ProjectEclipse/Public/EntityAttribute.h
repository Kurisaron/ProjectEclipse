// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityAttribute.generated.h"

/**
 * Entity Attributes are core stats that influence an entity's proficiency at performing at task
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UEntityAttribute : public UObject
{
	GENERATED_BODY()
	
	/** Name that will be used for game UI */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString DisplayName;
	/** Name used to help check for matches */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString KeyName;

	/** Minimum value that the attribute can be */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Values", meta = (AllowPrivateAccess = "true"))
	int MinimumValue;
	/** Maximum value that the attribute can be */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Values", meta = (AllowPrivateAccess = "true"))
	int MaximumValue;

public:

	UEntityAttribute();

	UFUNCTION(BlueprintPure)
	FString GetDisplayName();

	UFUNCTION(BlueprintPure)
	FString GetKeyName();

	UFUNCTION(BlueprintPure)
	bool IsKeyName(FString Value);

	UFUNCTION(BlueprintPure)
	int GetMinimum();

	UFUNCTION(BlueprintPure)
	int GetMaximum();
};
