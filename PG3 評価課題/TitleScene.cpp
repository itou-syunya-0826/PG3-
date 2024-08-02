#include "TitleScene.h"


void TitleScene::Initialize(){}

void TitleScene::Update(char* keys, char* preKeys){
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
	Novice::ScreenPrintf(0,0,"TitleScene");
}
