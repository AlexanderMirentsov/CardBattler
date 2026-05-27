// Fill out your copyright notice in the Description page of Project Settings.


#include "CardMainCharacter.h"
#include "CardPlayerState.h"

// Sets default values
ACardMainCharacter::ACardMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACardMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACardMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACardMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACardMainCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	ACardPlayerState* PS = GetPlayerState<ACardPlayerState>();
	if (PS)
	{
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);
	}
}
