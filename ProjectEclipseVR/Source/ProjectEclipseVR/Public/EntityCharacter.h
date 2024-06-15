// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EntityComponent.h"
#include "EntityCharacter.generated.h"

class UEntityCharacterMeshComponent;

UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType)
class PROJECTECLIPSEVR_API AEntityCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entity", meta = (AllowPrivateAccess = "true"))
	UEntityComponent* EntityComponent;

public:
	// Sets default values for this character's properties
	AEntityCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called to access the entity component on the character
	UFUNCTION(BlueprintPure, Category = "Entity")
	virtual UEntityComponent* GetEntity();

	UEntityCharacterMeshComponent* GetEntityCharacterMesh();
};
