// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Region.h"
#include "WFC_Tile.h"
#include "WFC_Manager.generated.h"


UCLASS(ClassGroup = (Wave_Function_Collapse))
class MYPROJECT_API AWFC_Manager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Manager();

protected:
	//Member Functions
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Member Variables
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "WaveFunctionCollapseManager")
	FIntVector mDimensions;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "WaveFunctionCollapseManager")
	int mOffset;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "WaveFunctionCollapseManager")
	AWFC_Region* mWFCRegion;

	UPROPERTY(EditInstanceOnly, Category = "WaveFunctionCollapseManager")
	TArray<TSubclassOf<AWFC_Tile>> mWFCTiles;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Collapse(AWFC_Region* region);
	void Collapse(TSubclassOf<AWFC_Region> region);

	UFUNCTION(BlueprintCallable)
	void SetTiles(TArray<TSubclassOf<AWFC_Tile>> tiles);
};
