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
		UE_LOG(LogTemp, Log, TEXT("����� �������� �ʽ��ϴ�."));
		return; // �ƹ� ��ϵ� ������ ���� �� ��
	}

	// ��� ũ�� ���� (�̸� ������ ũ�� ���)
	FVector BlockExtent = FVector(100, 100, 100);

	// ��� ũ�⸦ �����ϱ� ���� �ӽ� ��� ���� ���� �⺻ �� ��� ����
	if (BlocksArr[0]) // �迭�� ������� �ʴٸ� ù ��° ����� ũ�� ����
	{
		UStaticMeshComponent* MeshComp = BlocksArr[0]->FindComponentByClass<UStaticMeshComponent>();
		if (MeshComp)
		{
			BlockExtent = MeshComp->Bounds.BoxExtent * 2; // ��� ũ�� ��������
		}
	}

	// ��� ����
	for (int y = 0; y < Height; y++)
	{
		for (int x = 0; x < Width; x++)
		{
			FVector BlockLocation = StartPos + FVector(x * BlockExtent.X, y * BlockExtent.Y, 0); // ��ġ ���
			FRotator BlockRotation = FRotator::ZeroRotator;

			ABlock* NewBlock = GetWorld()->SpawnActor<ABlock>(ABlock::StaticClass(), BlockLocation, BlockRotation);

			if (NewBlock)
			{
				NewBlock->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
				BlocksArr[GetIndex(x, y)] = NewBlock; // 1���� �迭�� ����
			}
		}
	}
}
