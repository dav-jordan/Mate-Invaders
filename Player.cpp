#include <iostream>
#include "Player.h"
#include "Entity.h"

using namespace std;

Player::Player(int x, int y, bool moveable, bool ai):Entity(x, y, moveable, ai)
{}

const char * Player::getVisual() const
{
	return visual;
}

const int Player::getMoveRate() const
{
	return moveRate;
}

//TODO: Implement getInput
void getInput()
{}
