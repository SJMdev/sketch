#define SDL_MAIN_HANDLED // This line prevents SDL from defining its own main
#include <SDL/SDL_main.h>

#include "ecs/ecs.hpp"
#include "game.hpp"
#include <iostream>


int main(int argc, char* argv[]){
	Game game{};

	init(game);

	run(game);

	deinit(game);

	return 0;
}