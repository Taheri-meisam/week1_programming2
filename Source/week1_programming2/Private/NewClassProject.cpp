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
	if (myactor == nullptr)
		return;
	FVector MyLocation = myactor->GetTargetLocation();
	FRotator TheRotation = myactor->GetActorRotation();
	FVector TheScale = myactor->GetActorScale();

	FString msg;
	msg.Append("\n Location  :");
	msg.Append("\n X: ");
	msg.AppendInt(MyLocation.X);
	msg.Append("\n Y: ");
	msg.AppendInt(MyLocation.Y);
	msg.Append("\n Z: ");
	msg.AppendInt(MyLocation.Z);
	msg.Append("\n rotation: ");
	msg.Append("\n Pitch : ");
	msg.AppendInt(TheRotation.Pitch);
	msg.Append("\n Roll: ");
	msg.AppendInt(TheRotation.Roll);
	msg.Append("\n Yaw: ");
	msg.AppendInt(TheRotation.Yaw);
	msg.Append("\n Scale : ");
	msg.Append("\n XAxis : ");
	msg.Append(FString::SanitizeFloat(TheScale.X));
	msg.Append("\n YAxis : ");
	msg.Append(FString::SanitizeFloat(TheScale.Y));
	msg.Append("\n ZAxis: ");
	msg.Append(FString::SanitizeFloat(TheScale.Z));

	Prints(msg,true,FColor::Black);
}

void UNewClassProject::BeginPlay()
{
	Super::BeginPlay();
	Setnumber(300);
	FString Message;
	Message.AppendInt(mynumber);
	//Prints(FString::FromInt(mynumber),false, FColor::Red);
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

