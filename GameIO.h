#pragma once

#include <string>
#include <vector>
#include "InputValidation.h"

/*
* Class to handle in game input and output
*/
class GameIO
{

public:
	void messageOut(const std::string theMessage); // displays messge to the player
	void getInput(std::vector<validWords> &input); // get the input, parameter is the address of a vector that will contain the results
};

