// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Region.h"
#include "WFC_Tile.h"
#include "WFC_Manager.generated.h"


UCLASS()
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
	UPROPERTY(EditAnywhere, Category = "WaveFunctionCollapseManager")
	TSubclassOf<AWFC_Region> mWFCRegion;

	UPROPERTY(EditAnywhere, Category = "WaveFunctionCollapseManager")
	TArray<TSubclassOf<AWFC_Tile>> mWFCTiles;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Collapse(AWFC_Region* region);

	UFUNCTION(BlueprintCallable)
	void SetTiles(TArray<TSubclassOf<AWFC_Tile>> tiles);
};
