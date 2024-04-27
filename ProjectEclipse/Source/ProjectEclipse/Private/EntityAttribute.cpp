// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAttribute.h"

UEntityAttribute::UEntityAttribute()
{
	DisplayName = "";
	KeyName = "";

	MinimumValue = 0;
	MaximumValue = 99;
	DefaultValue = 10;
}

FString UEntityAttribute::GetDisplayName()
{
	return DisplayName;
}


FString UEntityAttribute::GetKeyName()
{
	return KeyName;
}

bool UEntityAttribute::IsKeyName(FString Value)
{
	return KeyName == Value;
}

int UEntityAttribute::GetMinimum()
{
	return MinimumValue;
}

int UEntityAttribute::GetMaximum()
{
	return MaximumValue;
}

int UEntityAttribute::GetDefault()
{
	return DefaultValue;
}