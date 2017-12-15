#include <iostream>
#include <vector>
#include "Entity.h"
#include "Player.h"
#include "Game.h"

using namespace std;
using namespace game;


#define WIDTH 50
#define HEIGHT 50

int main()
{
	//to indicate the file has been excecuted
	cout << "File successfully ran!" << endl;
	//2d array to represent positions on the terminal screen
	char gamespace[WIDTH][HEIGHT];

    //vector that will store all entities
    vector<Entity*> entities;

	//initialize the gamespace array
	for(int i = 0; i < HEIGHT; i++)
	{
		for(int k = 0; k < WIDTH-1; k++)
			gamespace[k][i] = ' ';

		gamespace[WIDTH-1][i] = '\n';
	}
    //
    Player *player = new Player(0, WIDTH/2, true, false, 'a');
    entities.push_back(player);
	playerLoop(player, gamespace, WIDTH, HEIGHT);
	exit(1);
	
}
