// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectPooler.generated.h"

class UProjectEclipseGameInstance;
class AProjectileActor;

UCLASS()
class PROJECTECLIPSE_API UObjectPooler : public UObject
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game Instance", meta = (AllowPrivateAccess = "true"))
	UProjectEclipseGameInstance* GameInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool", meta = (AllowPrivateAccess = "true"))
	TArray<AActor*> PooledActors;
	
public:	
	// Sets default values for this actor's properties
	UObjectPooler();

	void Init(UProjectEclipseGameInstance* NewInstance);

	AProjectileActor* WakeProjectile(UClass* ToWake, FVector Position, FRotator Rotation);

	template <class T>
	T* WakeActor(UClass ToWake, FVector Position, FRotator Rotation);

protected:

	template <class T>
	T* SpawnActor(UClass ToSpawn, FVector Position, FRotator Rotation);

public:

	bool InPool(AActor* Check);

	void AddToPool(AActor* NewActor);

	void RemoveFromPool(AActor* OldActor);
};
