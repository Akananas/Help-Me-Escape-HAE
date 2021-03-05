// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnigmeSetup.generated.h"

/**
 * 
 */

UCLASS()
class HELP_ME_ESCAPE_API UEnigmeSetup : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Energie")
		static void EnergieSetupSolution(const FRandomStream seed,const int arraySize ,TArray<bool>& array);
		UFUNCTION(BlueprintCallable, Category = "Energie")
		static void EnergieSetupText(const TArray<bool>& value);
};
