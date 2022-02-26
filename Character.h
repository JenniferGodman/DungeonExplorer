#pragma once

#include <vector>
#include <string>
#include "Item.h"


/*
* A player in the game
*/
class Character
{
private:
	std::string name;
	std::vector<Item> items;
public:
	Character(const char* theName);
	std::string getName();
	bool dropItem(const char* itemName);
};

