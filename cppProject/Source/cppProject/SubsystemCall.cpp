// Fill out your copyright notice in the Description page of Project Settings.


#include "SubsystemCall.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "PerceptionSubsystem.h"


ASubsystemCall::ASubsystemCall()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASubsystemCall::BeginPlay()
{
	Super::BeginPlay();

    UWorld* World = GetWorld();

    UpdateAssetsList(World);

    PerceptionSubsystem = World->GetSubsystem<UPerceptionSubsystem>();

    EnablePerceptionForInitialAssets();

}

void ASubsystemCall::UpdateAssetsList(UWorld* World)
{
    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        if (Actor)
        {
            if(!ActorsToPerceive.Contains(Actor))
                ActorsToPerceive.Add(Actor);
        }
    }

    UpdateListToEnableOrDisable = false;
}

void ASubsystemCall::EnablePerceptionForInitialAssets()
{
    if (PerceptionSubsystem)
    {
        PerceptionSubsystem->EnablePerceptionForActors(true, ActorsToPerceive);
    }

    EnablePerception = false;
}

void ASubsystemCall::DisablePerceptionForInitialAssets()
{
    if (PerceptionSubsystem)
    {
        PerceptionSubsystem->EnablePerceptionForActors(false, ActorsToPerceive);
    }

    DisablePerception = false;
}

void ASubsystemCall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (EnablePerception)
        EnablePerceptionForInitialAssets();
    if (DisablePerception)
        DisablePerceptionForInitialAssets();
    if (UpdateListToEnableOrDisable)
        UpdateAssetsList(GetWorld());
}

