// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TPSAIController.generated.h"

/**
 * 
 */
UCLASS()
class BLUEPRINTTPS_API ATPSAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<class UAIPerceptionComponent> AIPerceptionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TObjectPtr<class UAISenseConfig_Sight> AISenseConfig_Sight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<class UAISenseConfig_Hearing> AISenseConfig_Hearing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<class UAISenseConfig_Touch> AISenseConfig_Touch;
	
public:
	ATPSAIController(const FObjectInitializer& ObjectInitializer);
};
