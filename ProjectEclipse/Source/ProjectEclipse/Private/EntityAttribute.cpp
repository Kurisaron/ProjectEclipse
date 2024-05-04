// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAttribute.h"

UEntityAttribute::UEntityAttribute()
{
	DisplayName = "";
	ID = "";

	MinimumValue = -99;
	MaximumValue = 99;
	DefaultValue = 0;
}

FString UEntityAttribute::GetDisplayName()
{
	return DisplayName;
}


FString UEntityAttribute::GetID()
{
	return ID;
}

bool UEntityAttribute::IsID(FString Value)
{
	return ID == Value;
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