// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LMADefaultCharacter.generated.h"
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class LEAVEMEALONE_API ALMADefaultCharacter : public ACharacter
{
	GENERATED_BODY()
private:
	float YRotation = -75.0f; // �������� �� ������� ������ �� ��� Y.
	float ArmLength = 1400.0f; // �������� �� ����� �������.
	float FOV = 55.0f; // �������� �� ���� ������ ������.

public:
	// Sets default values for this character's properties
	ALMADefaultCharacter();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* CameraComponent;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
