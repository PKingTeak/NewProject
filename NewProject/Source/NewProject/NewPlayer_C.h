// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//Camera Start
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
//Camera end

#include "NewPlayer_C.generated.h"

UCLASS()
class NEWPROJECT_API ANewPlayer_C : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANewPlayer_C();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpringArmComponent* SpringArm;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* CameraComp;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




private:

	UPROPERTY()
	int Speed = 0;

};
