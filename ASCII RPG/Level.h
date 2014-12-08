#pragma once
#include<string>

using namespace std;

class Level {
public:
	// Methods
	Level(string filePath);
	int getWidth();
	int getHeight();
private:
	// Variables
	int width, height;
};
