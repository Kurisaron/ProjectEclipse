// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAction.h"
#include "EntityComponent.h"


UEntityAction::UEntityAction()
{

}

void UEntityAction::Execute_Implementation(UEntityComponent* Entity, UInputAction* Input, const bool Pressed, const float PressedTime)
{
	UE_LOG(LogTemp, Warning, TEXT("EntityAction Execute default implementation reached."));
}


FString UEntityAction::GetDisplayName() { return DisplayName; }

FString UEntityAction::GetID() { return ID; }

bool UEntityAction::IsID(FString Key) { return ID == Key; }

TArray<FString> UEntityAction::GetTags() { return Tags; }

bool UEntityAction::HasTag(FString Tag) { return Tags.Contains(Tag); }