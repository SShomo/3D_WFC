// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC_Node.h"

// Sets default values
AWFC_Node::AWFC_Node()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWFC_Node::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWFC_Node::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AWFC_Node::GetIsCollapsed()
{
	return mIsCollapsed;
}

float AWFC_Node::GetEntropy()
{
	return mTiles.Num();
}

void AWFC_Node::Collapse()
{
	int tileNum = FMath::RandRange(0, mTiles.Num()-1);

	//TODO: Set WFC_Node Mesh to whatever element tileNum is

	mIsCollapsed = true;
	return;
}

void AWFC_Node::Propogate(TSharedPtr<AWFC_Node> callingNode)
{
	if (!mIsCollapsed)
	{
		//TODO: Fill this section out.

		//reduce mTiles to only tiles that could potentially socket-match tiles from  callingNode

		//Call propogate with this as the callingNode on each of the neighbor nodes
			//This might not be necessary. We should just have propogate called on the neighbors, instead of recursively calling the whole region of nodes.
		for (auto& node : mNeighbors)
		{
			//node.Get()->Propogate();
		}
	}
	return;
}