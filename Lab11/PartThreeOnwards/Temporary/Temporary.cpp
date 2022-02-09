#include <iostream>
#include <fstream>
#include <list>
#include "C:\Users\aaron\Desktop\PartThreeOnwards\Temporary\HeaderOne.h"
using namespace std;

int main(void)
{	// Declare vars
	string studentName;
	string fileInput = "C:/Users/aaron/Desktop/PartThreeOnwards/Temporary/Marks.txt";
	int NoStudents;
	int NoSubjects;
	float tempMark;
	float tempAvgMark = 0;
	const int CONSTANT = 5; // Only 5 students current (part 2)

	list<storeMarks> studentList(CONSTANT); // List called studentList with element each of type storeMarks
	list<storeMarks>::iterator first = studentList.begin(), toofar = studentList.end(), cur; // cur is iterator

	ifstream file(fileInput);
	
	if (!file) {
		cout << "Error finding file." << endl;
		exit(-1);
	}

	int i = 0;
	cur = first;
	while (cur != toofar && !file.eof()) {
		file >> studentName;
		cur->setstudentName(studentName); // Grab student name from file
		cur->setNoSubjects(5); // Each student will only have 5 subjects now (left constant)
		for (int i = 0; i < 5; i++) { // Set array of mark results
			file >> tempMark;
			tempAvgMark += tempMark;
			cur->setMark(i, tempMark);
			cur->setaverageMark(tempAvgMark/5);	
		}
		tempAvgMark = 0; // Reset it for each object it iterates through
		++cur;
	}

	cur = first;
	while (cur != toofar) {
		cur->showEntry();
		++cur;
	}
	file.close();
	return 0;
}