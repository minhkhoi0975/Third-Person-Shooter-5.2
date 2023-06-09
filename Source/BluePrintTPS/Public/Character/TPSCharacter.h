// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "TPSCharacter.generated.h"

UCLASS()
class BLUEPRINTTPS_API ATPSCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

    // Gameplay Ability System properties.
public:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UFPSAttributeSet> AttributeSet;

	// AI Stimulus properties.
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<class UAIPerceptionStimuliSourceComponent> AIPerceptionStimuliSource;

public:
	// Sets default values for this character's properties
	ATPSCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(class AController* NewController) override;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
