// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MainCharacterAttributeSet.generated.h"

// Специальные макросы GAS для автоматической генерации функций (Get, Set, Init)
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class PROJECTP_API UMainCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Здоровье
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData HealthPoints;
	ATTRIBUTE_ACCESSORS(UMainCharacterAttributeSet, HealthPoints)

		// Мана для разыгрывания карт
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData ManaPoints;
	ATTRIBUTE_ACCESSORS(UMainCharacterAttributeSet, ManaPoints)

		// Очки действий (Action Points)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData ActionPoints;
	ATTRIBUTE_ACCESSORS(UMainCharacterAttributeSet, ActionPoints)
};
