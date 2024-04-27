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

FString UTrait::GetKeyName()
{
	return KeyName;
}

bool UTrait::IsKeyName(FString Key)
{
	return Key == KeyName;
}