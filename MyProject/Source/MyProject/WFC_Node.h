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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void ReduceToCompatibleTiles(TSet<TSharedPtr<AWFC_Tile>> tiles);
	void Propogate(AWFC_Node* collapsingNode);


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseNode")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseNode")
	class UStaticMeshComponent* Mesh;

	bool mIsCollapsed;

	TSet<TSharedPtr<AWFC_Tile>> mTiles;
	TSet<TSharedPtr<AWFC_Node>> mNeighbors;
	
	int mX;
	int mY;
	int mZ;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGridPosition(int x, int y, int z);
	FIntVector3 GetGridPosition();
	bool GetIsCollapsed();
	float GetEntropy();
	TSet<TSharedPtr<AWFC_Tile>> GetTiles();
	void SetTiles(TSet<TSharedPtr<AWFC_Tile>> tiles);
	void SetNeighbor(TSharedPtr<AWFC_Node> node);
	void SetNeighbors(TSet<TSharedPtr<AWFC_Node>> nodes);
	void Collapse();
	void Propogate();
};
