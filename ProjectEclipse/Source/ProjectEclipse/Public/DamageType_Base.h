// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "DamageType_Base.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTECLIPSE_API UDamageType_Base : public UDamageType
{
	GENERATED_BODY()
	
public:

	virtual void StatusEffect(APawn& Target);
};
