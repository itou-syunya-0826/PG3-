#pragma once
#include "Player.h"
class Player;

//コマンドを抽象的に呼び出すクラス

class Command
{
public:
	Command();
	virtual ~Command();
	virtual void Exec(Player& player) = 0;
};

class MoveRightCommand : public Command 
{
public:
	void Exec(Player& player) override;
};

class MoveLeftCommand : public Command 
{
public:
	void Exec(Player& player) override;
};


