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
	//~AWFC_Region();

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

	TSet<TSharedRef<AWFC_Tile>> mTiles;
	TSet<TSharedPtr<AWFC_Node>> mNodes;

	TSharedRef<AWFC_Node> GetRandomNode(TSet<TSharedRef<AWFC_Node>> nodes);

	float GetLowestEntropyValue();
	TSet<TSharedRef<AWFC_Node>> GetLowestEntropyNodes();

	bool IsNodeBuilt(FIntVector3 gridPosition);
	bool IsNodeInRegion(FIntVector3 gridPosition);
	bool ShouldBuildNode(FIntVector3 gridPosition);
	TSet<TSharedRef<AWFC_Node>> GetNeighbors(FIntVector3 gridPosition);
	TSharedPtr<AWFC_Node> BuildNode(FIntVector3 gridPosition);
	void SetRegionDimensionsAndOffset(int x, int y, int z, int offset);
	void SetPossibleTiles(TSet<TSharedRef<AWFC_Tile>> tiles);
	void BuildNodes();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Initialize(FIntVector3 dimensions, int offset, TSet<TSharedRef<AWFC_Tile>> tiles);

	

	TSharedPtr<AWFC_Node> GetNodeAtPosition(FIntVector3 gridPosition);

	void Collapse();
	bool IsCollapsed();
};
