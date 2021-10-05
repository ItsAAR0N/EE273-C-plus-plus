#include <iostream>
using namespace std;

int main()
{
    // Part 1, question 1
    int integerNum;
    float floatingPoint;
    bool Boolean;
    // Part 1, question 2
    float Multiplied;
    float DividedOne;
    float DividedTwo;

    cout << "Please enter an integer, floating and boolean value:" << endl;
    cin >> integerNum;
    cin >> floatingPoint;
    cin >> Boolean;

    cout << "Your integer value is: " << integerNum << endl;
    cout << "Your floating point value is: " << floatingPoint << endl;
    cout << "Your boolean value is: " << Boolean << endl;

    Multiplied = floatingPoint * Boolean; 
    cout << "The multiplied value of your float and bool is: " << Multiplied << endl;

    DividedOne = floatingPoint / integerNum;
    cout << "The divded value of your float and int is: " << DividedOne << endl;

    DividedTwo = integerNum / floatingPoint;
    cout << "The divded value of your int and float is: " << DividedTwo << endl;

    return 0;
}

