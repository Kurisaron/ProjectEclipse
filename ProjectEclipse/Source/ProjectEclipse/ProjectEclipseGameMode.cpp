// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEclipseGameMode.h"
#include "ProjectEclipseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectEclipseGameMode::AProjectEclipseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
