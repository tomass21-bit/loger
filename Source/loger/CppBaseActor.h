// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"
//#include "Math/UnrealMathUtility.h"
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
	UFUNCTION(BlueprintCallable)
	void SinMovement();
	UPROPERTY(EditInstanceOnly)
	float Amplitude = 2.0f;
	UPROPERTY(EditInstanceOnly)
	float Frequency = 4.0f;
	UPROPERTY(VisibleAnywhere)
	FVector InitialLocation;



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
