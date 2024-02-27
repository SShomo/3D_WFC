// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Node.h"

// Sets default values
AWFC_Node::AWFC_Node()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AWFC_Node::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWFC_Node::ReduceToCompatibleTiles(TSet<AWFC_Tile*> tiles)
{
	for (auto& tile1 : tiles)
	{
		for (auto& tile2 : mTiles)
		{
			if (!tile1->HaveMatchingSocket(tile2)) //no matching socket, discard
			{
				mTiles.Remove(tile2);
			}
		}
	}
}
void AWFC_Node::ReduceToCompatibleTiles(Direction dir, TSet<AWFC_Tile*> tiles)
{
	for (auto& tile1 : tiles)
	{
		for (auto& tile2 : mTiles)
		{
			if (!tile1->HaveMatchingSocket(dir,tile2)) //no matching socket, discard
			{
				mTiles.Remove(tile2);
			}
		}
	}
}

// Called every frame
void AWFC_Node::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWFC_Node::SetGridPosition(int x, int y, int z)
{
	mGridPosition.X = x;
	mGridPosition.Y = y;
	mGridPosition.Z = z;
}

FIntVector3 AWFC_Node::GetGridPosition()
{
	return mGridPosition;
}

bool AWFC_Node::GetIsCollapsed()
{
	return mIsCollapsed;
}

float AWFC_Node::GetEntropy()
{
	return mTiles.Num();
}

TSet<AWFC_Tile*> AWFC_Node::GetTiles()
{
	return mTiles;
}

void AWFC_Node::SetTiles(TSet<AWFC_Tile*> tiles)
{
	mTiles = tiles;
}

void AWFC_Node::SetNeighbor(Direction dir, AWFC_Node* node)
{
	mNeighbors.Add(dir,node);
}

void AWFC_Node::SetNeighbors(TMap<Direction,AWFC_Node*> nodes)
{
	mNeighbors = nodes;
}

void AWFC_Node::Collapse()
{
	int tileNum = FMath::RandRange(0, mTiles.Num()-1);

	FSetElementId numID = numID.FromInteger(tileNum);
	UStaticMesh* temp = mTiles[numID]->GetMesh()->GetStaticMesh();
	Mesh->SetStaticMesh(temp);
	mIsCollapsed = true;
	return;
}

void AWFC_Node::Propogate()
{
	for (auto& node : mNeighbors)
	{
		node.Value->Propogate(this);
	}
}

void AWFC_Node::Propogate(Direction dir, AWFC_Node* collapsingNode)
{
	TSet<AWFC_Tile*> tile = collapsingNode->GetTiles();
	this->ReduceToCompatibleTiles(dir, tile);
}

void AWFC_Node::Propogate(AWFC_Node* collapsingNode)
{
	TSet<AWFC_Tile*> tile = collapsingNode->GetTiles();
	this->ReduceToCompatibleTiles(tile);
}