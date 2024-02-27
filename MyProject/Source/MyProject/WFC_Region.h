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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseRegion")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseRegion")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "WaveFunctionCollapseRegion")
	int mXSize;

	UPROPERTY(EditAnywhere, Category = "WaveFunctionCollapseRegion")
	int mYSize;

	UPROPERTY(EditAnywhere, Category = "WaveFunctionCollapseRegion")
	int mZSize;

	UPROPERTY(EditAnywhere, Category = "WaveFunctionCollapseRegion")
	int mOffset;

	UPROPERTY()
	TSet<AWFC_Tile*> mTiles;
	UPROPERTY()
	TSet<AWFC_Node*> mNodes;

	AWFC_Node* GetRandomNode(TSet<AWFC_Node*> nodes);

	float GetLowestEntropyValue();
	TSet<AWFC_Node*> GetLowestEntropyNodes();

	bool IsNodeBuilt(FIntVector3 gridPosition);
	bool IsNodeInRegion(FIntVector3 gridPosition);
	bool ShouldBuildNode(FIntVector3 gridPosition);
	TSet<AWFC_Node*> GetNeighbors(FIntVector3 gridPosition);
	AWFC_Node* BuildNode(FIntVector3 gridPosition);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetRegionDimensionsAndOffset(int x, int y, int z, int offset);

	AWFC_Node* GetNodeAtPosition(FIntVector3 gridPosition);

	void Collapse();
	void SetPossibleTiles(TSet<AWFC_Tile*> tiles);
	void SetPossibleTiles(TArray<AWFC_Tile*> tiles);

	void AddTile(AWFC_Tile* tile);

	void BuildNodes();

	bool IsCollapsed();
};
