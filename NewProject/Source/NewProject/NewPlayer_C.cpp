// Fill out your copyright notice in the Description page of Project Settings.


#include "NewPlayer_C.h"

// Sets default values
ANewPlayer_C::ANewPlayer_C()
{
#pragma  region CameraSetting


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("PlayerCam")); //스프링 암 셋팅
	SpringArm->SetupAttachment(GetMesh()); //플레이어 집중
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("MainPlayerCamera"));
	CameraComp->SetupAttachment(this->GetMesh()); //카메라는 스켈레톤 매쉬를 따라 다녀야한다. 움직이기 때문에 매쉬 선택
	CameraComp->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;
	SpringArm->TargetArmLength = 0.0f;
	 
#pragma endregion 

	//spring Arm 자식의 컴포넌트로 카메라 묶기 
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

