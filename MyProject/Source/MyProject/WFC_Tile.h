// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Tile.generated.h"

UENUM()
enum class Direction
{
	Left	UMETA(DisplayName = "Left"),
	Right	UMETA(DisplayName = "Right"),
	Front	UMETA(DisplayName = "Front"),
	Back	UMETA(DisplayName = "Back"),
	Up		UMETA(DisplayName = "Up"),
	Down	UMETA(DisplayName = "Down"),
};

UCLASS(ClassGroup = (Wave_Function_Collapse))
class MYPROJECT_API AWFC_Tile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Tile();
	AWFC_Tile(AWFC_Tile& original);

protected:

	//Member variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseTile")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WaveFunctionCollapseTile")
	class UStaticMeshComponent* Mesh;

	int mRotation;

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

	//Functions
	virtual void BeginPlay() override;
	void MapSockets();
	TSet<AWFC_Tile*> GetRotations();
	void RotateSockets(int rotation);
	void CopyMembers(const AWFC_Tile& Other);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TSet<AWFC_Tile*> GetAllVarients();

	TMap<Direction, int> GetSockets();
	void SetSockets(TMap<Direction, int> sockets);

	int GetRotation();
	void SetRotation(int rotation);

	UStaticMeshComponent* GetMesh() { return Mesh; }

	bool HaveMatchingSocket(AWFC_Tile* tile);
	bool HaveMatchingSocket(Direction dir, AWFC_Tile* tile);

	bool Directionality(Direction tile,Direction second);
};
