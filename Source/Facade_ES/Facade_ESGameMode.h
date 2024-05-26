// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Facade_ESGameMode.generated.h"

UCLASS(MinimalAPI)
class AFacade_ESGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFacade_ESGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float deltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Facade Enemy")
	class AEnemigo_Facade* Facade;
};



