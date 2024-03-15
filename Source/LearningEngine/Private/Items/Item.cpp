// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "LearningEngine/CustomDebugHeader.h"
#include "Components/SphereComponent.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent")); // Factory function ko assign kr rhe hai tem mesh ke pointer mai
	RootComponent = ItemMesh; // root componet ka pointer garbage mai gya jo unreal delete kr deg automatic
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	int32 AvgInt = Avg <int32>(1, 3);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3 : %d "),AvgInt)


	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	Draw_Sphere(Location);
	Draw_Line(Location);
	Draw_Point(Location);
	Draw_VectorBhai(Location, World);

	
	
}

float AItem::Transformedsin(float value)
{
	return Amplitude * FMath::Sin(value * TimeConstant);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;
	
}

