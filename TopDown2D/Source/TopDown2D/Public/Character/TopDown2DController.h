// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TopDown2DController.generated.h"

/**
 * 
 */
class ACameraActor;
UCLASS()
class TOPDOWN2D_API ATopDown2DController : public APlayerController
{
	GENERATED_BODY()
public:
	ATopDown2DController();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera)
		bool CameraLocked = true;
	
protected:
	virtual void BeginPlay() override;
	UPROPERTY()
		ACameraActor* TopDownCamera;
	UPROPERTY(EditDefaultsOnly,Category = Camera)
		float CameraHeight = 200.0f;
	UPROPERTY(EditDefaultsOnly, Category = Camera)
		bool IsCameraLag = true;
	UPROPERTY(EditDefaultsOnly,Category = Camera)
		float CameraLagSpeed = 8.0f;
	void CameraFollow(float DeltaTime);
};
