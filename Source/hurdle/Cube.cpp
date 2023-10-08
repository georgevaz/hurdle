// Fill out your copyright notice in the Description page of Project Settings.


#include "Cube.h"

// Sets default values
ACube::ACube()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Value = 100;

}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACube::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

