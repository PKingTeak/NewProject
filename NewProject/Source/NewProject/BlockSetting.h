// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "BlockSetting.generated.h"

UCLASS()
class NEWPROJECT_API ABlockSetting : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockSetting();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	UFUNCTION(BlueprintCallable)
	void CreateBlock(FVector Location);
	

	UFUNCTION(BlueprintCallable)
	void SettingBlock(int _Width, int _Height);
	
	

	

private:

	UPROPERTY()
	TArray<AActor*> BlocksArr;
	
	UPROPERTY()
	int Height;
	UPROPERTY()
	int Width;

	UFUNCTION()
	int GetIndex(int X, int Y) const
	{
		return X + Y * Width;
	}

	UFUNCTION()
	AActor* GetBlock(int X, int Y) const
	{
		if (X < 0 || X >= Width || Y < 0 || Y >= Height)
		{
			return nullptr; // 유효하지 않은 좌표
		}
		return BlocksArr[GetIndex(X, Y)];
	}
	
};
