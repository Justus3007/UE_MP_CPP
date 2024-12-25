// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_MPGameMode.h"
#include "CPP_MPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_MPGameMode::ACPP_MPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
