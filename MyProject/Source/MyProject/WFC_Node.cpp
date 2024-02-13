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

AWFC_Node::AWFC_Node(FVector position)
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;
	RootScene->SetWorldLocation(position);

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

void AWFC_Node::ReduceToCompatibleTiles(TSet<TSharedPtr<AWFC_Tile>> tiles)
{
	for (auto& tile1 : tiles)
	{
		for (auto& tile2 : mTiles)
		{
			if (!tile1.Get()->HaveMatchingSocket(tile2)) //no matching socket, discard
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
	mX = x;
	mY = y;
	mZ = z;
}

FIntVector3 AWFC_Node::GetGridPosition()
{
	FIntVector3 output(mX, mY, mZ);
	return output;
}

bool AWFC_Node::GetIsCollapsed()
{
	return mIsCollapsed;
}

float AWFC_Node::GetEntropy()
{
	return mTiles.Num();
}

TSet<TSharedPtr<AWFC_Tile>> AWFC_Node::GetTiles()
{
	return mTiles;
}

void AWFC_Node::SetTiles(TSet<TSharedPtr<AWFC_Tile>> tiles)
{
	mTiles = tiles;
}

void AWFC_Node::SetNeighbor(TSharedPtr<AWFC_Node> node)
{
	mNeighbors.Add(node);
}

void AWFC_Node::SetNeighbors(TSet<TSharedPtr<AWFC_Node>> nodes)
{
	mNeighbors = nodes;
}

void AWFC_Node::Collapse()
{
	int tileNum = FMath::RandRange(0, mTiles.Num()-1);

	//TODO: Set WFC_Node Mesh to whatever element tileNum is
	FSetElementId numID = numID.FromInteger(tileNum);
	Mesh = mTiles[numID].Get()->GetMesh();
	mIsCollapsed = true;
	return;
}

void AWFC_Node::RemoveSlack()
{
	TSet<TSharedPtr<AWFC_Node>> temp;
	for (auto& node : mNeighbors)
	{
		if (node.Get() != NULL) temp.Add(node);
	}
	mNeighbors = temp;
}

void AWFC_Node::Propogate()
{
	for (auto& node : mNeighbors)
	{
		node.Get()->Propogate(this);
	}
}

void AWFC_Node::Propogate(AWFC_Node* collapsingNode)
{
	TSet<TSharedPtr<AWFC_Tile>> tile = collapsingNode->GetTiles();
	this->ReduceToCompatibleTiles(tile);
}