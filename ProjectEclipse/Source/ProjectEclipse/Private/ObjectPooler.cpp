// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPooler.h"

// Sets default values
UObjectPooler::UObjectPooler()
{
 	
}

void UObjectPooler::Init(UProjectEclipseGameInstance* NewInstance)
{
	GameInstance = NewInstance;
}

AProjectileActor* UObjectPooler::WakeProjectile(UClass* ToWake, FVector Position, FRotator Rotation)
{
	return WakeActor<AProjectileActor>(*ToWake, Position, Rotation);
}

template <class T>
T* UObjectPooler::WakeActor(UClass ToWake, FVector Position, FRotator Rotation)
{
	AActor* FoundActor = PooledActors.FindByPredicate([ToWake](AActor* Actor) {
		return Actor->IsA(ToWake) && Actor->IsHidden();
	});

	if (FoundActor == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No actor in pool found that matches given class, spawning new actor"));
		return SpawnActor<T>(ToWake, Position, Rotation);
	}

	FoundActor->SetActorHiddenInGame(false);
	return Cast<T>(FoundActor);
}

template <class T>
T* UObjectPooler::SpawnActor(UClass ToSpawn, FVector Position, FRotator Rotation)
{
	T* NewActor = GetWorld()->SpawnActor<T>(ToSpawn, Position, Rotation);
	if (NewActor != nullptr) PooledActors.Add(NewActor);
	return NewActor;
}

bool UObjectPooler::InPool(AActor* Check)
{
	return PooledActors.Contains(Check);
}

void UObjectPooler::AddToPool(AActor* NewActor)
{
	if (NewActor == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("New Actor for pool is null"));
		return;
	}
	
	if (!InPool(NewActor))
		PooledActors.Add(NewActor);
	else
		UE_LOG(LogTemp, Warning, TEXT("Actor already in pool, cannot be added"));
}

void UObjectPooler::RemoveFromPool(AActor* OldActor)
{
	if (InPool(OldActor))
		PooledActors.Remove(OldActor);
	else
		UE_LOG(LogTemp, Warning, TEXT("Actor not in pool, cannot be removed"));
}