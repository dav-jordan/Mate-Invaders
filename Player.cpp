#include <iostream>
#include "Player.h"
#include "Entity.h"

using namespace std;

//initializes Player... For Player, ai will always be false
Player::Player(int x, int y, bool moveable, bool ai):Entity(x, y, moveable, ai)
{}

//@return character that is used to represent the player in the gamespace
const char * Player::getVisual() const
{
	return visual;
}

//@return move rate of Player
const int Player::getMoveRate() const
{
	return moveRate;
}
