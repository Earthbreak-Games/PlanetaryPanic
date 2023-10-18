// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlanetaryPanicGameMode.h"
#include "PlanetaryPanicCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlanetaryPanicGameMode::APlanetaryPanicGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
