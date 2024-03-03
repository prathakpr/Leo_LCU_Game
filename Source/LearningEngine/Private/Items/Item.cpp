// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "LearningEngine/CustomDebugHeader.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BEGIN PLAY CHAL GYA BHAYA"));
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("chaal gyo bhaiyo"));
	}
	

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	Draw_Sphere(Location);
	Draw_Line(Location);
	Draw_Point(Location);
	Draw_VectorBhai(Location, World);

	
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Movement Rate = cm/s
	float MovementRate = 50.f;
	// MovementRate*DeltaTIme = cm/s * s/f == cm/f
	AddActorWorldOffset(FVector(MovementRate*DeltaTime, 0.f, 0.f));
	AddActorWorldRotation(FRotator(0.f, 45.f * DeltaTime, 0.f));
	Draw_Sphere_SingleFrame(GetActorLocation());
	Draw_VectorBhai_SingleFrame(GetActorLocation(),GetWorld());

	UE_LOG(LogTemp, Warning, TEXT("DELTA TIME : %f"), DeltaTime);
	if (GEngine) {
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("DELTA TIME : %f"), DeltaTime);
		GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Red, FString("Chal rhiyo hai tick mai tharo code congo" + Message));
		GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Cyan, FString(*Name));
	}

}

