#include "ClearScene.h"

void ClearScene::Initialize()
{
}

void ClearScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "ClearScene");
}
