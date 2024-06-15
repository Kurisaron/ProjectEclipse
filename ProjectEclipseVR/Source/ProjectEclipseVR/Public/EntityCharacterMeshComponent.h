// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "EntityCharacterMeshComponent.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTECLIPSEVR_API UEntityCharacterMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ragdoll", meta = (AllowPrivateAccess = "true"))
	bool bCanRagdoll = true;
	
public:

	UEntityCharacterMeshComponent(const FObjectInitializer& ObjectInitializer);

	// Returns whether this mesh can be ragdolled
	bool CanRagdoll();

	// Sets whether this mesh can be ragdolled
	void CanRagdoll(bool Value);
};
