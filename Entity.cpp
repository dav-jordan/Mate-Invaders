#include <iostream>
#include "Entity.h"
#include <vector>
using namespace std;

//constructors used for entity and its subclasses
//@param	x-x coord, y-y coord, moveable-whether or not it can be moved,
//		and ai-whether or not its a entity controlled by ai
Entity::Entity()
{
	this->x = 0;
	this->y = 0;
    this->moveable = false;
	this->ai = false;
}
Entity::Entity(int x, int y)
{
	this->x = x;
	this->y = y;
	this->moveable = false;
	this->ai = false;
}
Entity::Entity(int x, int y, bool moveable, bool ai)
{
	this->x = x;
	this->y = y;
	this->moveable = moveable;
	this->ai = ai;
}

//moving functions
//moveRandom used for ai only
//TODO Implement moveRandom
void Entity::moveUp()
{
	y++;
}
void Entity::moveDown()
{
	y--;
}
void Entity::moveLeft()
{
	x--;
}
void Entity::moveRight()
{
	x++;
}

//accessors
//@return whichever variable is in the name of the function
int Entity::xPos() const
{
	return x;
}
int Entity::yPos() const
{
	return y;
}
bool Entity::isMoveable() const
{
	return moveable;
}
bool Entity::isAi() const
{
	return ai;
}

//places entities onto space array
void Entity::drawEntities(char space[][50], vector<Entity> entities)
{
}