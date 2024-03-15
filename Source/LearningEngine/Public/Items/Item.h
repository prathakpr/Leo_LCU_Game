// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class LEARNINGENGINE_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sine Constants")
	float Amplitude = 0.25f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sine Constants")
	float TimeConstant = 5.f;
	UFUNCTION(BlueprintPure)
	float Transformedsin(float value);

	template <typename T >
	T Avg(T First, T Second);
	UFUNCTION() // So that we can bind, and it can exposed to Unreal Reflection System
	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess="true"))
	float RunningTime;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh; // created an empty pointer
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* Sphere;

};

template<typename T>
inline T AItem::Avg(T First, T Second)
{
	//these return values can be anything that can be float, int, vectorf etc..
	return First + Second / 2;
}
