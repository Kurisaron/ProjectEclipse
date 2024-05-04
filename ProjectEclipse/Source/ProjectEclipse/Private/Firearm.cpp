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

	CurrentPrimaryMode = PrimaryCycle[0];
	if (DefaultSecondaryMode != nullptr) CurrentSecondaryMode = DefaultSecondaryMode;
	if (DefaultAlternateMode != nullptr) CurrentAlternateMode = DefaultAlternateMode;
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
	UFirearmMode* Primary = NewObject<UFirearmMode>(this, CurrentPrimaryMode->GetAuthoritativeClass());
	if (Primary != nullptr)
		Primary->Fire(MyWielder, Pressed, PressedTime);

}

void UFirearm::CyclePrimary()
{
	int32 index = PrimaryCycle.IndexOfByKey(CurrentPrimaryMode->GetClass());
	index += 1;
	if (index >= PrimaryCycle.Num()) index = 0;
	CurrentPrimaryMode = PrimaryCycle[index];
}

void UFirearm::SecondaryUse_Implementation(bool Pressed, float PressedTime)
{
	Super::SecondaryUse_Implementation(Pressed, PressedTime);

	UEquipmentComponent* ThisWielder = GetWielder();
	if (CurrentSecondaryMode != nullptr)
	{
		UFirearmMode* Secondary = NewObject<UFirearmMode>(this, CurrentSecondaryMode->GetAuthoritativeClass());
		if (Secondary != nullptr) Secondary->Fire(ThisWielder, Pressed, PressedTime);
	}
	else
	{
		AProjectEclipseCharacter* WieldingCharacter = ThisWielder->GetWieldingCharacter();
		if (WieldingCharacter != nullptr)
		{
			UCameraComponent* WieldingCamera = WieldingCharacter->GetFollowCamera();
			if (WieldingCamera != nullptr)
			{
				float FOV = WieldingCamera->FieldOfView;
				FOV *= Pressed ? 0.5f : 2.0f;
				WieldingCamera->SetFieldOfView(FOV);
			}
		}
	}
}

void UFirearm::AlternateUse_Implementation(bool Pressed, float PressedTime)
{
	Super::AlternateUse_Implementation(Pressed, PressedTime);

	UEquipmentComponent* MyWielder = GetWielder();
	if (CurrentAlternateMode != nullptr)
	{
		UFirearmMode* Alternate = NewObject<UFirearmMode>(this, CurrentAlternateMode->GetAuthoritativeClass());
		if (Alternate != nullptr) Alternate->Fire(MyWielder, Pressed, PressedTime);
	}
	else
	{
		if (!Pressed) return;
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("No alternate fire on current firearm."));
	}
}