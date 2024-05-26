// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPTestGameMode.h"
#include "TPTestCharacter.h"
#include "GravityController.h"
#include "UObject/ConstructorHelpers.h"

ATPTestGameMode::ATPTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PlayerControllerClass = AGravityController::StaticClass();
}
