// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponComponent.h"
#include "ProjectEclipse/ProjectEclipseCharacter.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("Weapon Mesh");
	WeaponMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UWeaponComponent::Equip(UWeapon* NewWeapon)
{
	NewWeapon->Equip(this);
}

// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeaponComponent::SetMesh(UStaticMesh* NewMesh)
{
	WeaponMesh->SetStaticMesh(NewMesh);
}