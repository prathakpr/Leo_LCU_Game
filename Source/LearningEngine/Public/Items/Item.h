// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"
#define Draw_Sphere(Location) if(GetWorld()) DrawDebugSphere(GetWorld(),Location,30.f,30,FColor::Green,true);
#define Draw_Line(Location) if(GetWorld()) DrawDebugLine(GetWorld(), Location, Location+GetActorForwardVector()*100.f,FColor::Red,false,10.f,0,1.f);
#define Draw_Point(Location) if(GetWorld()) DrawDebugPoint(GetWorld(),Location+GetActorForwardVector()*100.f,15.f,FColor::Purple,true);
#define Draw_VectorBhai(Location, World) if(World) \
    {\
       DrawDebugLine(GetWorld(), Location, Location+GetActorForwardVector()*200.f,FColor::Blue,false,10.f,0,1.f);\
       DrawDebugPoint(GetWorld(),Location+GetActorForwardVector()*200.f,15.f,FColor::Black,true);\
    }

UCLASS()
class LEARNINGENGINE_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
