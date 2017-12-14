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
	
	//loop that keeps going until the game ends
	void playerLoop(Player *player, char space[][50])
	{
		cout << "Running game loop" << endl;
		while(true)
        {
            char input;
            cin >> input;
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
                break;
            }
        }
	}	
};
