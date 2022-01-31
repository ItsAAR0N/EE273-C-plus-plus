#include <iostream>
#include <string>

using namespace std;

// Declare class
class school
{
private: // Variable declaration
	string name;
	int marks;
public: // Function declaration, can only access (private) variables via (public) functions
	void getData();
	void display_data();
};

void school::getData()
{
	cout << "Please enter student name: " << endl;
	cin >> name;
	cout << "Please enter student marks: " << endl;
	cin >> marks;
}

void school::display_data()
{
	cout << "Student name: " << name << endl;
	cout << "Student marks: " << marks << endl;
}

int main(void)
{
	school student1, student2; // Pass objects into class
	// Call functions within classes
	student1.getData();
	student2.getData();

	student1.display_data();
	student2.display_data();
	return 0;
}


