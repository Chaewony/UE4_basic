// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MY_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor(); //생성자, 프로퍼티 포기화 할때 주로 사용

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; // 스폰될 때 한 번 호출되는 함수, 게임플레이 로직을 초기화 시킬 때 사용

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override; // 매 프레임마다 한 번씩 호출되는 함수, 게임의 로직을 처리하는데 사용됨

};
