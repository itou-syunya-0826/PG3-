#pragma once
#include <Command.h>

//入力を取りまとめるクラス
class InputHandle
{
public:

	Command* HandleInput();

	void  AssignMoveLeftCommand2PresskeyA();
	void  AssignMoveRightCommand2PresskeyD();

private:

	Command* pressKeyD_;
	Command* pressKeyA_;

};

