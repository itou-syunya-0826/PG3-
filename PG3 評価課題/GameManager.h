#pragma once

#include <Novice.h>
#include <memory>// std::uniqueを使うために必要
#include "IScene.h"// シーンの基底クラスに加えて
#include "TitleScene.h"// 各シーンを読み込む
#include "StageScene.h"
#include "ClearScene.h"

using namespace std;

class GameManager
{
private:
	//シーンを保持するメンバ変数
	unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_;// 現在のシーン
	int prevSceneNo_;// 前のシーン

public:

	GameManager();
	~GameManager();

	int Run(char* keys, char* preKeys);//この関数でゲームループを呼び出す

};

