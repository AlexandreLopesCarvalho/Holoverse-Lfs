// Copyright Epic Games, Inc. All Rights Reserved.

#include "KoraulRigGameMode.h"
#include "KoraulRigCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKoraulRigGameMode::AKoraulRigGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
