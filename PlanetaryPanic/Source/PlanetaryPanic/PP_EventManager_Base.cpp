// Copyright Earthbreak Games LLC 2023


#include "PP_EventManager_Base.h"

// Sets default values
APP_EventManager_Base::APP_EventManager_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APP_EventManager_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APP_EventManager_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

