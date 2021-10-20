#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string fileNameInput;
	string fileNameOutput;
	int myInteger;
	float sum = 0;
	int runningTotal = 0;
	float runningAvg = 0;

	cout << "Please enter the input file name: " << endl;
	cin >> fileNameInput;

	ifstream currentFileInput; // Declare input file var
	currentFileInput.open(fileNameInput); // Open input file

	cout << "Please enter the output file name: " << endl;
	cin >> fileNameOutput;

	ofstream currentFileOutput; // Declare output file var
	currentFileOutput.open(fileNameOutput); // Open output file 

	while (!currentFileInput.eof()) {
		currentFileInput >> myInteger;
		sum += myInteger;
		runningTotal += 1;
		runningAvg = sum / runningTotal;
		//getline(currentFile, myString);
		currentFileOutput << myInteger << ", " << runningAvg << endl;
	}
	currentFileInput.close();
	currentFileOutput.close();


}