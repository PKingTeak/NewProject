// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockSetting.h"

// Sets default values
ABlockSetting::ABlockSetting()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void ABlockSetting::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ABlockSetting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABlockSetting::SettingBlock(int _Width, int _Height)
{
	Width = _Width;
	Height = _Height;
	
	
}


void ABlockSetting::CreateBlock(FVector Location)
{
	
	FVector StartPos = this->GetActorLocation();
	//좌표 가 필요함. 
	//블록 크기 및 블록 갯수가 필요함
	//AActor* NewBlock = GetWorld()->SpawnActor<Actor>()
	

	

}
