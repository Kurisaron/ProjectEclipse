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
	
}

// Called every frame
void AWeatherManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	dayTime += DeltaTime;
	dayTime = fmod(dayTime, dayDuration);
	float t = dayTime / dayDuration;
	t = (sin(t * 2.0 * PI) + 0.9) / 2.0;

	float sunIntensity = FMath::Lerp<float, float>(0.0f, 3.0f, t);
	MainSun->SetIntensity(sunIntensity);
}

