// Fill out your copyright notice in the Description page of Project Settings.


#include "FACADE_UNITY.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga_Basic.h"
#include "Facade_ESPawn.h"

// Sets default values
AFACADE_UNITY::AFACADE_UNITY()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFACADE_UNITY::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFACADE_UNITY::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AFACADE_UNITY::CrearVida()const
{
	//spawnear vida
	FVector SpawnLocation = FVector(1800.0f, 0.0f, 214.0f); // Define la ubicación de spawn
	FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f); // Define la rotación de spawn

	for (int i = 0; i < 10; i++)
	{
		SpawnLocation = FVector(0.0f, 0.0f, 0.0f);
		SpawnLocation.X = FMath::RandRange(-0.0f, 1800.0f);
		SpawnLocation.Y = FMath::RandRange(500.0f, 1000.0f);
		SpawnLocation.Z = FMath::RandRange(0.0f, 1000.0f);

		ANaveEnemiga_Basic* NewNave = GetWorld()->SpawnActor<ANaveEnemiga_Basic>(ANaveEnemiga_Basic::StaticClass(), SpawnLocation, SpawnRotation);

		if (NewNave)
		{
			// El spawn fue exitoso
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Se ha spawnado una nave enemiga básica"));
		}
		else
		{
			// Hubo un error al spawnear
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo spawnear una nave enemiga básica"));
		}
	}

}

void AFACADE_UNITY::CrearMovimiento()
{


}
void AFACADE_UNITY::RecibirOrden(const TArray<FString>& _Orden)
{
	for (const FString& Orden : _Orden)
	{
		CrearOrden(Orden);
	}
}

void AFACADE_UNITY::CrearOrden(const FString& _Orden)
{
	if (_Orden.Equals("Vida"))
	{
		CrearVida();
	}
	else if (_Orden.Equals("Potencia"))
	{
		CrearMovimiento();

	}

}

