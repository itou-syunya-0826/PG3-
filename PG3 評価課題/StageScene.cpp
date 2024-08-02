#include "StageScene.h"

StageScene::StageScene(){}

StageScene::~StageScene(){}

void StageScene::Initialize()
{
	inputHandle_ = new InputHandle();

	inputHandle_->AssignMoveLeftCommand2PresskeyA();
	inputHandle_->AssignMoveRightCommand2PresskeyD();

	player_ = new Player();
	player_->Initialize();
}

void StageScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}

	command_ = inputHandle_->HandleInput();

	if (this->command_) {
		command_->Exec(*player_);
	}

	player_->Update();
	player_->Draw();
}

void StageScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "StageScene");
}
