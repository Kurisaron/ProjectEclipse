// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileActor.h"
#include "ObjectPooler.h"
#include "ProjectEclipseGameInstance.h"

// Sets default values
AProjectileActor::AProjectileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetSimulatePhysics(true);

	RootComponent = Mesh;

	VFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX"));
	VFX->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AProjectileActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileActor::Fire(FVector Direction, float Force)
{
	Mesh->AddImpulse(Direction * Force);
}

void AProjectileActor::NotifyHit(
	class UPrimitiveComponent* MyComp,
	AActor* Other,
	class UPrimitiveComponent* OtherComp,
	bool bSelfMoved,
	FVector HitLocation,
	FVector HitNormal,
	FVector NormalImpulse,
	const FHitResult& Hit
)
{
	
	OnHit.Broadcast(this, MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
}

void AProjectileActor::PoolProjectile()
{
	UGameInstance* Game = GetGameInstance();
	UProjectEclipseGameInstance* ThisGame = Cast<UProjectEclipseGameInstance>(Game);
	if (ThisGame == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Game instance not set properly"));
		return;
	}

	UObjectPooler* Pooler = ThisGame->GetPooler();
	if (Pooler == nullptr) Pooler = ThisGame->NewPooler();
	if (!Pooler->InPool(this)) Pooler->AddToPool(this);

	SetActorHiddenInGame(true);
}

UStaticMeshComponent* AProjectileActor::GetMesh() { return Mesh; }

