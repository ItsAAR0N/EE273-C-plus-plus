#include <iostream>
#include <fstream>
#include <string>

using namespace std;

fstream toUpper(ifstream currentFileInput, string names, ofstream currentFileOutput) 
{
	while (!currentFileInput.eof()) {
		getline(currentFileInput, names);
		transform(names.begin(), names.end(), names.begin(), std::toupper);
		currentFileOutput << toupper(names) << endl;
	}

}

int main()
{
	string nameListInput;
	string nameListOutput;
	string names;

	cout << "Please enter the input file name: " << endl;
	cin >> nameListInput;

	cout << "Please enter the output file name: " << endl;
	cin >> nameListOutput;

	ifstream currentFileInput; // Declare running input file var
	currentFileInput.open(nameListInput.c_str()); // Open input file

	ofstream currentFileOutput(nameListOutput, ios::app); //Declare running output file name var, ios:app allows appending

	currentFileOutput << "" << endl; // Create space in output file
	while (!currentFileInput.eof()) {
		getline(currentFileInput, names);
		currentFileOutput << names << endl;
	}
	
	callFunction = toUpper(currentFileInput, names, currentFileOutput);

	currentFileInput.close();
	currentFileOutput.close();

	return 0;
}