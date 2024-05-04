// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityComponent.h"
#include "EntityAction.h"

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

}


// Called every frame
void UEntityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UEntityComponent::HasAttribute(FString ID)
{
	if (Attributes.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have any attributes"), *GetOwner()->GetName());
		return false;
	}

	for (const auto& Pair : Attributes)
	{
		TSubclassOf<UEntityAttribute> AttributeClass = Pair.Key;
		UEntityAttribute* Attribute = NewObject<UEntityAttribute>(this, AttributeClass->GetAuthoritativeClass());
		if (Attribute != nullptr && Attribute->IsID(ID)) return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have the requested attribute"), *GetOwner()->GetName());
	return false;
}

TSubclassOf<UEntityAttribute> UEntityComponent::GetAttribute(FString ID)
{
	if (!HasAttribute(ID))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have the given attribute %s"), *GetOwner()->GetName(), *ID);
		return nullptr;
	}

	for (const auto& Pair : Attributes)
	{
		TSubclassOf<UEntityAttribute> AttributeClass = Pair.Key;
		UEntityAttribute* Attribute = NewObject<UEntityAttribute>(this, AttributeClass->GetAuthoritativeClass());
		if (Attribute != nullptr && Attribute->IsID(ID)) return AttributeClass;
	}

	UE_LOG(LogTemp, Warning, TEXT("%s Entity does not have the requested attribute %s"), *GetOwner()->GetName(), *ID);
	return nullptr;
}

int UEntityComponent::GetAttributeValue(FString ID)
{
	TSubclassOf<UEntityAttribute> AttributeClass = GetAttribute(ID);
	return AttributeClass != nullptr ? Attributes[AttributeClass] : 0;
}

bool UEntityComponent::HasAction(FString ID)
{
	return GetAction(ID) != nullptr;
}

TSubclassOf<UEntityAction> UEntityComponent::GetAction(FString ID)
{
	return *Actions.FindByPredicate([this, ID](TSubclassOf<UEntityAction> ActionClass) -> bool
		{
			UEntityAction* Action = NewObject<UEntityAction>(this, ActionClass->GetAuthoritativeClass());
			return Action != nullptr && Action->IsID(ID);
		});
}

bool UEntityComponent::HasTrait(FString ID)
{
	return GetTrait(ID) != nullptr;
}

TSubclassOf<UTrait> UEntityComponent::GetTrait(FString ID)
{
	return *Traits.FindByPredicate([this, ID](TSubclassOf<UTrait> TraitClass) -> bool
		{
			UTrait* Trait = NewObject<UTrait>(this, TraitClass->GetAuthoritativeClass());
			return Trait != nullptr && Trait->IsID(ID);
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
		TSubclassOf<UFaction> FactionClass = Pair.Key;
		UFaction* Faction = NewObject<UFaction>(this, FactionClass->GetAuthoritativeClass());
		if (Faction != nullptr && Faction->IsID(ID)) return Pair.Value;
	}

	return FFactionStatus();
}
