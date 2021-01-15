
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NewClassProject.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEEK1_PROGRAMMING2_API UNewClassProject : public UActorComponent 
{
	GENERATED_BODY()

public:	
	UNewClassProject();
	UPROPERTY(EditAnywhere, BlueprintReadWrite , Category = "MyVariables")
		int HP = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyVariables")
		float newVal = 1.2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyVariables")
		bool tags = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* actor;
	UFUNCTION()
		void _getlocation();


protected:
	virtual void BeginPlay() override;

public:	

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category = " Funcs")
		int getNumber();
	UFUNCTION(BlueprintCallable, Category = " Funcs")
		void Setnumber(int n);
	void Prints(FString msg = "Nothing", bool tag = true, FColor color = FColor::Blue);

private:
	int mynumber{ 0 };
	int SecretPassword;
		
};
