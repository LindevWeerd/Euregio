// Copyright Epic Games, Inc. All Rights Reserved.

#include "EuregioCGameMode.h"
#include "EuregioCPlayerController.h"
#include "EuregioCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEuregioCGameMode::AEuregioCGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEuregioCPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}