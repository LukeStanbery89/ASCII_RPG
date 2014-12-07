#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string line;
	ifstream myfile("test.level");
	if(myfile.is_open()) {
		while(getline(myfile, line)) {
			//cout << line << endl;
			cout << line << "\n";
		}
		myfile.close();
	} else {
		cout << "Cannot open file.";
	}

	system("PAUSE");
	return 0;
}