// Fill out your copyright notice in the Description page of Project Settings.


#include "TrashBase.h"

// Sets default values
ATrashBase::ATrashBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ATrashBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrashBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

