// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NavePlayerController.generated.h"



/**
 * 
 */
UCLASS()
class STAR_FIGHTERS_API ANavePlayerController : public APlayerController
{
	GENERATED_BODY()

		ANavePlayerController();
	
	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:
	virtual void BeginPlay() override;
	void MoveW(float WAxisValue);
	void MoveS(float SAxisValue);

};
