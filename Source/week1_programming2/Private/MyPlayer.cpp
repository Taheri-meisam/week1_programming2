// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

void UMyPlayer::BeginPlay()
{
	Prints("From Player Class",false);
}

void UMyPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

}

UMyPlayer::UMyPlayer()
{



}
