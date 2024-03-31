// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ProjectEclipseGameInstance.generated.h"

class UObjectPooler;

/**
 * 
 */
UCLASS()
class PROJECTECLIPSE_API UProjectEclipseGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	UObjectPooler* Pooler;

public:

	UProjectEclipseGameInstance();

	virtual void Init() override;

	UObjectPooler* NewPooler();

	UObjectPooler* GetPooler() { return Pooler; }

};
