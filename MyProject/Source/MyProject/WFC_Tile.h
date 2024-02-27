// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Tile.generated.h"

UENUM()
enum class Direction
{
	Up		UMETA(DisplayName = "Up"),
	Down	UMETA(DisplayName = "Down"),
	Left	UMETA(DisplayName = "Left"),
	Right	UMETA(DisplayName = "Right"),
	Front	UMETA(DisplayName = "Front"),
	Back	UMETA(DisplayName = "Back"),
};

UCLASS(ClassGroup = (Wave_Function_Collapse))
class MYPROJECT_API AWFC_Tile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Tile();

protected:
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseTile")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseTile")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	int UpSocket;
	UPROPERTY(EditAnywhere)
	int DownSocket;
	UPROPERTY(EditAnywhere)
	int LeftSocket;
	UPROPERTY(EditAnywhere)
	int RightSocket;
	UPROPERTY(EditAnywhere)
	int FrontSocket;
	UPROPERTY(EditAnywhere)
	int BackSocket;

	TMap<Direction, int> mSockets;

	virtual void BeginPlay() override;
	void MapSockets();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TMap<Direction, int> GetSockets();

	UStaticMeshComponent* GetMesh() { return Mesh; }

	bool HaveMatchingSocket(AWFC_Tile* tile);
	bool HaveMatchingSocket(Direction dir, AWFC_Tile* tile);

	bool Directionality(Direction tile,Direction second);
};
