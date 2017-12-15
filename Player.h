#pragma once

#include <iostream>
#include "Entity.h"

using namespace std;

//class representing the ship that the player controls
//This is a subclass of Entity so it has the variables that entity has along with 
//others that are seen here
class Player: public Entity
{
//The player ship has a character that will be used to represent the ship on the sreen 
//since images can not be used in a terminal
//The player also has a moveRate which determines how much the player can move in one second
private:
	const char * visual = "A";
	const int moveRate = 5;	

public:
	//Constructors
	Player(int, int, bool, bool, const char);
	
	//accessors
	const int getMoveRate() const;

};
