#include "Level.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

Level::Level(string filePath) {
	// Read the level data from the file and set height/width
	width = 0;
	height = 0;

	string line;
	ifstream myfile(filePath);
	if(myfile.is_open()) {
		while(getline(myfile, line)) {
			cout << line << endl;
			// Set the level width
			if(line.length() > width) {
				width = line.length();
			}
			// Increment the level height
			height++;
		}
		myfile.close();
	} else {
		cout << "Cannot open file.";
	}

	cout << "\nWidth: " << width << endl;
	cout << "Height: " << height << endl;

	// Create pixels array
	int** pixels = new int*[height];
	for(int i = 0; i < height; i++) {
		pixels[i] = new int[width];
	}
}

int Level::getWidth() {
	return width;
}

int Level::getHeight() {
	return height;
}