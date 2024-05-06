// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment.h"

AEquipment::AEquipment() : AItem()
{
	EquipmentInputs = nullptr;
}

void AEquipment::BeginPlay()
{
	AItem::BeginPlay();

	// ...
}

UInputMappingContext* AEquipment::GetInputs() { return EquipmentInputs; }