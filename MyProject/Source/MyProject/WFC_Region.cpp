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

}

// Called when the game starts or when spawned
void AWFC_Region::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWFC_Region::AddTile(TSharedPtr<AWFC_Tile> tile)
{
	mTiles.Add(tile);
}

TSharedPtr<AWFC_Node> AWFC_Region::GetRandomNode(TSet<TSharedPtr<AWFC_Node>> nodes)
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
			lowestEntropy = node.Get()->GetEntropy();
		}
		if (node.Get()->GetEntropy() < lowestEntropy)
		{
			lowestEntropy = node.Get()->GetEntropy();
		}
	}
	return lowestEntropy;
}

TSet<TSharedPtr<AWFC_Node>> AWFC_Region::GetLowestEntropyNodes()
{
	float lowestEntropy = GetLowestEntropyValue();
	TSet<TSharedPtr<AWFC_Node>> lowestEntropyNodes;
	for (auto& node : mNodes)
	{
		if (node.Get()->GetEntropy() == lowestEntropy)
		{
			lowestEntropyNodes.Add(node);
		}
	}
	return lowestEntropyNodes;
}

// Called every frame
void AWFC_Region::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWFC_Region::Collapse()
{
	//check if all nodes have collapsed
	while (!IsCollapsed())
	{
		TSharedPtr<AWFC_Node> node = GetRandomNode(GetLowestEntropyNodes());
		node.Get()->Collapse();
		node.Get()->Propogate(node);
	}
	return;
}

void AWFC_Region::SetPossibleTiles(TSet<TSharedPtr<AWFC_Tile>> tiles)
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
		output = output && node.Get()->GetIsCollapsed();
	}
	return output;
}
