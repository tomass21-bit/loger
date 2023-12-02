// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class LOGER_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void ShowActorInformation();
	UPROPERTY(VisibleAnywhere)
	FString named = "Actor";
	UPROPERTY(EditInstanceOnly)
	bool alive = true;
	UPROPERTY(EditInstanceOnly)
	int enemy = 2;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	
	
};
