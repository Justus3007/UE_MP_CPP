// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "MPPlayerState.generated.h"

class UMPAttributeSet;
class UMPAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class CPP_MP_API AMPPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AMPPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintPure)
	UMPAbilitySystemComponent* GetMPAbilitySystemComponent() const;

	UFUNCTION(BlueprintPure)
	UMPAttributeSet* GetMPAttributeSet() const;

private:
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UMPAbilitySystemComponent> MPAbilitySystemComp;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TObjectPtr<UMPAttributeSet> MPAttributeSet;
	
};
