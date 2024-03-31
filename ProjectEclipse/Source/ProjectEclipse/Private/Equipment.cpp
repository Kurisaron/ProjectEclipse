// Fill out your copyright notice in the Description page of Project Settings.

#include "Equipment.h"
#include "EquipmentComponent.h"

UEquipment::UEquipment()
{

}

void UEquipment::Equip(UEquipmentComponent* NewWielder)
{
	if (NewWielder == nullptr) return;

	Wielder = NewWielder;

	UStaticMesh* NewMesh = GetMesh();
	if (NewMesh != nullptr)
		NewWielder->SetMesh(NewMesh);
	else
		NewWielder->ClearMesh();

	UInputMappingContext* NewContext = GetInputMappingContext();
	AProjectEclipseCharacter* Char = NewWielder->GetWieldingCharacter();
	if (NewContext != nullptr && Char != nullptr)
	{
		Char->AddMappingContext(NewContext, 1);
	}
		
}

void UEquipment::Unequip()
{
	if (Wielder == nullptr) return;

	UInputMappingContext* Context = GetInputMappingContext();
	AProjectEclipseCharacter* Char = Wielder->GetWieldingCharacter();
	if (Context != nullptr && Char != nullptr)
	{
		Char->RemoveMappingContext(Context);
	}
}

void UEquipment::PrimaryUse_Implementation(bool Pressed, float PressedTime)
{

}

void UEquipment::SecondaryUse_Implementation(bool Pressed, float PressedTime)
{

}

void UEquipment::AlternateUse_Implementation(bool Pressed, float PressedTime)
{

}

UEquipmentComponent* UEquipment::GetWielder()
{
	return Wielder;
}

UStaticMesh* UEquipment::GetMesh()
{
	return Mesh;
}

UInputMappingContext* UEquipment::GetInputMappingContext()
{
	return EquipmentMappingContext;
}