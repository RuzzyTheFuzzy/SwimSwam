// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwimSwamGameMode.h"
#include "SwimSwamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwimSwamGameMode::ASwimSwamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
