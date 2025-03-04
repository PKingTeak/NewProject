// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Anim_Inst.generated.h"


/**
 *
 */

UENUM(BlueprintType)
enum class EPlayer_State : uint8
{
	IDLE,
	Move,
	Attack

};

UCLASS()
class NEWPROJECT_API UAnim_Inst : public UAnimInstance
{
	GENERATED_BODY()

public:
	UAnim_Inst()
	{
	}

};

