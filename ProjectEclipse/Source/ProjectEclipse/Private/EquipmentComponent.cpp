// Fill out your copyright notice in the Description page of Project Settings.

#include "EquipmentComponent.h"
#include "Equipment.h"

// Sets default values for this component's properties
UEquipmentComponent::UEquipmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Create static mesh subcomponent
	EquipmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EquipmentMesh"));
	EquipmentMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
}


// Called when the game starts
void UEquipmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	LoadEquipment();
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

void UEquipmentComponent::LoadEquipment()
{
	StoredEquipment.Empty();
	if (DefaultEquipment.Num() <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No default equipment"));
		return;
	}

	for (TSubclassOf<UEquipment> Subclass : DefaultEquipment)
	{
		AddEquipment(Subclass);
	}
}

void UEquipmentComponent::AddEquipment(TSubclassOf<UEquipment> NewEquipment, bool bEquip)
{
	if (StoredEquipment.ContainsByPredicate([NewEquipment](UEquipment* Equipment) { return Equipment->GetClass() == NewEquipment->GetClass(); }))
	{
		UE_LOG(LogTemp, Warning, TEXT("Equipment already stored"));
		return;
	}

	UEquipment* NewEquip = NewObject<UEquipment>(this, NewEquipment->GetAuthoritativeClass());
	if (NewEquip == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error occured instantiating new equipment"));
		return;
	}
	StoredEquipment.Add(NewEquip);
	if (bEquip) Equip(NewEquip);
}

UEquipment* UEquipmentComponent::SwitchEquipment(int32 Index)
{
	int32 num = StoredEquipment.Num();
	if (Index >= num) return nullptr;

	UEquipment* NewEquipment = StoredEquipment[Index];
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
	int32 current = StoredEquipment.IndexOfByKey(CurrentEquipment);
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
	if (EquipmentMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No mesh component"));
		return;
	}

	EquipmentMesh->SetStaticMesh(NewMesh);
	/*
	if (EquipmentMesh->DoesSocketExist(TEXT("Handle")))
	{
		const UStaticMeshSocket* Socket = EquipmentMesh->GetSocketByName(TEXT("Handle"));
		FTransform SocketTransform;
		if (Socket->GetSocketTransform(SocketTransform, EquipmentMesh))
		{
			FTransform RelativeTransform = SocketTransform.GetRelativeTransform(EquipmentMesh->GetComponentToWorld());
			EquipmentMesh->AddRelativeLocation(-RelativeTransform.GetLocation());
		}
	}
	*/
	UE_LOG(LogTemp, Warning, TEXT("%s equipment mesh set to %s"), *GetName(), *NewMesh->GetName());
}

void UEquipmentComponent::ClearMesh()
{
	EquipmentMesh->SetStaticMesh(nullptr);
}

AProjectEclipseCharacter* UEquipmentComponent::GetWieldingCharacter()
{
	AActor* Owner = GetOwner();
	return Cast<AProjectEclipseCharacter>(Owner);
}