// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"
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

	BlocksArr.SetNum(Width * Height);
	ABlock* NewBlock = GetWorld()->SpawnActor<ABlock>();
	BlocksArr[0] = NewBlock;
	
}


void ABlockSetting::CreateBlock(FVector Location)
{
	FVector StartPos = this->GetActorLocation();

	if (BlocksArr.Num() == 0)
	{
		UE_LOG(LogTemp, Log, TEXT("블록이 존재하지 않습니다."));
		return; // 아무 블록도 없으면 생성 안 함
	}

	// 블록 크기 측정 (미리 설정된 크기 사용)
	FVector BlockExtent = FVector(100, 100, 100);

	// 블록 크기를 측정하기 위한 임시 블록 생성 없이 기본 값 사용 가능
	if (BlocksArr[0]) // 배열이 비어있지 않다면 첫 번째 블록의 크기 참조
	{
		UStaticMeshComponent* MeshComp = BlocksArr[0]->FindComponentByClass<UStaticMeshComponent>();
		if (MeshComp)
		{
			BlockExtent = MeshComp->Bounds.BoxExtent * 2; // 블록 크기 가져오기
		}
	}

	// 블록 생성
	for (int y = 0; y < Height; y++)
	{
		for (int x = 0; x < Width; x++)
		{
			FVector BlockLocation = StartPos + FVector(x * BlockExtent.X, y * BlockExtent.Y, 0); // 위치 계산
			FRotator BlockRotation = FRotator::ZeroRotator;

			ABlock* NewBlock = GetWorld()->SpawnActor<ABlock>(ABlock::StaticClass(), BlockLocation, BlockRotation);

			if (NewBlock)
			{
				NewBlock->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
				BlocksArr[GetIndex(x, y)] = NewBlock; // 1차원 배열에 저장
			}
		}
	}
}
