// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "MyCharacter.generated.h"


UCLASS()
class LEARNINGENGINE_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "INPUT KA BUTTONS")
	class UInputMappingContext* LeoKaMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "INPUT KA BUTTONS")
	class UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "INPUT KA BUTTONS")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "INPUT KA BUTTONS")
	UInputAction* JumpAction;

	void Move(const FInputActionValue& value);
	void Look(const FInputActionValue& value);

private:

	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* ViewCamera;
};
