// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Core/AzureCharacterBase.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "LrjLocomotionSystemCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

USTRUCT(Blueprintable)
struct FCharacterMovementData
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector PreviousVelocity = FVector(0, 0, 0); // 前一帧的速度
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Acceleration = FVector(0, 0, 0);// 加速度
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Speed = 0.f;//速度
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsMoving = false;//是否移动
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MovementInputAmount = false;//输入量
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bHasMovementInput = false;//是否有输入
};


UCLASS()
class ALrjLocomotionSystemCharacter : public AAzureCharacterBase
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** LeftMouse Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LeftMouseAction;

	/** RightMouse Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RightMouseAction;

public:
	ALrjLocomotionSystemCharacter();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	
	/** Called for LeftMouse input */
	void LeftMouse(const FInputActionValue& Value);
	void OnReleasedMouseLeft(const FInputActionValue& Value);
	
	/** Called for RightMouse input */
	void RightMouse(const FInputActionValue& Value);
	void OnReleasedMouseRight(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();
	
	virtual void Tick(float DeltaSeconds) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	
	// 动画部分
public:
	FCharacterMovementData MovementData;
};

