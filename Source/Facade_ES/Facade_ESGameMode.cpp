// Copyright Epic Games, Inc. All Rights Reserved.

#include "Facade_ESGameMode.h"
#include "Facade_ESPawn.h"
#include "Enemigo_Facade.h"

AFacade_ESGameMode::AFacade_ESGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFacade_ESPawn::StaticClass();
}

void AFacade_ESGameMode::BeginPlay()
{
	Super::BeginPlay();

	Facade = GetWorld()->SpawnActor<AEnemigo_Facade>(AEnemigo_Facade::StaticClass());
	Facade->NivelFacil();
	//Facade->NivelMedio();
	//Facade->NivelDificil();
}

void AFacade_ESGameMode::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}




