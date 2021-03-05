// Fill out your copyright notice in the Description page of Project Settings.


#include "EnigmeSetup.h"
#include "Components/TextRenderComponent.h"
void UEnigmeSetup::EnergieSetupSolution(const FRandomStream seed,const int arraySize, TArray<bool>& array) {
	int i = 0;
	array.Init(false, arraySize);
	while (i < 5) {
		int current = seed.FRandRange(0, arraySize);
		if (!array[current]) {
			array[current] = true;
			i++;
		}
	}
}

void UEnigmeSetup::EnergieSetupText(const TArray<bool>& value) {
	for (int i = 0; i < value.Num();i++) {
		//FText curText = textArray[i]->
		if (value[i]) {
		}
		else {
			
		}
		//textArray[i]->SetText(curText);
	}
}
