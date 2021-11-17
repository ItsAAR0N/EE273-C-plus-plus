#include <iostream>
#include "C:\Users\aaron\Desktop\PartOne\PartOne\HeaderPerson.h"

int main(void)
{	
	// Define vars
	string myArray[NO_OF_PERSONS];
	int i = 0;
	string str;
	string fileNameInput;

	cout << "Please enter the input file name: " << endl;
	cin >> fileNameInput;
	ifstream currentFileInput; // Declare current input file var
	currentFileInput.open(fileNameInput);
	
	while (getline(currentFileInput, str)) { // Grab name line by line and assign to 1D Array
		myArray[i] = str;
		i = i + 1; // Will repeat for n times depending how many names there are.
	}

	struct Person* head = NULL; // Point head towards Null

	for (int i = 0; i < NO_OF_PERSONS; i++) {
		// Create a new person
		struct Person* newPerson = new struct Person;
		cout << "Name for Person " << i + 1 << endl;
		newPerson->Name = myArray[i];
		// Add person to the list. First make new person to point to node the 
		// head is currently pointing to
		newPerson->next = head;
		// Read just the head to point to the new person
		head = newPerson;
		struct Person* p = head;
		cout << p->Name << endl;
	
	}
	cout << LINE << endl;
	walkList(head); // Print the new linked list
	currentFileInput.close();
	return 0;
}

