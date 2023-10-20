// Copyright Earthbreak Games LLC 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanetaryPanic_EventManager.generated.h"

UCLASS()
class PLANETARYPANIC_API APlanetaryPanic_EventManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanetaryPanic_EventManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
