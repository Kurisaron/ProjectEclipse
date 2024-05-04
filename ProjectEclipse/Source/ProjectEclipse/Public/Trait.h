// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityAttribute.h"
#include "Trait.generated.h"

UENUM(BlueprintType)
enum class EAttributeModifierType : uint8
{
	AMTE_Additive	UMETA(DisplayName = "Additive"),
	AMTE_Multiplicative	UMETA(DisplayName = "Multiplicative"),
};

USTRUCT(BlueprintType)
struct FAttributeModifier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UEntityAttribute> Attribute;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	EAttributeModifierType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Value;
};

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
	/** ID used to help check for matches */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString ID;
	/** Tags used by the system to check for categories/types the trait might fall under */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	TArray<FString> Tags;

	/** Modifiers meant to add/subtract flat values from the total */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat Modifiers", meta = (AllowPrivateAccess = "true"))
	TArray<FAttributeModifier> AttributeModifiers;

public:

	UTrait();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Traits")
	void ApplyTrait(AActor* Recipient);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Traits")
	void RemoveTrait(AActor* Recipient);


	UFUNCTION(BlueprintPure)
	FString GetDisplayName();

	UFUNCTION(BlueprintPure)
	FString GetID();

	UFUNCTION(BlueprintPure)
	bool IsID(FString Key);

	UFUNCTION(BlueprintPure)
	TArray<FString> GetTags();

	UFUNCTION(BlueprintPure)
	bool HasTag(FString Tag);

};
