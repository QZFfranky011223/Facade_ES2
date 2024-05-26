// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemiga_Nodriza.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API ANaveEnemiga_Nodriza : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANaveEnemiga_Nodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
