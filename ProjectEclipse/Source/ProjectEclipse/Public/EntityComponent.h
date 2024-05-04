// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EntityAttribute.h"
#include "Trait.h"
#include "Faction.h"
#include "EntityComponent.generated.h"

class UEntityAction;

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

	/** Current values for various attributes */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	TMap<TSubclassOf<UEntityAttribute>, int> Attributes;

	/** Actions that the entity can perform */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UEntityAction>> Actions;

	/** Traits held by entity */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Traits", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UTrait>> Traits;

	/** Current relationships with factions */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Factions", meta = (AllowPrivateAccess = "true"))
	TMap<TSubclassOf<UFaction>, FFactionStatus> Reputation;

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
	TSubclassOf<UEntityAttribute> GetAttribute(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Attributes")
	int GetAttributeValue(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Actions")
	bool HasAction(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Actions")
	TSubclassOf<UEntityAction> GetAction(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Traits")
	bool HasTrait(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Traits")
	TSubclassOf<UTrait> GetTrait(FString ID);

	UFUNCTION(BlueprintPure, Category = "Stats|Factions")
	FFactionStatus GetReputation(FString ID);


};
