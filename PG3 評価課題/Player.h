#pragma once
#include <Vector3.h>
#include <Novice.h>

class Player
{
private:

	Vector3 pos_;
	float speed_;

public:

	Player();
	~Player();

	void Initialize();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

};

