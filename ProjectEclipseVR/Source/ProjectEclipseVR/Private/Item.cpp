// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "EntityComponent.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemData = FItemData(TEXT("Test"), TEXT("Test"));

	ItemRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ItemRoot"));
	SetRootComponent(ItemRoot);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FItemData AItem::GetItemData() { return ItemData; }

UGripComponent* AItem::GetMainGrip() { return Grips[TEXT("Main")]; }

UGripComponent* AItem::GetGrip(FString Key)
{
	if (Grips.IsEmpty())
		return nullptr;

	return Grips[Key];
}