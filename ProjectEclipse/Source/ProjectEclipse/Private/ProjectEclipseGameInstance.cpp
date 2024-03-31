// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectEclipseGameInstance.h"
#include "ObjectPooler.h"

UProjectEclipseGameInstance::UProjectEclipseGameInstance()
{

}

void UProjectEclipseGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Instance Initialized"));
	
	NewPooler();
}

UObjectPooler* UProjectEclipseGameInstance::NewPooler()
{
	if (Pooler != nullptr)
		return Pooler;

	Pooler = NewObject<UObjectPooler>(this, TEXT("Pooler"));
	UE_LOG(LogTemp, Warning, TEXT("Pooler%s created"), (Pooler == nullptr ? " not" : ""));
	if (Pooler != nullptr)
	{
		Pooler->Init(this);
	}

	return Pooler;
}