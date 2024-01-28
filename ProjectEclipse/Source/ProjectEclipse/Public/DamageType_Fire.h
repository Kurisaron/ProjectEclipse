// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageType_Base.h"
#include "DamageType_Fire.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTECLIPSE_API UDamageType_Fire : public UDamageType_Base
{
	GENERATED_BODY()
	
	virtual void StatusEffect(APawn& Target) override;
};
