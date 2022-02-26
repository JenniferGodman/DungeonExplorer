#include "Game.h"
#include <format>

/*
* Construct the game, no player
*/
Game::Game() {

}

/*
* Construct the game, with player
*/
Game::Game( Character c) {
	Game::player = &c;
}

/*
* Play the game, returns rtue if you win!
*/
bool Game::Play() {
	if (player != NULL) {
		io.messageOut("Playing as \"" + player->getName() + "\"");
	}
	return true;
}