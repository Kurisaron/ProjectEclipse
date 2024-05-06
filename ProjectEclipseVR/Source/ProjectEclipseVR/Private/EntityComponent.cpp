// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityComponent.h"
#include "EntityAttribute.h"
#include "Trait.h"
#include "Faction.h"

// Sets default values for this component's properties
UEntityComponent::UEntityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEntityComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEntityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

TMap<TSubclassOf<UEntityAttribute>, int> UEntityComponent::GetAttributes() { return Attributes; }

TArray<TSubclassOf<UEntityAttribute>> UEntityComponent::GetAttributeTypes()
{
	TArray<TSubclassOf<UEntityAttribute>> List;
	for (const auto& Pair : Attributes)
	{
		TSubclassOf<UEntityAttribute> Attribute = Pair.Key;
		if (Attribute != nullptr) List.Add(Attribute);
	}
	return List;
}
