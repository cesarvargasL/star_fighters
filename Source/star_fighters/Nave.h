// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Nave.generated.h"
class UFloatingPawnMovement;

UCLASS()
class STAR_FIGHTERS_API ANave : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Nave;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveW(float WAxisValue);
	virtual void MoveS(float SAxisValue);

};
