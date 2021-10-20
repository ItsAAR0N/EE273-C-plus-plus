#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string filename;
	float myInteger; // Converted from string myString to suit Q5 -- now Float
	int runningTotal = 0;
	float runningAvg;
	float sum = 0;

	cout << "Please enter the name of your file to open: " << endl;
	cin >> filename;

	ifstream currentFile;
	currentFile.open(filename); // Removed .c_str() for Q5

	if (!currentFile) {
		cout << "Error opening file: " << filename << endl;
		return -1;
	}

	while (!currentFile.eof()) {
		currentFile >> myInteger;
		sum += myInteger;
		runningTotal += 1;
		runningAvg = sum/runningTotal;
		//getline(currentFile, myString);
		cout << myInteger << ", " << runningAvg << endl;
	}
	currentFile.close();
}

