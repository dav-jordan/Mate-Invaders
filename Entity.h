#include <iostream>
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

public:
	//constructors
	Entity();
	Entity(int x, int y);
	Entity(int x, int y, bool moveable, bool ai);
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
	int xPos();
	int yPos();
	bool isMoveable();
	bool isAi();	
};
