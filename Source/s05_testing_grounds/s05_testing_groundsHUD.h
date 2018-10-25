// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "s05_testing_groundsHUD.generated.h"

UCLASS()
class As05_testing_groundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	As05_testing_groundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

