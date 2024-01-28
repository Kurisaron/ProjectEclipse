// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherManager.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
AWeatherManager::AWeatherManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MainSun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Main Sun"));

}

// Called when the game starts or when spawned
void AWeatherManager::BeginPlay()
{
	Super::BeginPlay();
	
	dayTime += DayDuration / 4.0f;
}

// Called every frame
void AWeatherManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bCycleDay) return;

	dayTime += DeltaTime;
	dayTime = fmod(dayTime, DayDuration);
	float t = dayTime / DayDuration;
	t = sin(t * 2.0 * PI) + 0.2f;
	t = FMath::Clamp(t, 0.0f, 1.0f);

	float sunIntensity = FMath::Lerp<float, float>(0.0f, 3.0f, t);
	MainSun->SetIntensity(sunIntensity);
}

