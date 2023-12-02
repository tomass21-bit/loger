// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();
	
	
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACppBaseActor::ShowActorInformation()
{
	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *named);
	UE_LOG(LogTemp, Warning , TEXT("EnemyNum: %d"), enemy);
	UE_LOG(LogTemp, Warning, TEXT("IsAlive: %i"), alive );

}

void ACppBaseActor::SinMovement() 
{
	UWorld* World = GetWorld();
	float time = 0.0f;
	if (World)
	{
	 time = World->GetTimeSeconds();
	}
	float DeltaHeight = FMath::Sin(time * Frequency);
	DeltaHeight = DeltaHeight* Amplitude;
	InitialLocation.Z += DeltaHeight;
	SetActorLocation(InitialLocation);
}	

