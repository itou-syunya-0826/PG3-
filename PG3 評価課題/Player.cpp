#include "Player.h"

Player::Player(){}

Player::~Player() {}

void Player::Initialize() 
{
	pos_.x = 640;
	pos_.y = 320;
	speed_ = 6;
}

void Player::Update()
{
	
}

void Player::Draw()
{
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, 16, 16, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}
