// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EntityAttribute.h"
#include "Trait.h"
#include "Faction.h"
#include "EntityComponent.generated.h"


USTRUCT(BlueprintType)
struct FFactionStatus
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FFactionRank CurrentRank;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float CurrentReputation;
};


/**
 * Entity component is to be attached to actors (especially pawns and characters) that have a significant enough role within the game. These entities are things such as creatures, vehicles, and destructibles.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTECLIPSE_API UEntityComponent : public UActorComponent
{
	GENERATED_BODY()

	/** Default attributes for character */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Attributes", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UEntityAttribute>> DefaultAttributes;

	/** Current values for various attributes */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats|Attributes", meta = (AllowPrivateAccess = "true"))
	TMap<UEntityAttribute*, int> AttributeValues;



	/** Default traits for character */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats|Traits", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UTrait>> DefaultTraits;

	/** Current traits held by character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats|Traits", meta = (AllowPrivateAccess = "true"))
	TArray<UTrait*> CurrentTraits;



	/** Current relationships with factions */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats|Factions", meta = (AllowPrivateAccess = "true"))
	TMap<UFaction*, FFactionStatus> Reputation;

public:	
	// Sets default values for this component's properties
	UEntityComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintPure, Category = "Stats|Attributes")
	bool HasAttribute(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Attributes")
	int GetAttributeValue(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Traits")
	bool HasTrait(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Traits")
	UTrait* GetTrait(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Factions")
	FFactionStatus GetReputation(FString ID);


};
