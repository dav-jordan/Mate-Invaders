#include <iostream>
#include "Player.h"
#include "Entity.h"

using namespace std;

Player::Player(int x, int y, bool moveable, bool ai):Entity(x, y, moveable, ai)
{}

const char * Player::getVisual()
{
	return visual;
}

const int Player::getMoveRate()
{
	return moveRate;
}

//TODO: Implement getInput
void getInput()
{}
