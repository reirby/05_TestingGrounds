// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "s05_testing_groundsGameMode.h"
#include "s05_testing_groundsHUD.h"
#include "s05_testing_groundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

As05_testing_groundsGameMode::As05_testing_groundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = As05_testing_groundsHUD::StaticClass();
}
