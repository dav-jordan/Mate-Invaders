#include <iostream>
#include <vector>
#include "Player.h"
#include "Entity.h"

using namespace std;

//namespace for general game functions
namespace game
{
    //vector that will store all entities
    vector<Entity*> entities;


    //@param-gamespace array
    //      -vector array to print to gamespace from
    //places entities onto space array
    void drawEntities(char space[][50], vector<Entity*> entities)
    {
        cout << "Drawing entities to gamespace" << endl;
        for(int i = 0; i < entities.size(); i++)
        {
            space[entities[i]->xPos()][entities[i]->yPos()] = entities[i]->getVisual();
        }
    }

	//@param- array to print
    //      -width and height of space
	//prints gamespace array
	void printGame(char space[][50], int width, int height)
	{
        cout << "Printing gamespace" << endl;
        for(int i = 0; i < width; i++)
        {
            for(int k = 0; k < height; k++)
            {
                cout << space[i][k] << endl;
            }
        }

	}

    //@param-player object for player currently playing the game
    //      -array that will be passed to printGame to be pirnted
    //      -width and height of array to be printed
	//loop that keeps going until the game ends
    //handles player movement and action
	void playerLoop(Player *player, char space[][50], int width, int height)
	{
        cout << "Starting player loop" << endl;
		while(true)
        {
            //take input from command line
            char input;
            cin >> input;

            //check input and call appropriate function
            if(input == 'a')
            {
                player->moveLeft();
            }
            else if(input == 'd')
            {
                player->moveRight();
            }
            else if(input == '\b')
            {
                //ends game if backspace is pressed
                break;
            }
            drawEntities(space, entities);
            printGame(space, width, height);
        }
	}	
};
