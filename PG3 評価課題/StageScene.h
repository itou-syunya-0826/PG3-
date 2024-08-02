#pragma once
#include  "IScene.h"
#include "InputHandle.h"

class StageScene : public IScene
{
private:
	InputHandle* inputHandle_ = nullptr;
	Command* command_ = nullptr;
	Player* player_;

public:

	StageScene();
	~StageScene();

	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
};

