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

AWFC_Tile::AWFC_Tile(AWFC_Tile& original)
{
	CopyMembers(original);
}

void AWFC_Tile::CopyMembers(const AWFC_Tile& original)
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	Mesh->SetStaticMesh(original.Mesh->GetStaticMesh());
	mRotation = original.mRotation;
	UpSocket = original.UpSocket;
	DownSocket = original.DownSocket;
	LeftSocket = original.LeftSocket;
	RightSocket = original.RightSocket;
	FrontSocket = original.FrontSocket;
	BackSocket = original.BackSocket;
	mSockets = original.mSockets;
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

TSet<AWFC_Tile*> AWFC_Tile::GetAllVarients()
{
	return GetRotations();
}

TMap<Direction, int> AWFC_Tile::GetSockets()
{
	return mSockets;
}

void AWFC_Tile::SetSockets(TMap<Direction, int> sockets)
{
	mSockets = sockets;
}

TSet<AWFC_Tile*> AWFC_Tile::GetRotations()
{
	TSet<AWFC_Tile*> output;
	
	for (int i = 0; i < 4; i++)
	{
		//Create new tile that's a copy of this one.
		AWFC_Tile* temp = new AWFC_Tile(this);
		//Create rotation for new tile and set the new tile's sockets
		temp->SetRotation(i);
		temp->RotateSockets(i);
		//Add tile with rotation to output
		output.Add(temp);
	}
	

	return output;
}

void AWFC_Tile::RotateSockets(int rotation)
{
	if (rotation > 0)
	{
		TPair<Direction, int> temp;
		temp.Key = Direction::Front;

		temp.Value = mSockets[Direction::Front];
		mSockets[Direction::Front] = mSockets[Direction::Right];
		mSockets[Direction::Right] = mSockets[Direction::Back];
		mSockets[Direction::Back] = mSockets[Direction::Left];
		mSockets[Direction::Left] = temp.Value;

		RotateSockets(rotation - 1);
	}
}

int AWFC_Tile::GetRotation()
{
	return mRotation;
}

void AWFC_Tile::SetRotation(int rotation)
{
	mRotation = rotation;
}

bool AWFC_Tile::HaveMatchingSocket(AWFC_Tile* tile)
{
	bool output = false;
	TMap<Direction, int> tileSockets = tile->GetSockets();
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

bool AWFC_Tile::HaveMatchingSocket(Direction dir, AWFC_Tile* tile)
{
	bool output = false;
	switch (dir)
	{
	case Direction::Up:
	case Direction::Down:
		output = mSockets[Direction::Down] & tile->GetSockets()[Direction::Up];
		break;
	case Direction::Left:
	case Direction::Right:
		output = mSockets[Direction::Left] & tile->GetSockets()[Direction::Right];
		break;
	case Direction::Front:
	case Direction::Back:
		output = mSockets[Direction::Front] & tile->GetSockets()[Direction::Back];
		break;
	default:
		output = false;
		break;
	}
	return output;
}

bool AWFC_Tile::Directionality(Direction first, Direction second)
{
	bool facingCorrectWay = false;
	if ((first == Direction::Up && second == Direction::Down) || (second == Direction::Up && first == Direction::Down))
		return true;
	if ((first == Direction::Left && second == Direction::Right) || (second == Direction::Right && first == Direction::Left))
		return true;
	if ((first == Direction::Front && second == Direction::Back) || (second == Direction::Back && first == Direction::Front))
		return true;
	return false;
}


