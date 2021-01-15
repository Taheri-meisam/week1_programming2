// Fill out your copyright notice in the Description page of Project Settings.


#include "NewClassProject.h"
#include "..\Public\NewClassProject.h"


UNewClassProject::UNewClassProject()
{
	mynumber = 200;
	PrimaryComponentTick.bCanEverTick = true;


}


void UNewClassProject::_getlocation()
{
	FVector MyLocation = actor->GetTargetLocation();
	FString msg;
	msg.Append("X: ");
	msg.AppendInt(MyLocation.X);
	msg.Append("Y: ");
	msg.AppendInt(MyLocation.Y);
	msg.Append("Z: ");
	msg.AppendInt(MyLocation.Z);
	UE_LOG(LogTemp, Warning, TEXT("%s"), "test ");
	Prints(msg,true, FColor::Blue);
}

void UNewClassProject::BeginPlay()
{
	Super::BeginPlay();
	Setnumber(300);
	FString Message;
	Message.AppendInt(mynumber);
	Prints(FString::FromInt(mynumber),false, FColor::Red);
	Prints(Message,false);
}


void UNewClassProject::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	_getlocation();

	
}

int UNewClassProject::getNumber()
{
	return 0;
}

void UNewClassProject::Setnumber(int n)
{
	mynumber = n;
}

void UNewClassProject::Prints(FString msg, bool tag, FColor color)
{
	if (tag) {
		GEngine->AddOnScreenDebugMessage(1, 2.0, color, msg);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("%s"), *msg);
	}
}

