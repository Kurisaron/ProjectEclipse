// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonTempGameMode.h"
#include "ThirdPersonTempCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonTempGameMode::AThirdPersonTempGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
