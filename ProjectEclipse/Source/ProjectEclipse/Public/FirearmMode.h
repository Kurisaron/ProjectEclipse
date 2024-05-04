// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileActor.h"
#include "FirearmMode.generated.h"

class UEquipmentComponent;

/**
 * 
 */
UCLASS(ClassGroup = (Custom), config = Game, Blueprintable, BlueprintType)
class PROJECTECLIPSE_API UFirearmMode : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectiles", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AProjectileActor> Projectile;

public:
	
	UFirearmMode();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Firearm Mode")
	void Fire(UEquipmentComponent* Wielder, bool Pressed, float PressedTime);

	UFUNCTION(BlueprintCallable, Category = "Firearm Mode")
	AProjectileActor* SpawnProjectile(FVector Location, FVector Direction, bool& Spawned);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Firearm Mode")
	void TickMode(APawn* Wielder, float DeltaTime);
	virtual void TickMode_Implementation(APawn* Wielder, float DeltaTime);
};
