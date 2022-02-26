#pragma once

#include <string>
#include <vector>

// valid command words
enum validWords {look, fowards, right, left, pickup, drop, run, fight, inventry, health };

/*
* Validates the input and convertes to the enum above.
*/
class InputValidation
{
	bool validateInput(std::string input, std::vector<validWords>& result);
};

