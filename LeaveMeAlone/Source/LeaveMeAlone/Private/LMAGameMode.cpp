// Fill out your copyright notice in the Description page of Project Settings.
#include "LMAGameMode.h"
#include "Player//LMADefaultCharacter.h"
#include "Player//LMAPlayer_Controller.h"

ALMAGameMode::ALMAGameMode()
{
	DefaultPawnClass = ALMADefaultCharacter::StaticClass();
	PlayerControllerClass = ALMAPlayer_Controller::StaticClass();
}