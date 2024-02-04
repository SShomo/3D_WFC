// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Region.generated.h"
#include "WFC_Node.h"
#include "WFC_Tile.h"

UCLASS()
class MYPROJECT_API AWFC_Region : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Region();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AddTile(TSharedPtr<AWFC_Tile> tile);

	TSet<TSharedPtr<AWFC_Tile>> mTiles;
	TSet<TSharedPtr<AWFC_Node>> mNodes;

	TSharedPtr<AWFC_Node> GetRandomNode(TSet<TSharedPtr<AWFC_Node>> nodes);

	float GetLowestEntropyValue();
	TSet<TSharedPtr<AWFC_Node>> GetLowestEntropyNodes();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Collapse();
	void SetPossibleTiles(TSet<TSharedPtr<AWFC_Tile>> tiles);

	bool IsCollapsed();
};
