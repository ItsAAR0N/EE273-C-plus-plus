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
	string* Subject;
public:
	string getStudentNumber(int i) { return StudentNumber; } // Getter (Get Student number)
	int getNumberOfSubjects(int i) { return NumberOfSubjects; } // Getter (Get number of subjects)
	string getSubject(int i) { return Subject[i]; } // Getter (Get subject)

	void setStudentNumber(string s, int i) { // Setter (Set studnet number)
	StudentNumber = s; }

	void setNumberOfSubjects(int s, int i) { // Setter (Set number of subjects)
	NumberOfSubjects = s; 
	Subject = new string[s]; // New array 
	}
	void setSubject(string s, int i) { Subject[i] = s; } // Setter (Set subject)

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
	string* Subject;
public:
	int getNumberOfSubjects(int i) { return NumberOfSubjects; } // Getter (Get number of Subjects)
	string getSubject(int i) { return Subject[i]; } // Getter (Get Subject)

	void setNumberOfSubjects(int s) { // Setter (Set number of subjects)
		NumberOfSubjects = s;
		Subject = new string[s];
	}
	void setSubject(string s, int i) { Subject[i] = s; } // Setter (Set Subject)

	// Constructor/Deconstructor
	Staff() {
		NumberOfSubjects = 0;
		Subject = NULL;
	}
	virtual ~Staff() {
		if (Subject != NULL) {
			delete[] Subject;
		}
	}
};

#endif