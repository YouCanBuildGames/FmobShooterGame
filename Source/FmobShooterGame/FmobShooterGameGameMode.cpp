// Copyright Epic Games, Inc. All Rights Reserved.

#include "FmobShooterGameGameMode.h"
#include "FmobShooterGameHUD.h"
#include "FmobShooterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFmobShooterGameGameMode::AFmobShooterGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFmobShooterGameHUD::StaticClass();
}
