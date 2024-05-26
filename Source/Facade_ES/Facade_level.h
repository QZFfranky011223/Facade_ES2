// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FACADE_UNITY.h"
#include "Facade_level.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API AFacade_level : public AFACADE_UNITY
{
	GENERATED_BODY()

public:

	AFacade_level();

protected:

	virtual void BeginPlay() override;


public:

	virtual void Tick(float DeltaTime) override;

	
};
