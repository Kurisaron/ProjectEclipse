// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class UEntityComponent;

USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()

	// Name used to represent the item to the player in UI
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString DisplayName;

	// ID used by the system/code to locate an item or check for matches
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString ID;

public:

	FItemData() { DisplayName = ID = TEXT(""); }
	FItemData(FString NewName, FString NewID)
	{
		DisplayName = NewName;
		ID = NewID;
	}
};

USTRUCT(BlueprintType)
struct FItemWielderStatus
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AActor* Actor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UEntityComponent* Entity;
};

/**
 * Items are any object that can be held
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECTECLIPSEVR_API AItem : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item|Data", meta = (AllowPrivateAccess = "true"))
	FItemData ItemData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Wielder", meta = (AllowPrivateAccess = "true"))
	FItemWielderStatus Wielder;

public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure, Category = "Item|Data")
	virtual FItemData GetItemData();

};
