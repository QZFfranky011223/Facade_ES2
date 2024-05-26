// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FACADE_UNITY.generated.h"

UCLASS()
class FACADE_ES_API AFACADE_UNITY : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFACADE_UNITY();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	void CrearVida()const; //nacimiento Xd
	void CrearMovimiento(); //move
public:

	void RecibirOrden(const TArray<FString>& _Orden);
	void CrearOrden(const FString& _Orden);


};