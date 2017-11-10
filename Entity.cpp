#include <iostream>
#include "Entity.h"
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
	this->moveable = true;
	this->ai = false;
}
Entity::Entity(int x, int y, bool moveable, bool ai)
{
	this->x = x;
	this->y = y;
	this->moveable;
	this->ai = ai;
}

//moving functions
void Entity::moveUp()
{
	y++;
}
void Entity::moveDown()
{
	y--;
}
