#include <iostream>
using namespace std;

// Part 2, question 4
float FunctionOne(float floatingPoint, bool Boolean)
{   
    // Modified this function so that it returns int output instead, question 6a
    int x;
    x = 0;
    x = floatingPoint * Boolean;
    return x;
}

float FunctionTwo(float TestingOne, int TestingTwo) // Modified to suit question 5
{
    return TestingOne / TestingTwo;
}

float FunctionThree(int integerNum, float floatingPoint)
{
    return integerNum / floatingPoint;
}

int main()
{
    int integerNum;
    float floatingPoint;
    bool Boolean;
 
    cout << "Please enter an integer, floating and boolean value:\n";
    cin >> integerNum;
    cin >> floatingPoint;
    cin >> Boolean;

    // Question 5
    // (For example, value types reversed)
    int TestingOne; 
    TestingOne = 143;
    bool TestingTwo;
    TestingTwo = 55.55;

    cout << "Function one output: " << FunctionOne(floatingPoint, Boolean) << endl;
    cout << "Function two output: " << FunctionTwo(floatingPoint, integerNum) << endl;
    cout << "Function three output: " << FunctionThree(integerNum, floatingPoint) << endl;

    return 0;
}

