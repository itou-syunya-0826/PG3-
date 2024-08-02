#include "InputHandle.h"

void InputHandle::AssignMoveLeftCommand2PresskeyA()
{
    Command* command = new MoveLeftCommand();
    this->pressKeyA_ = command;
}

void InputHandle::AssignMoveRightCommand2PresskeyD()
{
    Command* command = new MoveRightCommand();
    this->pressKeyD_ = command;
}

Command* InputHandle::HandleInput()
{
    if (Novice::CheckHitKey(DIK_D)) {
        return pressKeyD_;
    }

    if (Novice::CheckHitKey(DIK_A)) {
        return pressKeyA_;
    }

    return nullptr;
}