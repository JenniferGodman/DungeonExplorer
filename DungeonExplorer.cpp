// DungeonExplorer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"
#include "Character.h"

int main()
{
    // setup the game
    // first we need a character, your could pass the character name on the command line or ask it for it at the start of Play . . . lots of options.
    Character character = Character("given name");
    Game game = Game(character);
    if (game.Play()) {
        std::cout << "You have WON!" << std::endl;
    }
    else {
        std::cout << "Sorry you have lost :(" << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
