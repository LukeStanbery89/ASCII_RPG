#include "Game.h"
#include "Level.h"
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

// CONSTRUCTOR:
Game::Game() {
}

// PUBLIC METHODS:
void Game::run() {
	double previous = GetCurrentTime();
	double lag = 0.0;
	int frames = 0;
	int ms = 0;

	// Game Loop
	while(true) {
		double current = GetCurrentTime();
		double elapsed = current - previous;
		previous = current;
		lag += elapsed;
		ms += elapsed;

		processInput();

		while(lag >= MS_PER_UPDATE) {
			update();
			lag -= MS_PER_UPDATE;
		}

		render();
		frames++;
		if(ms >= 1000) {
			cout << frames << " FPS, " << ms << " MS" << endl;
			ms = 0;
			frames = 0;
		}
	}
}


// PRIVATE METHODS:
void Game::update() {
	for(int i = 0; i < 100000; i++) {

	}
}

void Game::render() {
}

void Game::processInput() {

}