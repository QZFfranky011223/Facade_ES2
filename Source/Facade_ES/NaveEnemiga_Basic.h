// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemiga_Basic.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_ES_API ANaveEnemiga_Basic : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	//
	ANaveEnemiga_Basic();

protected:
	//
	virtual void BeginPlay() override;
	
public:
	//
	virtual void Tick(float DeltaTime) override;
	
};
