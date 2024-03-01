// Fill out your copyright notice in the Description page of Project Settings.


#include "FirearmMode.h"

void UFirearmMode::Fire(APawn* Wielder, const bool Pressed, const float PressedTime)
{
	FireEvent.Broadcast(Wielder, Pressed, PressedTime);
}