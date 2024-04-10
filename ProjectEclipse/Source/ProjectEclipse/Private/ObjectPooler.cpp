// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPooler.h"
#include "ProjectileActor.h"

// Sets default values
UObjectPooler::UObjectPooler()
{
 	
}

void UObjectPooler::Init(UProjectEclipseGameInstance* NewInstance)
{
	GameInstance = NewInstance;
}

AProjectileActor* UObjectPooler::WakeProjectile(TSubclassOf<AProjectileActor> ToWake, FVector Position, FRotator Rotation)
{
	if (PooledProjectiles.IsEmpty() || PooledProjectiles.Num() <= 0)
		return SpawnProjectile(ToWake, Position, Rotation);

	AProjectileActor* WakingActor = nullptr;
	for (AProjectileActor* Projectile : PooledProjectiles)
	{
		if (Projectile == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Projectile is null"));
			continue;
		}
		
		if (!Projectile->IsA(ToWake))
		{
			UE_LOG(LogTemp, Warning, TEXT("%s not of type %s"), *Projectile->GetName(), *ToWake->GetName());
			continue;
		}

		if (!Projectile->IsHidden())
		{
			UE_LOG(LogTemp, Warning, TEXT("%s not hidden"), *Projectile->GetName());
			continue;
		}

		UE_LOG(LogTemp, Warning, TEXT("%s is of type %s and not hidden"), *Projectile->GetName(), *ToWake->GetName());
		WakingActor = Projectile;
		break;
	}

	if (WakingActor == nullptr) WakingActor = SpawnProjectile(ToWake, Position, Rotation);
	return WakingActor;
}

AProjectileActor* UObjectPooler::SpawnProjectile(TSubclassOf<AProjectileActor> ToSpawn, FVector Position, FRotator Rotation)
{
	AProjectileActor* NewActor = GetWorld()->SpawnActor<AProjectileActor>(ToSpawn->GetAuthoritativeClass(), Position, Rotation);
	if (NewActor != nullptr) PooledProjectiles.Add(NewActor);
	return NewActor;
}


bool UObjectPooler::InPool(AProjectileActor* Check)
{
	return PooledProjectiles.Contains(Check);
}

void UObjectPooler::AddToPool(AProjectileActor* NewActor)
{
	if (NewActor == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("New Actor for pool is null"));
		return;
	}
	
	if (!InPool(NewActor))
		PooledProjectiles.Add(NewActor);
	else
		UE_LOG(LogTemp, Warning, TEXT("Actor already in pool, cannot be added"));
}

void UObjectPooler::RemoveFromPool(AProjectileActor* OldActor)
{
	if (InPool(OldActor))
		PooledProjectiles.Remove(OldActor);
	else
		UE_LOG(LogTemp, Warning, TEXT("Actor not in pool, cannot be removed"));
}