#pragma once

using namespace std;

class Game {
public:
	// Variables
	const int FRAMES_PER_SECOND = 60;
	const int MS_PER_UPDATE = 1000 / FRAMES_PER_SECOND;

	// Constructor
	Game();

	// Methods
	void run();
private:
	// Variables
	bool running = false;

	// Methods
	void processInput();
	void update();
	void render();
};
