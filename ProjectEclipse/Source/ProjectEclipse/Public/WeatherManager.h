// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/PointLightComponent.h"
#include "WeatherManager.generated.h"

UCLASS(config=Game)
class PROJECTECLIPSE_API AWeatherManager : public AActor
{
	GENERATED_BODY()

	/** Toggle to set whether the manager should change the game's time of day */
	UPROPERTY(EditAnywhere, Category = "Day Cycle", meta = (AllowPrivateAccess = "true"))
	bool bCycleDay = true;

	float dayTime = 0.0f;

	/** Duration of the day in seconds */
	UPROPERTY(EditAnywhere, Category = "Day Cycle", meta = (AllowPrivateAccess = "true"))
	float DayDuration = 1500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Lights", meta = (AllowPrivateAccess = "true"))
	UDirectionalLightComponent* MainSun;


public:	
	// Sets default values for this actor's properties
	AWeatherManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
