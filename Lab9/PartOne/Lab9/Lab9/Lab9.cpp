#include <iostream>
#include "C:\Users\Aaron\Desktop\PartOne\Lab9\Lab9\PartOneHeader.h"
using namespace std;

int main(void)
{   
    // Declare vars
    int noofsubjects;
    // Temporary running variables to parse thru array
    string tempName;
    string tempNo;
    int tempSubjNo;
    string tempSubj;
    string tempGender;
    int tempAge;
    // Constants
    const int numberOfStudents = 4;
    const int numberOfStaff = 2;
  
    Person StudentArr[numberOfStudents]; // Declare array of objects
    Student StudentArr2[numberOfStudents]; // To access dervied class functions
    // Enter name & student number (student)
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Please enter name " << i << ":" << endl;
        cin >> tempName;
        StudentArr[i].setName(tempName, i);
        cout << "Please enter their associated student number" << endl;
        cin >> tempNo;
        StudentArr2[i].setStudentNumber(tempNo, i);
    }
    // Enter no. of subject for student and their subjects
    /*
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Please enter the number of subjects for: " << StudentArr[i].getName(i) << endl;
        cin >> tempSubjNo;
        for (int i = 0; i < tempSubjNo; i++) {
            cout << "Enter Subject(s) name for: " << StudentArr[i].getName(i) << endl;
            cin >> tempSubj;
            StudentArr2[i].setSubject(tempSubj, i);
        }
    }*/

    // Enter gender (student)
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Please enter gender for " << StudentArr[i].getName(i) << ":" << endl;
        cin >> tempGender;
        StudentArr[i].setGender(tempGender, i);
    }
    // Enter age (student)
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Please enter age for " << StudentArr[i].getName(i) << ":" << endl;
        cin >> tempAge;
        StudentArr[i].setAge(tempAge, i);
    }
    cout << LINE << endl;
    // Output
    for (int i = 0; i < numberOfStudents; i++) {
        cout << i << ".  Name: " << StudentArr[i].getName(i) << ", Student number:" << StudentArr2[i].getStudentNumber(i) << ", Age: " << StudentArr[i].getAge(i) << ", Gender : " << StudentArr[i].getGender(i) << endl;
    }
    cout << LINE << endl;
    /*
    Student myObjTwo;

    cout << "Please enter the number of subjects (Student): " << endl;
    cin >> noofsubjects;
    myObjTwo.setNumberOfSubjects(noofsubjects);
    cout << "The number of subjects are: " << myObjTwo.getNumberOfSubjects() << endl;

    for (int i = 0; i < myObjTwo.getNumberOfSubjects(); i++) {
        cout << "Enter Subject: " << endl;
        cin >> tempSubj;
        myObjTwo.setSubject(tempSubj, i);
    }

    for (int i = 0; i < myObjTwo.getNumberOfSubjects(); i++) {
        cout << i << ". " << myObjTwo.getSubject(i) << endl;
    }
    */

    
    Staff StaffArr[numberOfStaff];
    /*
    Staff myObjThree[1]; # Testing Array Object
    cout << "Please enter the number of subjects (Staff): " << endl;
    cin >> noofsubjects;
    myObjThree[1].setNumberOfSubjects(noofsubjects);
    cout << "The number of subjects are: " << myObjThree[1].getNumberOfSubjects() << endl;

    for (int i = 0; i < myObjThree[1].getNumberOfSubjects(); i++) {
        cout << "Enter Subject: " << endl;
        cin >> tempSubj;
        myObjThree[1].setSubject(tempSubj, i);
    }

    for (int i = 0; i < myObjThree[1].getNumberOfSubjects(); i++) {
        cout << myObjThree[1].getSubject(i) << endl;
    }
    */

    // Enter name (staff)
    for (int i = 0; i < numberOfStaff; i++) {
        cout << "Please enter name " << i << ":" << endl;
        cin >> tempName;
        StaffArr[i].setName(tempName, i);
    }
    // Enter number of subjects taught by individual staff (staff)
    int j = 0;
    for (int i = 0; i < numberOfStaff; i++) {
        cout << "Please enter number of subjects taught by " << StaffArr[i].getName(i) << ": " << endl;
        cin >> tempSubjNo;
        StaffArr[i].setNumberOfSubjects(tempSubjNo);
        // Enter subjects
        for (int i = 0; i < tempSubjNo; i++) {
            cout << "Please enter the subject: " << endl;
            cin >> tempSubj;
            StaffArr[j].setSubject(tempSubj, i);
        }    
        j++;
    }

    cout << LINE << endl;
    // Output
    for (int i = 0; i < numberOfStaff; i++) {
        cout << i << ".  Staff name: " << StaffArr[i].getName(i) << endl;
    }
    cout << LINE << endl;
    for (int j = 0; j < numberOfStaff; j++) {
        cout << "Classes taught by " << StaffArr[j].getName(j) << ": " << endl;
        for (int i = 0; i < StaffArr[j].getNumberOfSubjects(j); i++) {
            cout << StaffArr[j].getSubject(i) << endl;
        }
    }
    
    // Delete 
    int pos, i;
    cout << "Enter position of student (array) to delete as example: " << endl;
    cin >> pos;
    --pos; // As index of the element to be deleted is 1 less than its position

    for (i = pos; i < (numberOfStudents - 1); i++)
    {
        StudentArr[i] = StudentArr[i + 1]; // Since two arrays were used to define person age, student number etc.
        StudentArr2[i] = StudentArr2[i + 1];
    }
    cout << LINE << endl;
    // Output
    for (int i = 0; i < numberOfStudents - 1; i++) {
        cout << i << ".  Name: " << StudentArr[i].getName(i) << ", Student number:" << StudentArr2[i].getStudentNumber(i) << ", Age: " << StudentArr[i].getAge(i) << ", Gender : " << StudentArr[i].getGender(i) << endl;
    }
    cout << LINE << endl;

    return 0;
}

