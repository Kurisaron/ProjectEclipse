// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Trait.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UTrait : public UObject
{
	GENERATED_BODY()

	/** Modifiers meant to add/subtract flat values from the total */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat Modifiers", meta = (AllowPrivateAccess = "true"))
	TMap<FString, float> Modifiers;

public:

	UTrait();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Traits")
	void ApplyTrait(AActor* Recipient);
	virtual void ApplyTrait_Implementation(AActor* Recipient);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Traits")
	void RemoveTrait(AActor* Recipient);
	virtual void RemoveTrait_Implementation(AActor* Recipient);

};
