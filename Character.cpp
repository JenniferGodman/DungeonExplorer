#include "Character.h"
#include <string>
using namespace std;

/*
* Construct a character with a given name
*/
Character::Character(const char* theName) {
	name = string(theName);
}

std::string Character::getName()
{
	if (name.length() == 0) {
		return "Not given";
	}
	return name;
}

/*
* Drop an item, returns true if dropped false otherwise.
*/
bool Character::dropItem(const char* itemName) {
	// check is the item in the items vector?
	return false;
}