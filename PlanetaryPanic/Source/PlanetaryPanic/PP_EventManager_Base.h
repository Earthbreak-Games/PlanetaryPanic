// Copyright Earthbreak Games LLC 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PlanetaryPanic.h"

#include "PP_EventManager_Base.generated.h"

UCLASS()
class PLANETARYPANIC_API APP_EventManager_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APP_EventManager_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
