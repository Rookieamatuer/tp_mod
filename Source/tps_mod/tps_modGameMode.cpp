// Copyright Epic Games, Inc. All Rights Reserved.

#include "tps_modGameMode.h"
#include "tps_modCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atps_modGameMode::Atps_modGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
