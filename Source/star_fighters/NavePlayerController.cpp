// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Nave.h"

ANavePlayerController::ANavePlayerController()
{
}

void ANavePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveW", this, &ANavePlayerController::MoveW);
	InputComponent->BindAxis("MoveS", this, &ANavePlayerController::MoveS);


}

void ANavePlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);


}



void ANavePlayerController::MoveW(float WAxisValue)
{
	auto MyPawn = Cast<ANave>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveW(WAxisValue);
	}
}

void ANavePlayerController::MoveS(float SAxisValue)
{
	auto MyPawn = Cast<ANave>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveS(SAxisValue);
	}
}
