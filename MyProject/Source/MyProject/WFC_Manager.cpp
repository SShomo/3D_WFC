// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Manager.h"

// Sets default values
AWFC_Manager::AWFC_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

//AWFC_Manager::~AWFC_Manager()
//{
//	if (IsValid(mWFCRegion))
//	{
//		mWFCRegion->Destroy();
//	}
//	for (auto& tile : mWFCTiles)
//	{
//		if (IsValid(tile.Get()))
//		{
//			delete tile.Get()->GetDefaultObject();
//		}
//	}
//}

// Called when the game starts or when spawned
void AWFC_Manager::BeginPlay()
{
	Super::BeginPlay();
	
	TSharedPtr<AWFC_Region> shareableRegion = MakeShareable(mWFCRegion);

	mSharableTiles = CreateTileSet(mWFCTiles);
	shareableRegion.Get()->Initialize(mDimensions, mOffset, mSharableTiles);
	Collapse(shareableRegion);
}

// Called every frame
void AWFC_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWFC_Manager::Collapse(TSharedPtr<AWFC_Region> region)
{
	region.Get()->Collapse();
}

TSet<TSharedRef<AWFC_Tile>> AWFC_Manager::CreateTileSet(TSet<TSubclassOf<AWFC_Tile>> tiles)
{
	TSet<TSharedRef<AWFC_Tile>> output;
	for (auto& tile : tiles)
	{
		output.Add(MakeShareable(tile.GetDefaultObject()));
	}
	return output;
}