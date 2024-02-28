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

AWFC_Node* AWFC_Region::GetRandomNode(TSet<AWFC_Node*> nodes)
{
	int randNum = FMath::RandRange(0, mNodes.Num() - 1);
	FSetElementId numID = numID.FromInteger(randNum);
	return nodes[numID];
}

float AWFC_Region::GetLowestEntropy()
{
	int lowestEntropy = mTiles.Num();
	int runningEntropy = 0;
	for (auto& node : mNodes)
	{
		if (!node->GetIsCollapsed())
		{
			runningEntropy = node->GetEntropy();
			if (runningEntropy < lowestEntropy)
			{
				lowestEntropy = runningEntropy;
			}
		}
	}
	return lowestEntropy;
}

TSet<AWFC_Node*> AWFC_Region::GetLowestEntropyNodes()
{
	float lowestEntropy = GetLowestEntropy();
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

	output &= gridPosition.X <= mDimensions.X;
	output &= gridPosition.Y <= mDimensions.Y;
	output &= gridPosition.Z <= mDimensions.Z;

	return output;
}

bool AWFC_Region::ShouldBuildNode(FIntVector3 gridPosition)
{
	return IsNodeInRegion(gridPosition) && !IsNodeBuilt(gridPosition);
}

TMap<Direction,AWFC_Node*> AWFC_Region::GetNeighbors(FIntVector3 gridPosition)
{
	FIntVector3 up(0, 1, 0);
	FIntVector3 down(0, -1, 0);
	FIntVector3 left(-1, 0, 0);
	FIntVector3 right(1, 0, 0);
	FIntVector3 forward(0, 0, 1);
	FIntVector3 backward(0, 0, -1);

	TMap<Direction,FIntVector3> directionVector;

	directionVector.Add(Direction::Up,up);
	directionVector.Add(Direction::Down,down);
	directionVector.Add(Direction::Left,left);
	directionVector.Add(Direction::Right,right);
	directionVector.Add(Direction::Front,forward);
	directionVector.Add(Direction::Back,backward);


	TMap<Direction,AWFC_Node*> output;

	for (auto& vector : directionVector)
	{
		AWFC_Node* temp = GetNodeAtPosition(gridPosition + vector.Value);
		if (temp != NULL)
		{
			output.Add(vector.Key, temp);
		}
		else
		{
			continue;
		}
	}

	return output;
}

//TODO: I'm guessing the issue is in *how* we call SpawnActor here, but I don't really know
AWFC_Node* AWFC_Region::BuildNode(FIntVector3 gridPosition)
{
	{UE_LOG(LogTemp, Warning, TEXT("Position: %s"), *gridPosition.ToString()); }
	UWorld* World = GetWorld();
	FTransform transform;
	FVector position;
	AWFC_Node* output;

	position.X = mOffset * gridPosition.X;
	position.Y = mOffset * gridPosition.Y;
	position.Z = mOffset * gridPosition.Z;

	transform.SetLocation(position + this->GetActorTransform().GetLocation());
	{UE_LOG(LogTemp, Warning, TEXT("z: %s"), *transform.ToString()); }

	output = World->SpawnActor<AWFC_Node>();
	
	output->SetActorRotation(FQuat().Identity);
	output->SetActorScale3D(FVector(1,1,1));

	output->SetActorTransform(transform);
	//output->SetActorRelativeTransform(transform + this->GetActorTransform());

	output->SetGridPosition(gridPosition.X, gridPosition.Y, gridPosition.Z);

	mNodes.Add(output);
	return output;
}

void AWFC_Region::BuildNodes()
{
	for (int i = 0; i < mDimensions.X; i++)
	{
		for (int j = 0; j < mDimensions.Y; j++)
		{
			for (int k = 0; k < mDimensions.Z; k++)
			{
				FIntVector3 position(i, j, k);
				BuildNode(position);
			}
		}
	}
	for (auto& node : mNodes)
	{
		node->SetNeighbors(GetNeighbors(node->GetGridPosition()));
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
	mDimensions.X = x;
	mDimensions.Y = y;
	mDimensions.Z = z;
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
