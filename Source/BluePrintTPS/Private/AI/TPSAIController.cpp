// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/TPSAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Touch.h"

ATPSAIController::ATPSAIController(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(FName("AIPerceptionComponent"));

	AISenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(FName("AISenseConfig_Sight"));
	AISenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;
	AISenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = true;
	AISenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = true;
	AIPerceptionComponent->ConfigureSense(*AISenseConfig_Sight);

	AISenseConfig_Hearing = CreateDefaultSubobject<UAISenseConfig_Hearing>(FName("AISenseConfig_Hearing"));
	AISenseConfig_Hearing->DetectionByAffiliation.bDetectEnemies = true;
	AISenseConfig_Hearing->DetectionByAffiliation.bDetectNeutrals = true;
	AISenseConfig_Hearing->DetectionByAffiliation.bDetectFriendlies = true;
	AIPerceptionComponent->ConfigureSense(*AISenseConfig_Hearing);

	AISenseConfig_Touch = CreateDefaultSubobject<UAISenseConfig_Touch>(FName("AISenseConfig_Touch"));
	AISenseConfig_Hearing->DetectionByAffiliation.bDetectEnemies = true;
	AISenseConfig_Hearing->DetectionByAffiliation.bDetectNeutrals = true;
	AISenseConfig_Hearing->DetectionByAffiliation.bDetectFriendlies = true;
	AIPerceptionComponent->ConfigureSense(*AISenseConfig_Touch);
}
