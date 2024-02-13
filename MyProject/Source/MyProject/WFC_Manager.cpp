// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Manager.h"

// Sets default values
AWFC_Manager::AWFC_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWFC_Manager::BeginPlay()
{
	Super::BeginPlay();
	
	if (mWFCRegion)
	{
		mWFCRegion->SetRegionDimensionsAndOffset(mXSize, mYSize, mZSize, mOffset);
		mWFCRegion->BuildNodes();
		SetTiles(mWFCTiles);
		Collapse(mWFCRegion);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("RegionClass is nullptr"));
	}
}

// Called every frame
void AWFC_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWFC_Manager::Collapse(AWFC_Region* region)
{
	region->Collapse();
}

void AWFC_Manager::Collapse(TSubclassOf<AWFC_Region> region)
{
	return;
}

void AWFC_Manager::SetTiles(TArray<TSubclassOf<AWFC_Tile>> tiles)
{
	TSet<TSharedPtr<AWFC_Tile>> tempSet;

	for (auto& tile : tiles)
	{
		TSubclassOf<AWFC_Tile> tempTile = tile;
		tempSet.Add(MakeShareable(tempTile.GetDefaultObject()));
	}
	mWFCRegion->SetPossibleTiles(tempSet);
}

