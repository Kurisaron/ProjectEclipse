// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ProjectEclipse/ProjectEclipseCharacter.h"
#include "Weapon.h"
#include "WeaponComponent.generated.h"


UCLASS( ClassGroup=(Custom), config = Game,meta=(BlueprintSpawnableComponent) )
class PROJECTECLIPSE_API UWeaponComponent : public USceneComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	UWeapon CurrentWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* WeaponMesh;

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void Equip(UWeapon* NewWeapon);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetMesh(UStaticMesh* NewMesh);
};
