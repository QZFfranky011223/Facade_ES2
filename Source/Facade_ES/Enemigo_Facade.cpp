// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Facade.h"
#include "Facade_level.h"
#include "FACADE_UNITY.h"

// Sets default values
AEnemigo_Facade::AEnemigo_Facade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Nivel = TArray<AFACADE_UNITY*>();
	Ordenado = TArray<FString>();
}

// Called when the game starts or when spawned
void AEnemigo_Facade::BeginPlay()
{
	Super::BeginPlay();

	NivelActual = GetWorld()->SpawnActor<AFacade_level>(AFacade_level::StaticClass());

	Nivel.Add(NivelActual);
	
}

// Called every frame
void AEnemigo_Facade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigo_Facade::NivelesGen(TArray<class AFacade_level*> _Nivel, TArray<FString> _Orden)
{
	for (AFACADE_UNITY* TipoCapsulasNivel : _Nivel)
	{
		TipoCapsulasNivel->RecibirOrden(_Orden);
	}
}

void AEnemigo_Facade::NivelFacil()
{
	Ordenado.Empty();
	Ordenado.Add("Vida");
	Ordenado.Add("Potencia");
	TArray<AFacade_level*> NivelActualizado;
	for (AFACADE_UNITY* Unity : Nivel)
	{
		AFacade_level* LevelC = Cast<AFacade_level>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
		}
	}
	NivelesGen(NivelActualizado, Ordenado);
}

void AEnemigo_Facade::NivelMedio()
{
	Ordenado.Empty();
	Ordenado.Add("vida");
	Ordenado.Add("vida");
	Ordenado.Add("potencia");
	TArray<AFacade_level*> NivelActualizado;
	for (AFACADE_UNITY* Unity : Nivel)
	{
		AFacade_level* LevelC = Cast<AFacade_level>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
		}
	}
	NivelesGen(NivelActualizado, Ordenado);
}

void AEnemigo_Facade::NivelDificil()
{
	Ordenado.Empty();
	Ordenado.Add("Vida");
	Ordenado.Add("Vida");
	Ordenado.Add("Vida");
	Ordenado.Add("potencia");
	TArray<AFacade_level*> NivelActualizado;
	for (AFACADE_UNITY* Unity : Nivel)
	{
		AFacade_level* LevelC = Cast<AFacade_level>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
		}
	}
	NivelesGen(NivelActualizado, Ordenado);
}



