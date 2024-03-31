// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/StaticMeshSocket.h"
#include "ProjectEclipse/ProjectEclipseCharacter.h"
#include "EquipmentComponent.generated.h"

class UEquipment;

// Component used to store equipment, especially for wielding
UCLASS( ClassGroup=(Custom), config = Game, meta=(BlueprintSpawnableComponent) )
class PROJECTECLIPSE_API UEquipmentComponent : public USceneComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UEquipment>> DefaultEquipment;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	TArray<UEquipment*> StoredEquipment;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
	UEquipment* CurrentEquipment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EquipmentMesh;


public:	
	// Sets default values for this component's properties
	UEquipmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void Equip(UEquipment* NewEquipment);

	virtual void LoadEquipment();

	virtual void AddEquipment(TSubclassOf<UEquipment> NewEquipment, bool Equip = false);

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	virtual UEquipment* SwitchEquipment(int32 Index = 0);

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	virtual UEquipment* CycleEquipment(bool Ascending = true);

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	bool Equipped() { return CurrentEquipment != nullptr; }

	UFUNCTION(BlueprintCallable, Category = "Equipment Actions")
	virtual void PrimaryUse(bool Pressed, float PressedTime);

	UFUNCTION(BlueprintCallable, Category = "Equipment Actions")
	virtual void SecondaryUse(bool Pressed, float PressedTime);

	UFUNCTION(BlueprintCallable, Category = "Equipment Actions")
	virtual void AlternateUse(bool Pressed, float PressedTime);

	void SetMesh(UStaticMesh* NewMesh);

	void ClearMesh();

	AProjectEclipseCharacter* GetWieldingCharacter();


};
