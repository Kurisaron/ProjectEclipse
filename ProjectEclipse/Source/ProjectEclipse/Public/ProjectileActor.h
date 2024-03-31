// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "Components/PointLightComponent.h"
#include "ProjectileActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_NineParams(FProjectileHit, AProjectileActor*, Projectile, UPrimitiveComponent*, MyComp, AActor*, Other, UPrimitiveComponent*, OtherComp, bool, bSelfMoved, FVector, HitLocation, FVector, HitNormal, FVector, NormalImpulse, const FHitResult&, Hit);

UCLASS()
class PROJECTECLIPSE_API AProjectileActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = VFX, meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* VFX;


public:	

	UPROPERTY(BlueprintAssignable)
	FProjectileHit OnHit;

	// Sets default values for this actor's properties
	AProjectileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void Fire(FVector Direction, float Force = 1000.0f);

	UFUNCTION()
	virtual void NotifyHit(
		class UPrimitiveComponent* MyComp,
		AActor* Other,
		class UPrimitiveComponent* OtherComp,
		bool bSelfMoved,
		FVector HitLocation,
		FVector HitNormal,
		FVector NormalImpulse,
		const FHitResult& Hit
	) override;

	UFUNCTION(BlueprintCallable)
	void PoolProjectile();

	virtual UStaticMeshComponent* GetMesh();

};
