// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/VijayAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Characters/MyCharacter.h"
#include "Kismet/KismetMathLibrary.h"

void UVijayAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	MyCharacter = Cast<AMyCharacter>(TryGetPawnOwner());

	if (MyCharacter)
	{
		MyCharacterMovement = MyCharacter->GetCharacterMovement();
	}
	
}

void UVijayAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	if (MyCharacterMovement)
	{
		
		GroundSpeed = UKismetMathLibrary::VSizeXY(MyCharacterMovement->Velocity);
		IsFalling = MyCharacterMovement->IsFalling();
	}
}
