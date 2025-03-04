// Fill out your copyright notice in the Description page of Project Settings.


#include "NewPlayer_C.h"

// Sets default values
ANewPlayer_C::ANewPlayer_C()
{
#pragma  region CameraSetting


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("PlayerCam")); //������ �� ����
	SpringArm->SetupAttachment(GetMesh()); //�÷��̾� ����
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("MainPlayerCamera"));
	CameraComp->SetupAttachment(this->GetMesh()); //ī�޶�� ���̷��� �Ž��� ���� �ٳ���Ѵ�. �����̱� ������ �Ž� ����
	CameraComp->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = 0.0f;
	 
#pragma endregion 

	//spring Arm �ڽ��� ������Ʈ�� ī�޶� ���� 
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANewPlayer_C::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANewPlayer_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANewPlayer_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

