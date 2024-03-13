// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "Bird.generated.h"

class UInputAction;
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
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Idhar")
	UInputAction* LookAction;

	void Move(const FInputActionValue& value);
	void Look(const FInputActionValue& value);

private :
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* Capsule; //forward declaration
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* BirdMesh;
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* ViewCamera;
};
