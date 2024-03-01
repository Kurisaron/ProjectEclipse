// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponComponent.h"
#include "FirearmMode.h"
#include "FirearmComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTECLIPSE_API UFirearmComponent : public UWeaponComponent
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Firearm Modes", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UFirearmMode>> PrimaryCycleModes;
	UFirearmMode* CurrentPrimaryMode;

public:
	// Sets default values for this component's properties
	UFirearmComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void PrimaryFire(const bool Pressed, const float PressedTime);
};
