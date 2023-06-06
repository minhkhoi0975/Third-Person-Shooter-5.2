// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/FPSGameInstance.h"
#include "AbilitySystemGlobals.h"

void UFPSGameInstance::Init()
{
	Super::Init();
	UAbilitySystemGlobals::Get().InitGlobalData();
}
