// Fill out your copyright notice in the Description page of Project Settings.

#include "Firearm.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "ProjectEclipse/ProjectEclipseCharacter.h"
#include "EquipmentComponent.h"
#include "FirearmMode.h"

UFirearm::UFirearm()
{

}

void UFirearm::Load()
{
	if (PrimaryCycle.Num() <= 0) return;

	CurrentPrimaryMode = NewObject<UFirearmMode>(this, PrimaryCycle[0]->GetAuthoritativeClass());
	if (DefaultSecondaryMode != nullptr) CurrentSecondaryMode = NewObject<UFirearmMode>(this, DefaultSecondaryMode->GetAuthoritativeClass());
}

void UFirearm::Equip(UEquipmentComponent* NewWielder)
{
	Super::Equip(NewWielder);

	if (NewWielder == nullptr) return;

	Load();

	AProjectEclipseCharacter* NewCharacter = NewWielder->GetWieldingCharacter();
	if (NewCharacter != nullptr)
	{
		UInputComponent* Input = NewCharacter->InputComponent;
		UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(Input);
		if (EnhancedInput == nullptr) return;
		FEnhancedInputActionEventBinding& CyclePrimaryBinding = EnhancedInput->BindAction(CyclePrimaryAction, ETriggerEvent::Triggered, this, &UFirearm::CyclePrimary);
		CyclePrimaryBindingHandle = CyclePrimaryBinding.GetHandle();
	}

}

void UFirearm::Unequip()
{
	Super::Unequip();


	AProjectEclipseCharacter* Char = GetWielder()->GetWieldingCharacter();
	if (Char != nullptr)
	{
		UInputComponent* Input = Char->InputComponent;
		UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(Input);
		if (EnhancedInput == nullptr) return;

		EnhancedInput->RemoveBindingByHandle(CyclePrimaryBindingHandle);
	}
}

void UFirearm::PrimaryUse_Implementation(bool Pressed, float PressedTime)
{
	Super::PrimaryUse_Implementation(Pressed, PressedTime);

	UEquipmentComponent* MyWielder = GetWielder();
	if (CurrentPrimaryMode != nullptr)
		CurrentPrimaryMode->Fire(MyWielder, Pressed, PressedTime);
}

void UFirearm::CyclePrimary()
{
	int32 index = PrimaryCycle.IndexOfByKey(CurrentPrimaryMode->GetClass());
	index += 1;
	if (index >= PrimaryCycle.Num()) index = 0;
	CurrentPrimaryMode = NewObject<UFirearmMode>(this, PrimaryCycle[index]->GetAuthoritativeClass());
}

void UFirearm::SecondaryUse_Implementation(bool Pressed, float PressedTime)
{
	Super::SecondaryUse_Implementation(Pressed, PressedTime);

	UEquipmentComponent* ThisWielder = GetWielder();
	if (CurrentSecondaryMode != nullptr) CurrentSecondaryMode->Fire(ThisWielder, Pressed, PressedTime);
	else
	{
		AProjectEclipseCharacter* WieldingCharacter = ThisWielder->GetWieldingCharacter();
		if (WieldingCharacter != nullptr)
		{
			UCameraComponent* WieldingCamera = WieldingCharacter->GetFollowCamera();
			if (WieldingCamera != nullptr)
			{
				WieldingCamera->SetFieldOfView(Pressed ? 60.0f : 90.0f);
			}
		}
	}
}