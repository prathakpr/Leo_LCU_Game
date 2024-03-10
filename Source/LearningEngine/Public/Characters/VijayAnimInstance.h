// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VijayAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGENGINE_API UVijayAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public :
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;
	
	UPROPERTY(BlueprintReadOnly)
	class AMyCharacter* MyCharacter;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	class UCharacterMovementComponent* MyCharacterMovement;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float GroundSpeed;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool IsFalling;
};
