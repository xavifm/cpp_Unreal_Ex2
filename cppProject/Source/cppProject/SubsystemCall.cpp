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

    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        if (Actor)
        {
            ActorsToPerceive.Add(Actor);
        }
    }

    if (World)
    {
        UPerceptionSubsystem* PerceptionSubsystem = World->GetSubsystem<UPerceptionSubsystem>();
        if (PerceptionSubsystem)
        {
            PerceptionSubsystem->EnablePerceptionForActors(true, ActorsToPerceive);
        }
    }


}

void ASubsystemCall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

