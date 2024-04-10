// Fill out your copyright notice in the Description page of Project Settings.


#include "FirearmMode.h"
#include "EquipmentComponent.h"
#include "ObjectPooler.h"
#include "ProjectEclipseGameInstance.h"

UFirearmMode::UFirearmMode()
{

}

void UFirearmMode::Fire_Implementation(UEquipmentComponent* Wielder, bool Pressed, float PressedTime)
{

}

AProjectileActor* UFirearmMode::SpawnProjectile(FVector Location, FVector Direction, bool& Spawned)
{
	UWorld* CurrentWorld = GetWorld();
	Spawned = false;

	if (CurrentWorld != nullptr)
	{
		UGameInstance* Game = CurrentWorld->GetGameInstance();
		UProjectEclipseGameInstance* ThisGame = Cast<UProjectEclipseGameInstance>(Game);
		if (ThisGame == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Game instance not set properly"));
			return nullptr;
		}

		UObjectPooler* Pooler = ThisGame->GetPooler();
		if (Pooler == nullptr) Pooler = ThisGame->NewPooler();
		
		FRotator DirectionRotation = Direction.Rotation();
		AProjectileActor* NewProjectile = Pooler->WakeProjectile(Projectile, Location, DirectionRotation);
		Spawned = NewProjectile != nullptr;
		return NewProjectile;
	}
	else return nullptr;
}

void UFirearmMode::TickMode_Implementation(APawn* Wielder, float DeltaTime)
{

}