#include "Game.h"



Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{

}

// Functions

void Game::mainMenu()
{
	cout << "THE MAIN MENU" << "\n";
	cout << "THESE ARE THE MAIN MENU OPTIONS" << "\n";
	cout << "0: Quit" << "\n";
	cout << "1: Stats" << "\n";
	cout << "2: Travel" << "\n";
	cout << "3: Shop" << "\n";
	cout << "4: Level Up" << "\n";
	cout << "5: Rest" << "\n";
	cout << "6: Scavenge" << "\n";

	cout << "\n" << "Choice: " << "\n";
	cin >> choice;

	switch (choice)
	{
	case 0:
		playing = false;
		break;
	default:
		break;

	}
}