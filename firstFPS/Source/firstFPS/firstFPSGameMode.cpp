// Copyright Epic Games, Inc. All Rights Reserved.

#include "firstFPSGameMode.h"
#include "firstFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfirstFPSGameMode::AfirstFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
