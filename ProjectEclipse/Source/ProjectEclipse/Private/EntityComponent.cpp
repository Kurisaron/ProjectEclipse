// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityComponent.h"

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

	// Set up default attributes with default values
	AttributeValues.Empty();
	for (TSubclassOf<UEntityAttribute> Subclass : DefaultAttributes)
	{
		UEntityAttribute* Attribute = NewObject<UEntityAttribute>(this, Subclass->GetAuthoritativeClass());
		if (Attribute == nullptr) continue;
		int AttributeLevel = Attribute->GetDefault(); // to-do: loading from save
		AttributeValues.Add(Attribute, AttributeLevel);
	}

	// Set up default traits
	CurrentTraits.Empty();
	for (TSubclassOf<UTrait> Subclass : DefaultTraits)
	{
		UTrait* Trait = NewObject<UTrait>(this, Subclass->GetAuthoritativeClass());
		if (Trait != nullptr) CurrentTraits.Add(Trait);
	}

}


// Called every frame
void UEntityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UEntityComponent::HasAttribute(FString ID)
{
	if (AttributeValues.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have any attributes"), *GetOwner()->GetName());
		return false;
	}

	for (const auto& Pair : AttributeValues)
	{
		UEntityAttribute* Attribute = Pair.Key;
		if (Attribute != nullptr && Attribute->IsID(ID)) return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have the requested attribute"), *GetOwner()->GetName());
	return false;
}

int UEntityComponent::GetAttributeValue(FString ID)
{
	if (!HasAttribute(ID))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have the given attribute %s"), *GetOwner()->GetName(), *ID);
		return 0;
	}

	for (const auto& Pair : AttributeValues)
	{
		UEntityAttribute* Attribute = Pair.Key;
		if (Attribute != nullptr && Attribute->IsID(ID)) return Pair.Value;
	}

	return 0;
}

bool UEntityComponent::HasTrait(FString ID)
{
	return GetTrait(ID) != nullptr;
}

UTrait* UEntityComponent::GetTrait(FString ID)
{
	return *CurrentTraits.FindByPredicate([ID](UTrait* Trait) -> bool
	{
		return Trait->IsID(ID);
	});
}

FFactionStatus UEntityComponent::GetReputation(FString ID)
{
	if (Reputation.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have any reputation"), *GetOwner()->GetName());
		return FFactionStatus();
	}

	for (const auto& Pair : Reputation)
	{
		UFaction* Faction = Pair.Key;
		if (Faction != nullptr && Faction->IsID(ID)) return Pair.Value;
	}

	return FFactionStatus();
}
