#include <iostream>
#include "Entity.h"
using namespace std;

//default constructor for entity
Entity::Entity()
{
	x = 0;
	y = 0;
	moveable = false;
	ai = false;
}
