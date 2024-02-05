// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Tile.h"

// Sets default values
AWFC_Tile::AWFC_Tile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWFC_Tile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWFC_Tile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TMap<Direction, int> AWFC_Tile::GetSockets()
{
	return mSockets;
}

bool AWFC_Tile::HaveMatchingSocket(TSharedPtr<AWFC_Tile> tile)
{
	bool output = false;
	TMap<Direction, int> tileSockets = tile.Get()->GetSockets();
	for (auto& socket1 : tileSockets)
	{
		for (auto& socket2 : mSockets)
		{
			if (socket1.Value == socket2.Value)
			{
				output = true;
				break;
			}
		}
	}
	return output;
}

