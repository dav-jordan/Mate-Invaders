#include <iostream>
#include "Player.h"
#include "Entity.h"

using namespace std;

//namespace for general game functions
//TODO: implement functions
namespace game
{
	//@param- array to print 
	//prints gamespace array
	void printGame(char space[][50])
	{
		cout << "Printing gamespace" << endl;
	}

    //@param-player object for player currently playing the game
    //      -array that will be passed to printGame to be pirnted
	//loop that keeps going until the game ends
    //handles player movement and action
	void playerLoop(Player *player, char space[][50])
	{
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

        }
	}	
};
