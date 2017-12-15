#include <iostream>
#include "Player.h"
#include "Entity.h"

using namespace std;

//initializes Player... For Player, ai will always be false
Player::Player(int x, int y, bool moveable, bool ai, const char visual):Entity(x, y, moveable, ai, visual)
{}

//@return move rate of Player
const int Player::getMoveRate() const
{
	return moveRate;
}
