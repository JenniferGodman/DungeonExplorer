#include "GameIO.h"
#include <string>
#include <iostream>

using namespace std;

/*
* Output the message to the play followed by a new line.
*/
void GameIO::messageOut(const string theMessage) {
	cout << theMessage << endl;
}

/*
* Get the player input.
* Parameter input is the addrfess of a vector that will contian the validated player input.
* The vaidation class insures that the input is valid
*/
void GameIO::getInput(std::vector<validWords> &input) {
	// get input from user
	// vaidate with vaidation class add to vector
	// InputValidation::validateInput return false if need to input again
	// if not valid report err with messageOut and repeat input
}