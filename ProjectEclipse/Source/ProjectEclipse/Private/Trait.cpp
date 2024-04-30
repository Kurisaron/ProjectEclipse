// Fill out your copyright notice in the Description page of Project Settings.


#include "Trait.h"

UTrait::UTrait()
{
	
}

void UTrait::ApplyTrait_Implementation(AActor* Recipient)
{

}

void UTrait::RemoveTrait_Implementation(AActor* Recipient)
{

}

FString UTrait::GetDisplayName()
{
	return DisplayName;
}

FString UTrait::GetID()
{
	return ID;
}

bool UTrait::IsID(FString Key)
{
	return Key == ID;
}