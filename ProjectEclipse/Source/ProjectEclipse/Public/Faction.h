// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Faction.generated.h"

USTRUCT(BlueprintType)
struct FFactionRank
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Requirement;

};

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UFaction : public UObject
{
	GENERATED_BODY()
	
	/** Icon to be used to represent the faction (at least most often) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icon", meta = (AllowPrivateAccess = "true"))
	UTexture2D* Icon;

	/** Category for faction to be organized under (Empire, Guild, etc.) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Category", meta = (AllowPrivateAccess = "true"))
	FString Category;

	/** Name used to represent the faction to the player (via UI) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString DisplayName;
	/** Name used by the system/code to perform operations such as check for matches */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString ID;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ranks", meta = (AllowPrivateAccess = "true"))
	TMap<int, FFactionRank> RankLevels;


public:

	UFaction();

	UFUNCTION(BlueprintPure)
	UTexture2D* GetIcon();

	UFUNCTION(BlueprintPure)
	FString GetCategory();

	UFUNCTION(BlueprintPure)
	FString GetDisplayName();

	UFUNCTION(BlueprintPure)
	FString GetID();

	UFUNCTION(BlueprintPure)
	bool IsID(FString Check);

	UFUNCTION(BlueprintPure)
	FFactionRank GetRank(int Level);

	UFUNCTION(BlueprintPure)
	bool HasRank(int Level);

};
