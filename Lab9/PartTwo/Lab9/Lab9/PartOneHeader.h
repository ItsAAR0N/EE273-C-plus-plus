#ifndef PartOneHeader_H
#include <iostream>
#include <string>
#define LINE "----------------------------------------------------------"
using namespace std;

class Person 
{
private:
	// Private class member variables/attributes
	string Name, Gender;
	int Age;
public:
	// Public class member functions
	string getName(int i) { return Name; } // Getter (Get name with object array index)
	string getGender(int i) { return Gender; } // Getter (Get Gender)
	int getAge(int i) { return Age; } // Getter (Get Age)

	void setName(string p, int i) { // Setter (Set name, parse array index for object)
		Name = p; i = i;
	}
	void setGender(string p, int i) { // Setter (Set Gender)
		Gender = p; i = i;
	}
	void setAge(int p,int i) { // Setter (Set Age)
		Age = p; i = i;
	}

	// Constructor/Deconstructor
	Person() {
		Age = 0;
		Name = "Null";
		Gender = "Gender";
	} 
	virtual ~Person() {}	
};

class Student:public Person
{
private:
	// Private class member variables/attributes
	string StudentNumber;
	int NumberOfSubjects;
	int Age; // PART TWO -- Method Overriding
	string* Subject;
	int* CourseWork; // PART THREE - Method Overloading
	int* Exam;
	bool Mature; // PART TWO -- Method Overriding

public:
	string getStudentNumber(int i) { return StudentNumber; } // Getter (Get Student number)
	int getNumberOfSubjects(int i) { return NumberOfSubjects; } // Getter (Get number of subjects)
	string getSubject(int i) { return Subject[i]; } // Getter (Get subject)
	bool getMature(int i) { return Mature; } // Getter (get maturity T/F)
	int getCourseworkMarks(int i) { return CourseWork[i]; } // Getter (Get Coursework mark)
	int getExamMarks(int i) { return Exam[i]; } // Gtter (Get exam mark)
	int getAge(int i) { return Age; } // Getter (Get Age) -- Method overridng PART TWO

	void setStudentNumber(string s, int i) { // Setter (Set studnet number)
	StudentNumber = s; }

	void setNumberOfSubjects(int s) { // Setter (Set number of subjects (array sizes))
	NumberOfSubjects = s; 
	Subject = new string[s]; // New array sizes declared
	CourseWork = new int[s];
	Exam = new int[s];
	}
	void setSubject(string s, int c, int e, int i) { // Setter (Set subject)
		Subject[i] = s; 
		CourseWork[i] = c; // PART THREE - Method Overloading
		Exam[i] = e;
	} 

	void setMarks(int c, int e, int i) { // PART THREE - Method Overloading
		CourseWork[i] = c;
		Exam[i] = e;
	}

	void setMarks(int e, int i) { // PART THREE - Method Overloading
		Exam[i] = e;
	}

	// PART TWO -- Method Overloading
	void setAge(int p, int i) { // Setter (Set Age)
		Age = p; i = i;
		if (Age >= 26) {
			Mature = true; // Sets Mature
		}
		else Mature = false;
	}

	// Constructor/Deconstructor
	Student() {
		StudentNumber = "0";
		NumberOfSubjects = 0;
		Subject = NULL;
	} 
	virtual ~Student() {
		if (Subject != NULL) {
			delete[] Subject;
		}
	}
};

class Staff : public Person
{
private:
	int NumberOfSubjects;
	int Age; // Part Two -- Method Overriding
	string* Subject;
public:
	int getNumberOfSubjects(int i) { return NumberOfSubjects; } // Getter (Get number of Subjects)
	string getSubject(int i) { return Subject[i]; } // Getter (Get Subject)

	string getAge(int i) { return "It is impolite to ask of a staff member's age."; } // Getter (Get Age) -- method overriding 

	void setNumberOfSubjects(int s) { // Setter (Set number of subjects)
		NumberOfSubjects = s;
		Subject = new string[s];
	}
	void setSubject(string s, int i) { Subject[i] = s; } // Setter (Set Subject)
	// PART TWO -- Method Overriding
	void setAge(int p, int i) { // Setter (Set Age)
		Age = p; 
	}

	// Constructor/Deconstructor
	Staff() {
		NumberOfSubjects = 0;
		Age = 0;
		Subject = NULL;
	}
	virtual ~Staff() {
		if (Subject != NULL) {
			delete[] Subject;
		}
	}
};

#endif