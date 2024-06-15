// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityCharacterMeshComponent.h"

UEntityCharacterMeshComponent::UEntityCharacterMeshComponent(const FObjectInitializer& ObjectInitializer) : USkeletalMeshComponent(ObjectInitializer)
{

}

bool UEntityCharacterMeshComponent::CanRagdoll()
{
	return bCanRagdoll;
}

void UEntityCharacterMeshComponent::CanRagdoll(bool Value)
{
	bCanRagdoll = Value;
}