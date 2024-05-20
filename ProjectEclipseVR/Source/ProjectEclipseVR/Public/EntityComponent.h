// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EntityComponent.generated.h"

class UEntityAttribute;
class UTrait;
class UFaction;

UCLASS( BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTECLIPSEVR_API UEntityComponent : public UActorComponent
{
	GENERATED_BODY()

	/** Key-value map storing entity's current values for its classes of attributes */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	TMap<TSubclassOf<UEntityAttribute>, int> Attributes;

	/** List storing entity's currently held traits */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UTrait>> Traits;

	/** Key-value map storing entity's current reputation with the different factions */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	TMap<TSubclassOf<UFaction>, float> Reputation;

public:	
	// Sets default values for this component's properties
	UEntityComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintPure, Category = "Entity Component|Stats|Attributes")
	virtual TMap<TSubclassOf<UEntityAttribute>, int> GetAttributes();

	UFUNCTION(BlueprintPure, Category = "Entity Component|Stats|Attributes")
	virtual TArray<TSubclassOf<UEntityAttribute>> GetAttributeTypes();

};
