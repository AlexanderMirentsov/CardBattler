// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h" // Обязательный инклуд для интерфейса
#include "AbilitySystemComponent.h" // Инклуд самого компонента
#include "CardPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTP_API ACardPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	ACardPlayerState();
	// Обязательная функция от IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UPROPERTY()
	class UMainCharacterAttributeSet* AttributeSet;

protected:
	// Сам компонент GAS
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;
};
