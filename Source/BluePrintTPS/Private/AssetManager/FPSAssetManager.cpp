// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetManager/FPSAssetManager.h"
#include "AbilitySystemGlobals.h"

void UFPSAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
}
