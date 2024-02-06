// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Tile.h"

// Sets default values
AWFC_Tile::AWFC_Tile()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MapSockets();
}

// Called when the game starts or when spawned
void AWFC_Tile::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWFC_Tile::MapSockets()
{
	mSockets.Add(Direction::Up, UpSocket);
	mSockets.Add(Direction::Down, DownSocket);
	mSockets.Add(Direction::Left, LeftSocket);
	mSockets.Add(Direction::Right, RightSocket);
	mSockets.Add(Direction::Front, FrontSocket);
	mSockets.Add(Direction::Back, BackSocket);

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
			if (socket1.Value == -1 || socket2.Value == -1)
			{
				continue;
			}
			if (socket1.Value == socket2.Value && Directionality(socket1.Key, socket2.Key))
			{
				output = true;
				break;
			}
		}
	}	
	return output;
}

bool AWFC_Tile::Directionality(Direction first, Direction second)
{
	bool facingCorrectWay = false;
	if ((first == Up && second == Down) || (second == Up && first == Down))
		return true;
	if ((first == Left && second == Right) || (second == Right && first == Left))
		return true;
	if ((first == Front && second == Back) || (second == Back && first == Front))
		return true;
	return false;
}


