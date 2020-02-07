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
	case 1:
		playerStats();
	default:
		break;


	}
}
int Game::playerStats() 
{
	cout << "These are your current stats" << "\n";

	for (int i=7-1; i >= 0; i--) {
		cout << statArr[i][1];
	}
	

	if (getHealth() <= 50)
	{
		cout << "Your health is low! I reccommend you drink a health potion. Like seriously dude." << "\n";
		cout << "Choice: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "You drink a potion. Your health is now " << getHealth();
		default:
			cout << "yeah, i eat poop; i think it tastes good. honestly, its not that different from eating eggs or milk, and it tastes good";
			break;

		}
	}

	return 0;


}



