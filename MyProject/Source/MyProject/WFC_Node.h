// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Tile.h"
#include "WFC_Node.generated.h"

UCLASS(ClassGroup = (Wave_Function_Collapse))
class MYPROJECT_API AWFC_Node : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Node();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseNode")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseNode")
	class UStaticMeshComponent* Mesh;

	bool mIsCollapsed;

	UPROPERTY()
	TSet<AWFC_Tile*> mTiles;
	UPROPERTY()
	TMap<Direction,AWFC_Node*> mNeighbors;
	
	FIntVector3 mGridPosition;

	virtual void BeginPlay() override;
	void ReduceToCompatibleTiles(Direction dir, TSet<AWFC_Tile*> tiles);
	void Propogate(Direction dir, AWFC_Node* collapsingNode);
	TSet<AWFC_Tile*> RemoveSlack();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGridPosition(int x, int y, int z);
	FIntVector3 GetGridPosition();
	bool GetIsCollapsed();
	float GetEntropy();
	TSet<AWFC_Tile*> GetTiles();
	void SetTiles(TSet<AWFC_Tile*> tiles);
	void SetNeighbor(Direction dir,AWFC_Node* node);
	void SetNeighbors(TMap<Direction, AWFC_Node*> nodes);
	void Collapse();
	void Propogate();
};
