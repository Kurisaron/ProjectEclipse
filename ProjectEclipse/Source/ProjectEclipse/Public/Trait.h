// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityAttribute.h"
#include "Trait.generated.h"

/**
 * Traits are features that are held by an entity within the game. Traits extend the entities' core functionality, either modifying existing abilities or supplying new ones
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UTrait : public UObject
{
	GENERATED_BODY()

	/** Main icon used to specify which trait in UI */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icon", meta = (AllowPrivateAccess = "true"))
	UTexture2D* ForegroundIcon;
	/** Color used for trait's icon background */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icon", meta = (AllowPrivateAccess = "true"))
	FColor BackgroundColor;


	/** Name that will be used for game UI */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString DisplayName;
	/** Name used to help check for matches */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString KeyName;

	/** Modifiers meant to add/subtract flat values from the total */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat Modifiers", meta = (AllowPrivateAccess = "true"))
	TMap<TSubclassOf<UEntityAttribute>, float> AttributeModifiers;

public:

	UTrait();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Traits")
	void ApplyTrait(AActor* Recipient);
	virtual void ApplyTrait_Implementation(AActor* Recipient);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Traits")
	void RemoveTrait(AActor* Recipient);
	virtual void RemoveTrait_Implementation(AActor* Recipient);


	UFUNCTION(BlueprintPure)
	FString GetDisplayName();

	UFUNCTION(BlueprintPure)
	FString GetKeyName();

	UFUNCTION(BlueprintPure)
	bool IsKeyName(FString Key);
};
