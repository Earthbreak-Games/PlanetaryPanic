// Copyright Earthbreak Games LLC 2023


#include "PlanetaryPanic_EventManager.h"

// Sets default values
APlanetaryPanic_EventManager::APlanetaryPanic_EventManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlanetaryPanic_EventManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanetaryPanic_EventManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

