// Copyright Epic Games, Inc. All Rights Reserved.

#include "TicTacClockGameMode.h"
#include "TicTacClockCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATicTacClockGameMode::ATicTacClockGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
