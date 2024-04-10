// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectPooler.generated.h"

class UProjectEclipseGameInstance;
class AProjectileActor;

UCLASS(ClassGroup = (Custom), config = Game)
class PROJECTECLIPSE_API UObjectPooler : public UObject
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game Instance", meta = (AllowPrivateAccess = "true"))
	UProjectEclipseGameInstance* GameInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool", meta = (AllowPrivateAccess = "true"))
	TArray<AProjectileActor*> PooledProjectiles;
	
public:	
	// Sets default values for this actor's properties
	UObjectPooler();

	void Init(UProjectEclipseGameInstance* NewInstance);

	AProjectileActor* WakeProjectile(TSubclassOf<AProjectileActor> ToWake, FVector Position, FRotator Rotation);

protected:

	AProjectileActor* SpawnProjectile(TSubclassOf<AProjectileActor> ToSpawn, FVector Position, FRotator Rotation);

public:

	bool InPool(AProjectileActor* Check);

	void AddToPool(AProjectileActor* NewActor);

	void RemoveFromPool(AProjectileActor* OldActor);
};
