// Fill out your copyright notice in the Description page of Project Settings.

#include "AIController/SAIBTModularAIController.h"
#include "Components/GameFrameworkComponentManager.h"

// Called when the game starts or when spawned
void ASAIBTModularAIController::BeginPlay()
{
	Super::BeginPlay();

	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, UGameFrameworkComponentManager::NAME_GameActorReady);
}

void ASAIBTModularAIController::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	UGameFrameworkComponentManager::AddGameFrameworkComponentReceiver(this);
}

void ASAIBTModularAIController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UGameFrameworkComponentManager::RemoveGameFrameworkComponentReceiver(this);

	Super::EndPlay(EndPlayReason);
}