// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputAction.h"
#include "EntityAction.generated.h"

class UEntityComponent;

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UEntityAction : public UObject
{
	GENERATED_BODY()
	
	/** Main icon used to specify which action in UI */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icon", meta = (AllowPrivateAccess = "true"))
	UTexture2D* ForegroundIcon;
	/** Color used for action's icon background */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icon", meta = (AllowPrivateAccess = "true"))
	FColor BackgroundColor;


	/** Name that will be used for game UI */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString DisplayName;
	/** Name used to help check for matches */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	FString ID;
	/** Tags used by the system to check for categories/types the trait might fall under */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Names", meta = (AllowPrivateAccess = "true"))
	TArray<FString> Tags;


public:

	UEntityAction();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Entity Action")
	void Execute(UEntityComponent* Entity, UInputAction* Input, const bool Pressed, const float PressedTime);

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
