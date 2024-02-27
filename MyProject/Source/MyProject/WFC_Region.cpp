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
	PrimaryActorTick.bCanEverTick = false;
}

//AWFC_Region::~AWFC_Region()
//{
//	for (auto& tile : mTiles)
//	{
//		if (IsValid(tile.Get()))
//		{
//			tile.Get()->Destroy();
//		}
//	}
//	for (auto& node : mNodes)
//	{
//		if (IsValid(node.Get()))
//		{
//			node.Get()->Destroy();
//		}
//	}
//}

// Called when the game starts or when spawned
void AWFC_Region::BeginPlay()
{
	Super::BeginPlay();
}

TSharedRef<AWFC_Node> AWFC_Region::GetRandomNode(TSet<TSharedRef<AWFC_Node>> nodes)
{
	int randNum = FMath::RandRange(0, mNodes.Num() - 1);
	FSetElementId numID = numID.FromInteger(randNum);
	return nodes[numID];
}

float AWFC_Region::GetLowestEntropyValue()
{
	int lowestEntropy = -1;
	int runningEntropy = 0;
	for (auto& node : mNodes)
	{
		runningEntropy = node.Get()->GetEntropy();
		if (lowestEntropy == -1)
		{
			lowestEntropy = runningEntropy;
		}
		if (runningEntropy < lowestEntropy)
		{
			lowestEntropy = runningEntropy;
		}
	}
	return lowestEntropy;
}

TSet<TSharedRef<AWFC_Node>> AWFC_Region::GetLowestEntropyNodes()
{
	float lowestEntropy = GetLowestEntropyValue();
	TSet<TSharedRef<AWFC_Node>> lowestEntropyNodes;
	for (auto& node : mNodes)
	{
		if (node.Get()->GetEntropy() == lowestEntropy)
		{
			lowestEntropyNodes.Add(node.ToSharedRef());
		}
	}
	return lowestEntropyNodes;
}

bool AWFC_Region::IsNodeBuilt(FIntVector3 gridPosition)
{
	bool output = false;
	for (auto& node : mNodes)
	{
		if (node.Get()->GetGridPosition() == gridPosition) output = true;
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

TSet<TSharedRef<AWFC_Node>> AWFC_Region::GetNeighbors(FIntVector3 gridPosition)
{
	FIntVector3 up(0, 1, 0);
	FIntVector3 down(0, -1, 0);
	FIntVector3 left(-1, 0, 0);
	FIntVector3 right(1, 0, 0);
	FIntVector3 forward(0, 0, 1);
	FIntVector3 backward(0, 0, -1);

	TArray<FIntVector3> directions;

	directions.Add(up);
	directions.Add(down);
	directions.Add(left);
	directions.Add(right);
	directions.Add(forward);
	directions.Add(backward);

	TSharedPtr<AWFC_Node> temp;
	TSet<TSharedRef<AWFC_Node>> output;

	for (auto& direction : directions)
	{
		temp = GetNodeAtPosition(gridPosition + direction);
		if (temp != NULL)
		{
			output.Add(temp.ToSharedRef());
		}
	}

	return output;
}

//TODO: I'm guessing the issue is in *how* we call SpawnActor here, but I don't really know
TSharedPtr<AWFC_Node> AWFC_Region::BuildNode(FIntVector3 gridPosition)
{
	UWorld* World = GetWorld();
	FTransform transform;
	FVector position;
	TSharedPtr<AWFC_Node> output;

	position.X = mOffset * gridPosition.X;
	position.Y = mOffset * gridPosition.Y;
	position.Z = mOffset * gridPosition.Z;

	transform.SetLocation(position + this->GetActorTransform().GetLocation());

	output = MakeShareable(World->SpawnActor<AWFC_Node>());
	output.Get()->SetActorTransform(transform);
	output.Get()->SetGridPosition(gridPosition.X, gridPosition.Y, gridPosition.Z);
	output.Get()->SetTiles(mTiles);

	mNodes.Add(output);
	return output.ToSharedRef();
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
		node.Get()->SetNeighbors(GetNeighbors(node.Get()->GetGridPosition()));
	}
	return;
}

// Called every frame
void AWFC_Region::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWFC_Region::Initialize(FIntVector3 dimensions, int offset, TSet<TSharedRef<AWFC_Tile>> tiles)
{
	SetPossibleTiles(tiles);
	SetRegionDimensionsAndOffset(dimensions.X, dimensions.Y, dimensions.Z, offset);
	BuildNodes();
}

void AWFC_Region::SetRegionDimensionsAndOffset(int x, int y, int z, int offset)
{
	mXSize = x;
	mYSize = y;
	mZSize = z;
	mOffset = offset;
}

TSharedPtr<AWFC_Node> AWFC_Region::GetNodeAtPosition(FIntVector3 gridPosition)
{
	TSharedPtr<AWFC_Node> output;
	for (auto& node : mNodes)
	{
		if (node.Get()->GetGridPosition() == gridPosition) output = node;
	}
	return output;
}

void AWFC_Region::Collapse()
{
	while (!IsCollapsed())
	{
		TSharedPtr<AWFC_Node> node = GetRandomNode(GetLowestEntropyNodes());
		node.Get()->Collapse();
		node.Get()->Propogate();
	}
	return;
}

void AWFC_Region::SetPossibleTiles(TSet<TSharedRef<AWFC_Tile>> tiles)
{
	mTiles = tiles;
}

bool AWFC_Region::IsCollapsed()
{
	bool output = true;
	for (auto& node : mNodes)
	{
		output &= node.Get()->GetIsCollapsed();
		if (!output)
		{
			break;
		}
	}
	return output;
}
