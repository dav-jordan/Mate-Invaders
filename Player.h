#include <iostream>
#include "Entity.h"

using namespace std;

//class representing the ship that the player controls
class Player:Entity
{
private:
	//what the ship will be represented as on the screen
	const char * visual = "A";
	//how many times per second the ship can move
	const int moveRate = 5;	
};
