#pragma once

#include "Functions.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>


using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	// Operators

	// Functions
	void mainMenu();
	int playerStats();


	// Accessors
	inline bool getPlaying() const { return this->playing; }
	inline bool getChoice() const { return this->myChoice; }
	
	int getHealth()
	{
		return health;
	}

	int getAllStats()
	{
		return health, hunger, thirst, attack, resistance, dexterity, intelligence;
	}
	
	string statArr[7][2] = { {"Health: ", to_string(health)} ,
							 {"Hunger: ", to_string(hunger)} ,
							 {"Thirst: ", to_string(thirst)} ,
							 {"Attack: ", to_string(attack)} ,
							 {"Resistance: ", to_string(resistance)} ,
							 {"Dexterity: ", to_string(dexterity)} ,
							 {"Intelligence: ", to_string(intelligence)}
	};


	// Modifiers
	int loseHealth(int damage)
	{
		health -= damage;
		if (health<=0){
		
		}
		getHealth();
	}
	int addHealth(int add)
	{
		health += add;
		getHealth();
	}
	private:
		int choice;
		bool myChoice;
		bool playing;
		int hunger = 100;
		int thirst = 100;
		int health = 100;
		int attack= 10;
		int resistance= 12;
		int dexterity= 8;
		int intelligence= 2;
};

