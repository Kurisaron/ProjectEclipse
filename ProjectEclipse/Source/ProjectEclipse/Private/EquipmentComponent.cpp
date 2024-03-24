// Fill out your copyright notice in the Description page of Project Settings.

#include "EquipmentComponent.h"
#include "Equipment.h"

// Sets default values for this component's properties
UEquipmentComponent::UEquipmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEquipmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SwitchEquipment();
}


// Called every frame
void UEquipmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEquipmentComponent::Equip(UEquipment* NewEquipment)
{
	if (NewEquipment == nullptr) return;

	if (CurrentEquipment != nullptr) CurrentEquipment->Unequip();

	CurrentEquipment = NewEquipment;
	NewEquipment->Equip(this);
}

void UEquipmentComponent::AddEquipment(TSubclassOf<UEquipment> NewEquipment, bool bEquip)
{
	if (!StoredEquipment.Contains(NewEquipment)) StoredEquipment.Add(NewEquipment);
	if (bEquip)
	{
		UEquipment* NewEquip = NewObject<UEquipment>(this, NewEquipment->GetAuthoritativeClass());
		if (NewEquip == nullptr)
		{
			// Equipment not constructed
			return;
		}
		Equip(NewEquip);
	}
}

UEquipment* UEquipmentComponent::SwitchEquipment(int32 Index)
{
	int32 num = StoredEquipment.Num();
	if (Index >= num) return nullptr;

	TSubclassOf<UEquipment> EquipmentClass = StoredEquipment[Index];
	UEquipment* NewEquipment = NewObject<UEquipment>(this, EquipmentClass->GetAuthoritativeClass());
	if (NewEquipment == nullptr)
	{
		// Equipment not constructed
		return nullptr;
	}
	Equip(NewEquipment);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, FString::Printf(TEXT("%s New equipment: %s"), *GetName(), *NewEquipment->GetName()));

	return NewEquipment;
}

UEquipment* UEquipmentComponent::CycleEquipment(bool Ascending)
{
	int32 current = StoredEquipment.IndexOfByKey(CurrentEquipment->GetClass());
	current += Ascending ? 1 : -1;
	if (current >= StoredEquipment.Num()) current = 0;
	else if (current < 0) current = StoredEquipment.Num() - 1;

	return SwitchEquipment(current);
}

void UEquipmentComponent::PrimaryUse(bool Pressed, float PressedTime)
{
	if (CurrentEquipment == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No current equipment (Primary Use)"));
		return;
	}

	CurrentEquipment->PrimaryUse(Pressed, PressedTime);
}

void UEquipmentComponent::SecondaryUse(bool Pressed, float PressedTime)
{
	if (CurrentEquipment == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No current equipment (Secondary Use)"));
		return;
	}

	CurrentEquipment->SecondaryUse(Pressed, PressedTime);
}


void UEquipmentComponent::AlternateUse(bool Pressed, float PressedTime)
{
	if (CurrentEquipment == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No current equipment (Secondary Use)"));
		return;
	}

	CurrentEquipment->AlternateUse(Pressed, PressedTime);
}

void UEquipmentComponent::SetMesh(UStaticMesh* NewMesh)
{
	EquipmentMesh->SetStaticMesh(NewMesh);
}

AProjectEclipseCharacter* UEquipmentComponent::GetWieldingCharacter()
{
	AActor* Owner = GetOwner();
	return Cast<AProjectEclipseCharacter>(Owner);
}