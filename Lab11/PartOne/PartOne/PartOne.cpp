#include <iostream>
#include <vector>
#include <fstream>
#include "C:\Users\aaron\Desktop\PartOne\PartOne\HeaderOne.h"
using namespace std;

int main(void)
{	// Declare vars
	string studentName;

	int NoStudents;
	int NoSubjects;
	float tempMark;
	float averageMark;

	cout << "Please enter how many students there are: " << endl;
	cin >> NoStudents;
	vector<storeMarks> studentList(NoStudents); // Vector called studentList with element each of type storeMarks
	vector<storeMarks>::iterator first = studentList.begin(), toofar = studentList.end(), cur; // cur is iterator
	
	cur = first;	
	while (cur != toofar) {
		cout << "Please enter name: " << endl;
		cin >> studentName;
		cur->setstudentName(studentName);

		cout << "Please enter number of subjects: " << endl;
		cin >> NoSubjects;
		cur->setNoSubjects(NoSubjects);

		cout << "Please enter the marks: " << endl;
		for (int i = 0; i < NoSubjects; i++) { // Set array of mark results
			cin >> tempMark;
			cur->setMark(i,tempMark);
		}	
		++cur;
	}

	cur = first;
	while (cur != toofar) {
		cur->showEntry();
		++cur;
	}
	return 0;
}