#include <iostream>
#include <stdlib.h>
using namespace std;


#define WIDTH 200
#define HEIGHT 100
int main()
{
	//to indicate the file has been excecuted
	cout << "File successfully ran!" << endl;
	//2d array to represent positions on the terminal screen
	char gamespace[WIDTH][HEIGHT];
	
	//initialize the gamespace array
	for(int i = 0; i < HEIGHT; i++)
	{
		for(int k = 0; k < WIDTH-1; k++)
			gamespace[k][i] = ' ';
		gamespace[WIDTH-1][i] = '\n';
	}
	
	//**TESTING ONLY**
	//print initialized array
	for(int i = 0; i < HEIGHT; i++)
		for(int k = 0; k < WIDTH; k++)
			cout << gamespace[k][i];

	exit(1);
	
}
