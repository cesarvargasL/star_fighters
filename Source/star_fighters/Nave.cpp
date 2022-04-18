// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ANave::ANave()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Nave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Nave"));
	RootComponent = SM_Nave;

	SM_Nave->SetEnableGravity(false);
	SM_Nave->SetConstraintMode(EDOFMode::XZPlane);
	SM_Nave->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Nave->SetCollisionProfileName(TEXT("PhisicActor"));

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));

}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ANave::MoveW(float WAxisValue)
{
	AddMovementInput(FVector(WAxisValue, 0.0f, 0.0), 1.0f, false);
}

void ANave::MoveS(float SAxisValue)
{
	AddMovementInput(FVector( 0.0f, 0.0, SAxisValue), 1.0f, false);
}

