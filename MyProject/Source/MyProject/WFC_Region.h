// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Node.h"
#include "WFC_Tile.h"
#include "WFC_Region.generated.h"

UCLASS(ClassGroup=(Wave_Function_Collapse))
class MYPROJECT_API AWFC_Region : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Region();

protected:
	//Member Variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseRegion")
	class USceneComponent* RootScene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseRegion")
	class UStaticMeshComponent* Mesh;
	UPROPERTY()
	FIntVector mDimensions;
	UPROPERTY()
	int mOffset;
	UPROPERTY()
	TSet<AWFC_Tile*> mTiles;
	UPROPERTY()
	TSet<AWFC_Node*> mNodes;

	//Functions
	virtual void BeginPlay() override;

	AWFC_Node* GetRandomNode(TSet<AWFC_Node*> nodes);

	float GetLowestEntropy();

	TSet<AWFC_Node*> GetLowestEntropyNodes();

	AWFC_Node* BuildNode(FIntVector3 gridPosition);

	bool ShouldBuildNode(FIntVector3 gridPosition);

	bool IsNodeBuilt(FIntVector3 gridPosition);

	bool IsNodeInRegion(FIntVector3 gridPosition);

	TMap<Direction,AWFC_Node*> GetNeighbors(FIntVector3 gridPosition);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetRegionDimensionsAndOffset(int x, int y, int z, int offset);

	AWFC_Node* GetNodeAtPosition(FIntVector3 gridPosition);

	void Collapse();

	void SetPossibleTiles(TSet<AWFC_Tile*> tiles);

	void BuildNodes();

	bool IsCollapsed();
};
