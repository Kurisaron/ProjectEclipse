// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityPawn.h"
#include "EntityComponent.h"

// Sets default values
AEntityPawn::AEntityPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	EntityComponent = CreateDefaultSubobject<UEntityComponent>(TEXT("Entity Comp"));
}

// Called when the game starts or when spawned
void AEntityPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEntityPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEntityPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UEntityComponent* AEntityPawn::GetEntity() { return EntityComponent; }