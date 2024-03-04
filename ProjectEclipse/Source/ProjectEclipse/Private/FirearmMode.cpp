// Fill out your copyright notice in the Description page of Project Settings.


#include "FirearmMode.h"

UFirearmMode::UFirearmMode()
{

}

void UFirearmMode::Fire_Implementation(APawn* Wielder, bool Pressed, float PressedTime)
{

}

AProjectileActor* UFirearmMode::SpawnProjectile(FVector Location, FVector Direction, bool& Spawned)
{
	UWorld* CurrentWorld = GetWorld();
	Spawned = false;

	if (CurrentWorld != nullptr)
	{
		FRotator DirectionRotation = Direction.Rotation();
		AProjectileActor* NewProjectile = CurrentWorld->SpawnActor<AProjectileActor>(Projectile->GetAuthoritativeClass(), Location, DirectionRotation);
		Spawned = NewProjectile != nullptr;
		return NewProjectile;
	}
	else return nullptr;
}

void UFirearmMode::TickMode_Implementation(APawn* Wielder, float DeltaTime)
{

}