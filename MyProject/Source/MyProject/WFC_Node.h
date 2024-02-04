// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Node.generated.h"
#include "WFC_Tile.h"

UCLASS()
class MYPROJECT_API AWFC_Node : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Node();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool mIsCollapsed;
	TSet<TSharedPtr<AWFC_Tile>> mTiles;
	TSet<TSharedPtr<AWFC_Node>> mNeighbors;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool GetIsCollapsed();
	float GetEntropy();
	void Collapse();
	void Propogate(TSharedPtr<AWFC_Node> callingNode);
};
