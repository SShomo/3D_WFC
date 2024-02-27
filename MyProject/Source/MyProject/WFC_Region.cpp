// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Region.h"

// Sets default values
AWFC_Region::AWFC_Region()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Build nodes and set their locations
}

// Called when the game starts or when spawned
void AWFC_Region::BeginPlay()
{
	Super::BeginPlay();
}

void AWFC_Region::AddTile(AWFC_Tile* tile)
{
	mTiles.Add(tile);
}

AWFC_Node* AWFC_Region::GetRandomNode(TSet<AWFC_Node*> nodes)
{
	int randNum = FMath::RandRange(0, mNodes.Num() - 1);
	FSetElementId numID = numID.FromInteger(randNum);
	return nodes[numID];
}

float AWFC_Region::GetLowestEntropyValue()
{
	int lowestEntropy = -1;
	for (auto& node : mNodes)
	{
		if (lowestEntropy == -1)
		{
			lowestEntropy = node->GetEntropy();
		}
		if (node->GetEntropy() < lowestEntropy)
		{
			lowestEntropy = node->GetEntropy();
		}
	}
	return lowestEntropy;
}

TSet<AWFC_Node*> AWFC_Region::GetLowestEntropyNodes()
{
	float lowestEntropy = GetLowestEntropyValue();
	TSet<AWFC_Node*> lowestEntropyNodes;
	for (auto& node : mNodes)
	{
		if (node->GetEntropy() == lowestEntropy)
		{
			lowestEntropyNodes.Add(node);
		}
	}
	return lowestEntropyNodes;
}

bool AWFC_Region::IsNodeBuilt(FIntVector3 gridPosition)
{
	bool output = false;
	for (auto& node : mNodes)
	{
		if (node->GetGridPosition() == gridPosition) output = true;
	}
	return output;
}

bool AWFC_Region::IsNodeInRegion(FIntVector3 gridPosition)
{
	bool output = true;

	output &= gridPosition.X <= mXSize;
	output &= gridPosition.Y <= mYSize;
	output &= gridPosition.Z <= mZSize;

	return output;
}

bool AWFC_Region::ShouldBuildNode(FIntVector3 gridPosition)
{
	return IsNodeInRegion(gridPosition) && !IsNodeBuilt(gridPosition);
}

TSet<AWFC_Node*> AWFC_Region::GetNeighbors(FIntVector3 gridPosition)
{
	FIntVector3 up(0, 1, 0);
	FIntVector3 down(0, -1, 0);
	FIntVector3 left(-1, 0, 0);
	FIntVector3 right(1, 0, 0);
	FIntVector3 forward(0, 0, 1);
	FIntVector3 backward(0, 0, -1);

	TSet<AWFC_Node*> output;

	output.Add(GetNodeAtPosition(gridPosition + up));
	output.Add(GetNodeAtPosition(gridPosition + down));
	output.Add(GetNodeAtPosition(gridPosition + left));
	output.Add(GetNodeAtPosition(gridPosition + right));
	output.Add(GetNodeAtPosition(gridPosition + forward));
	output.Add(GetNodeAtPosition(gridPosition + backward));

	return output;
}

//TODO: I'm guessing the issue is in *how* we call SpawnActor here, but I don't really know
AWFC_Node* AWFC_Region::BuildNode(FIntVector3 gridPosition)
{
	UWorld* World = GetWorld();
	FTransform transform;
	FVector position;
	AWFC_Node* output;

	position.X = mOffset * gridPosition.X;
	position.Y = mOffset * gridPosition.Y;
	position.Z = mOffset * gridPosition.Z;

	transform.SetLocation(position + this->GetActorTransform().GetLocation());

	output = World->SpawnActor<AWFC_Node>();
	output->SetActorTransform(transform);
	//temp->SetActorRelativeTransform(transform + this->GetActorTransform());
	output->SetGridPosition(gridPosition.X, gridPosition.Y, gridPosition.Z);

	mNodes.Add(output);
	return output;
}

void AWFC_Region::BuildNodes()
{
	for (int i = 0; i < mXSize; i++)
	{
		for (int j = 0; j < mYSize; j++)
		{
			for (int k = 0; k < mZSize; k++)
			{
				BuildNode(FIntVector3(i, j, k));
			}
		}
	}
	for (auto& node : mNodes)
	{
		node->SetNeighbors(GetNeighbors(node->GetGridPosition()));
		node->RemoveSlack();
	}
	return;
}

// Called every frame
void AWFC_Region::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWFC_Region::SetRegionDimensionsAndOffset(int x, int y, int z, int offset)
{
	mXSize = x;
	mYSize = y;
	mZSize = z;
	mOffset = offset;
}

AWFC_Node* AWFC_Region::GetNodeAtPosition(FIntVector3 gridPosition)
{
	AWFC_Node* output = NULL;
	for (auto& node : mNodes)
	{
		if (node->GetGridPosition() == gridPosition) output = node;
	}
	return output;
}

void AWFC_Region::Collapse()
{
	//check if all nodes have collapsed
	while (!IsCollapsed())
	{
		AWFC_Node* node = GetRandomNode(GetLowestEntropyNodes());
		node->Collapse();
		node->Propogate();
	}
	return;
}

void AWFC_Region::SetPossibleTiles(TSet<AWFC_Tile*> tiles)
{
	mTiles = tiles;
	for (auto& node : mNodes)
	{
		node->SetTiles(tiles);
	}
}

void AWFC_Region::SetPossibleTiles(TArray<AWFC_Tile*> tiles)
{
	for (auto& tile : tiles)
	{
		AddTile(tile);
	}
}


bool AWFC_Region::IsCollapsed()
{
	bool output = true;
	for (auto& node : mNodes)
	{
		if (!node->GetIsCollapsed())
		{
			output = false;
			break;
		}
	}
	return output;
}
