#ifndef HeaderOne_H
#include <iostream>
#include <string>

using namespace std;

class storeMarks
{
protected:
	// Define protected attributes
	string studentName;
	int NoSubjects;
	float *Marks;
	float averageMark;
public:
	storeMarks() { studentName = "N/A"; NoSubjects = 0; averageMark = 0; } // Constructer with default attribute values assigned
	virtual ~storeMarks() {} //Destructor -- need more
	// GETTERS
	string getstudentName() { return this->studentName; }
	int getNoSubjects() { return this->NoSubjects; }
	float getMarks(int i) { return Marks[i]; } // Array of marks
	int getaverageMark() { return this->averageMark; }
	// SETTERS
	void setstudentName(string n) { studentName = n; }
	void setNoSubjects(int no) { NoSubjects = no; Marks = new float[no]; }
	void setMark(int i,float m) { Marks[i] = m; } // New array of marks declared
	void setaverageMark(float a) { averageMark = a; }
	void showEntry() { 
		cout << this->studentName << ", Number of subjects: " << this->NoSubjects << endl; 
		for (int i = 0; i < getNoSubjects(); i++) {
			cout << "Mark " << i+1 << ": " << getMarks(i) << endl;
		}
	}
};





#endif