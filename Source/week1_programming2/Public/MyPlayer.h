// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NewClassProject.h"
#include "MyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class WEEK1_PROGRAMMING2_API UMyPlayer : public UNewClassProject
{
	
	GENERATED_BODY()
public:
	UMyPlayer();
protected:
	virtual void BeginPlay() override;

public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
