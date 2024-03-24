// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectPooler.generated.h"

UCLASS()
class PROJECTECLIPSE_API AObjectPooler : public AActor
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<AActor*> PooledActors;
	
public:	
	// Sets default values for this actor's properties
	AObjectPooler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void WakeActor(UClass ToSpawn, FVector Position, FRotator Rotation);
};
