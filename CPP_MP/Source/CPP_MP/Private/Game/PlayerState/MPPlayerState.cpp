// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/PlayerState/MPPlayerState.h"
#include "AbilitySystem/MPAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/MPAttributeSet.h"

AMPPlayerState::AMPPlayerState()
{
	NetUpdateFrequency = 100.0f;
	MinNetUpdateFrequency = 66.0f;

	MPAbilitySystemComp = CreateDefaultSubobject<UMPAbilitySystemComponent>("AbilitySystemComp");
	MPAbilitySystemComp->SetIsReplicated(true);
	MPAbilitySystemComp->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	MPAttributeSet = CreateDefaultSubobject<UMPAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AMPPlayerState::GetAbilitySystemComponent() const
{
	return MPAbilitySystemComp;
}

UMPAbilitySystemComponent* AMPPlayerState::GetMPAbilitySystemComponent() const
{
	return MPAbilitySystemComp;
}

UMPAttributeSet* AMPPlayerState::GetMPAttributeSet() const
{
	return MPAttributeSet;
}
