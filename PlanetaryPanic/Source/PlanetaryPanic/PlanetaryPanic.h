// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class ESystemType : uint8
{
	ST_Undefined	UMETA(DisplayName="Not Set"),
	ST_LEngine		UMETA(DisplayName="Left Engine"),
	ST_REngine		UMETA(DisplayName="Right Engine"),
	ST_CEngine		UMETA(DisplayName="Central Engine"),
	ST_ELights		UMETA(DisplayName="Emergency Lights"),
	ST_TempContr	UMETA(DisplayName="Temperature Control"),
	ST_Intercom		UMETA(DisplayName="Intercom"),
	ST_LSupport		UMETA(DisplayName="Life Support"),
	ST_Guidance		UMETA(DisplayName="Guidance System"),
	ST_BackPow		UMETA(DisplayName="Backup Power")
};