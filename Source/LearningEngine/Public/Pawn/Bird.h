// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "Bird.generated.h"

UCLASS()
class LEARNINGENGINE_API ABird : public APawn
{
	GENERATED_BODY()

public:
	
	ABird();
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	
	virtual void BeginPlay() override;
	void MoveForwad(float value);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Idhar")
	class UInputMappingContext* BirdMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Idhar")
	class UInputAction* MoveAction;

	void Move(const FInputActionValue& value);

private :
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* Capsule; //forward declaration
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* BirdMesh;
	
	
};
