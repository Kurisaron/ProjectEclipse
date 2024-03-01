// Fill out your copyright notice in the Description page of Project Settings.


#include "FirearmComponent.h"

UFirearmComponent::UFirearmComponent()
{
	
}

void UFirearmComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentPrimaryMode = NewObject<UFirearmMode>(this, PrimaryCycleModes[0]->GetAuthoritativeClass());
}

void UFirearmComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFirearmComponent::PrimaryFire(const bool Pressed, const float PressedTime)
{
	CurrentPrimaryMode->Fire(GetWielder(), Pressed, PressedTime);
}