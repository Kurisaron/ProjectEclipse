// Fill out your copyright notice in the Description page of Project Settings.


#include "Faction.h"

UFaction::UFaction()
{

}

UTexture2D* UFaction::GetIcon() { return Icon; }

FString UFaction::GetCategory() { return Category; }

FString UFaction::GetDisplayName() { return DisplayName; }

FString UFaction::GetID() { return ID; }

bool UFaction::IsID(FString Check) { return ID == Check; }

FFactionRank UFaction::GetRank(int Level)
{
	if (RankLevels.IsEmpty() || !RankLevels.Contains(Level))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Faction does not have a rank at level %d"), *GetName(), Level);
		return FFactionRank();
	}

	return RankLevels[Level];
}

bool UFaction::HasRank(int Level) { return !RankLevels.IsEmpty() && RankLevels.Contains(Level); }
