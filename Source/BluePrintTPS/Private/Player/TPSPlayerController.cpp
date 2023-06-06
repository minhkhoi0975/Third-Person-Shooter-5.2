// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TPSPlayerController.h"
#include "Character/TPSCharacter.h"
#include "AbilitySystemComponent.h"

void ATPSPlayerController::AcknowledgePossession(APawn* P)
{
	Super::AcknowledgePossession(P);

	ATPSCharacter* character = Cast<ATPSCharacter>(P);
	if (character)
	{
		UAbilitySystemComponent* AbilitySystemComponent = character->GetAbilitySystemComponent();
		if (AbilitySystemComponent && AbilitySystemComponent->AbilityActorInfo.IsValid())
			AbilitySystemComponent->InitAbilityActorInfo(character, character);
	}
}
