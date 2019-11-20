// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UENUM(BlueprintType)
enum class ItemType: uint8 {
	IT_Seed		UMETA(DisplayName = "Seed"),
	IT_Health	UMETA(DisplayName = "Health")
};

UCLASS()
class FRULLET_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* sceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* collider;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ItemType itemType;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool characterNear;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
