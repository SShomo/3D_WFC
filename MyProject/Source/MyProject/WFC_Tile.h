// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WFC_Tile.generated.h"

enum Direction
{
	Up,
	Down,
	Left,
	Right,
	Front,
	Back,
};

UCLASS()
class MYPROJECT_API AWFC_Tile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWFC_Tile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TMap<Direction, int> GetSockets();

	bool HaveMatchingSocket(TSharedPtr<AWFC_Tile> tile);
};
