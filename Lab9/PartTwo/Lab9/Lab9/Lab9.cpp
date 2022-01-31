#include <iostream>
#include "C:\Users\Aaron\Desktop\PartTwo\Lab9\Lab9\PartOneHeader.h"
using namespace std;

int main(void)
{   
    // Declare vars
    // Temporary running variables to parse thru array
    string tempName;
    string tempNo;
    int tempSubjNo;
    string tempSubj;
    string tempGender;
    int tempMarkcourse;
    int tempMarkexam;
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
        StudentArr2[i].setAge(tempAge, i);
    }

    // Get subjects (student)
    int j = 0;
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Please enter number of subjects for " << StudentArr[i].getName(i) << ": " << endl;
        cin >> tempSubjNo;
        StudentArr2[i].setNumberOfSubjects(tempSubjNo);
        // Enter subjects & coursework/exam marks (students)
        for (int i = 0; i < tempSubjNo; i++) {
            cout << "Please enter the subject for " << StudentArr[j].getName(j) << ": " << endl;
            cin >> tempSubj;
            cout << "Please enter the coursework mark for " << StudentArr[j].getName(j) << ":" << endl;
            cin >> tempMarkcourse;
            cout << "Please enter the exam mark for " << StudentArr[j].getName(j) << ":" << endl;
            cin >> tempMarkexam;
            StudentArr2[j].setSubject(tempSubj, tempMarkcourse, tempMarkexam, i);
        }
        j++;
    }
    cout << LINE << endl;
    // Output
    for (int i = 0; i < numberOfStudents; i++) {
        cout << i << ".  Name: " << StudentArr[i].getName(i) << ", Student number:" << StudentArr2[i].getStudentNumber(i) << ", Age: " << StudentArr2[i].getAge(i) << ", Gender : " << StudentArr[i].getGender(i) << endl;
    }
    cout << LINE << endl;
    // Output 
    for (int j = 0; j < numberOfStudents; j++) {
        cout << "Classes undertaken by " << StudentArr[j].getName(j) << ": " << endl;
        for (int i = 0; i < StudentArr2[j].getNumberOfSubjects(j); i++) {
            cout << "Subject: " << StudentArr2[j].getSubject(i);
            cout << ", Coursework mark:" << StudentArr2[j].getCourseworkMarks(i) << "%";
            cout << ", Exam mark: " << StudentArr2[j].getExamMarks(i) << "%" << endl;
        }
    }
    cout << LINE << endl;
    // PART TWO
    cout << "Mature?: ";
    if (StudentArr2[3].getMature(3) == 0) { // Example of getting maturity of student ( PART TWO ) 
        cout << "False" << endl; // 0 = False
    }
    else
        cout << "True" << endl; // 1 = True

    Staff StaffArr[numberOfStaff];
  
    cout << StaffArr[0].getAge(0) << endl; // Example of asking staff for age prints "it is rude to ask" ( PART TWO )
    // Enter name (staff)
    for (int i = 0; i < numberOfStaff; i++) {
        cout << "Please enter name " << i << ":" << endl;
        cin >> tempName;
        StaffArr[i].setName(tempName, i);
    }

    // Enter number of subjects taught by individual staff (staff)
    int k = 0;
    for (int i = 0; i < numberOfStaff; i++) {
        cout << "Please enter number of subjects taught by " << StaffArr[i].getName(i) << ": " << endl;
        cin >> tempSubjNo;
        StaffArr[i].setNumberOfSubjects(tempSubjNo);
        // Enter subjects
        for (int i = 0; i < tempSubjNo; i++) {
            cout << "Please enter the subject: " << endl;
            cin >> tempSubj;
            StaffArr[k].setSubject(tempSubj, i);
        }    
        k++;
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
    /*
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
    for (int i = 0; i < numberOfStudents-1; i++) {
        cout << i << ".  Name: " << StudentArr[i].getName(i) << ", Student number:" << StudentArr2[i].getStudentNumber(i) << ", Age: " << StudentArr[i].getAge(i) << ", Gender : " << StudentArr[i].getGender(i) << endl;
    }
    cout << LINE << endl;
    */

    return 0;
}

