// Copyright Epic Games, Inc. All Rights Reserved.

#include "Stats_ReaderGameMode.h"
#include "Stats_ReaderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStats_ReaderGameMode::AStats_ReaderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
