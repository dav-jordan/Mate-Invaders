#pragma once

#include <iostream>
#include <vector>
using namespace std;

//The entity class is the super class of all entities in the game, 
//which includes the ship, the enemy ships, and the barriers
class Entity
{

//every entity has an x and y coordinate
//only entity that won't be moveable are barriers
//isAi used for determining whether or not the ship is the player when moving through list of entities
private:
	int x;
	int y;
	bool moveable;
	bool ai;
    bool visual;

public:
	//constructors
	Entity();
	Entity(int, int);
	Entity(int, int, bool, bool, const char);
	//destructor
	~Entity();
	
	//moving functions
	//random used for enemies which will move randomly
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void moveRandom();

	//basic accessors
	int xPos() const;
	int yPos() const;
	bool isMoveable() const;
	bool isAi() const;
    const char getVisual();


};
