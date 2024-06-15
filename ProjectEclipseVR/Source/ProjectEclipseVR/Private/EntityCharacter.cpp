// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityCharacter.h"
#include "EntityCharacterMeshComponent.h"

// Sets default values
AEntityCharacter::AEntityCharacter(const FObjectInitializer& ObjectInitializer) : ACharacter(ObjectInitializer.SetDefaultSubobjectClass<UEntityCharacterMeshComponent>(ACharacter::MeshComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	EntityComponent = CreateDefaultSubobject<UEntityComponent>(TEXT("Entity Comp"));
	
}

// Called when the game starts or when spawned
void AEntityCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEntityCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEntityCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


UEntityComponent* AEntityCharacter::GetEntity() { return EntityComponent; }

UEntityCharacterMeshComponent* AEntityCharacter::GetEntityCharacterMesh()
{
	return Cast<UEntityCharacterMeshComponent>(GetMesh());
}