// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Delegates/Delegate.h"
#include "ButtonEnergie.generated.h"
/**
 * 
 */
/*DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadDelegate, FString, name);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClickDelegate);*/
UCLASS()
class HELP_ME_ESCAPE_API UButtonEnergie : public UButton
{
	GENERATED_BODY()

public:

   /* UPROPERTY()
        FLoadDelegate load;

    UPROPERTY()
        FClickDelegate click;
    UFUNCTION()
        void OnClick();
    UFUNCTION()
        void LoadGameFile(FString name);
    UFUNCTION(BlueprintCallable, Category = "Utilities")
        void SetVal(const uint8& _index);
    TArray<bool>* arrayPtr = nullptr;
    */
protected:
    
    //uint8 index = 0;

};
