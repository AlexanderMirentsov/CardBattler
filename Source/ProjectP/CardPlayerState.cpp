// Fill out your copyright notice in the Description page of Project Settings.


#include "CardPlayerState.h"
#include "MainCharacterAttributeSet.h"

ACardPlayerState::ACardPlayerState()
{
	// Создаем компонент GAS
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	// Включаем репликацию компонента, если планируется мультиплеер
	AbilitySystemComponent->SetIsReplicated(true);

	// Создаем набор атрибутов
	AttributeSet = CreateDefaultSubobject<UMainCharacterAttributeSet>(TEXT("AttributeSet"));
}

UAbilitySystemComponent* ACardPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}