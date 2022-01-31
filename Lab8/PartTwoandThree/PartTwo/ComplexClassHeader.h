#ifndef ComplexClassHeader_H
#include <string>
#include <iostream>
#define PI 3.14159
using namespace std;

class complex
{
private:
	float magnitude;
	float real;
	float imag;
	// Tailored to part 3 ^^
	float phase;
	float realOne;
	float realTwo;
	float imagOne;
	float imagTwo;
	float multiplyrealPart;
	float multiplyimagPart;
	float dividerealPart;
	float divideimagPart;
	string complexPart;
public:
	void displayComplex();
	void argumentOfComplex();
	void magnitudeOfComplex();
	void addComplex();
	void minusComplex();
	void multiplyComplex();
	void divideComplex();
	void convertToComplex();
	void circuitAnalysis();
};

void complex::convertToComplex() {
	cout << "Please enter the magnitude: " << endl;
	cin >> magnitude;
	cout << "Please enter the phase shift: " << endl;
	cin >> phase;

	realOne = (magnitude * cos(phase * PI/180));
	imagOne = (magnitude * sin(phase * PI/180));
	if (imag < 0) {
		complexPart = "-j";
	}
	else complexPart = "+j";
	cout << "Represented in complex form is: " << realOne << complexPart << abs(imagOne) << endl;
}

void complex::displayComplex()
{
	string complexPartOne;
	string complexPartTwo;
	cout << "Please enter the real terms for 1st and 2nd:" << endl;
	cin >> realOne >> realTwo;
	cout << "Please enter the imaginary terms for 1st and 2nd:" << endl;
	cin >> imagOne >> imagTwo;

	if (imagOne < 0) { // Detect for +ve or -ve sign
		complexPartOne = "-j";
	}
	else complexPartOne = "+j";

	if (imagTwo < 0) {
		complexPartTwo = "-j";
	}
	else complexPartTwo = "+j";

	cout << "The 1st complex number you have entered is: " << realOne << complexPartOne << abs(imagOne) << endl << "\n";
	cout << "The 2nd complex number you have entered is: " << realTwo << complexPartTwo << abs(imagTwo) << endl << "\n";
}

void complex::argumentOfComplex() {
	float argumentOne, argumentTwo;
	if (realOne != 0) {
		argumentOne = ((atan(imagOne / realOne)) * (180 / PI));
		cout << "The argument of the 1st complex number is: " << argumentOne << " degrees" << endl;
	}
	else
		cout << "The argument of the 1st complex number is 0 degrees" << endl;
	if (realTwo != 0) {
		argumentTwo = ((atan(imagTwo / realTwo)) * (180 / PI));
		cout << "The argument of the 2nd complex number is: " << argumentTwo << " degrees" << endl;
	}
	else
		cout << "The argument of the 2nd complex number is 0 degrees" << endl;

}

void complex::magnitudeOfComplex() {
	float magnitudeOne, magnitudeTwo;
	magnitudeOne = sqrt((pow(realOne, 2)) + (pow(imagOne, 2)));
	cout << "The magnitude of the 1st complex number is: " << magnitudeOne << endl;
	magnitudeTwo = sqrt((pow(realTwo, 2)) + (pow(imagTwo, 2)));
	cout << "The magnitude of the 2st complex number is: " << magnitudeTwo << endl;
}

void complex::addComplex() {
	if ((imagOne + imagTwo) < 0) {
		complexPart = "-j";
	}
	else complexPart = "+j";
	cout << "The sum of the two complex values are: " << realOne + realTwo << complexPart << abs(imagOne + imagTwo) << endl;
}

void complex::minusComplex() {
	if ((imagOne - imagTwo) < 0) {
		complexPart = "-j";
	}
	else complexPart = "+j";
	cout << "The subtracted sum of the two complex values are: " << realOne - realTwo << complexPart << abs(imagOne - imagTwo) << endl;
}

void complex::multiplyComplex() {
	multiplyrealPart = ((realOne * realTwo) - (imagOne * imagTwo));
	multiplyimagPart = ((realOne * imagTwo) + (imagOne * realTwo));
	if ((multiplyimagPart) < 0) {
		complexPart = "-j";
	}
	else complexPart = "+j";
	cout << "The product of the two complex values are: " << multiplyrealPart << complexPart << abs(multiplyimagPart) << endl;
}

void complex::divideComplex() {
	dividerealPart = ((realOne * realTwo) + (imagOne * imagTwo)) / (pow(realTwo, 2) + pow(imagTwo, 2));
	divideimagPart = ((imagOne * realTwo) - (realOne * imagTwo)) / (pow(realTwo, 2) + pow(imagTwo, 2));
	if ((divideimagPart) < 0) {
		complexPart = "-j";
	}
	else complexPart = "+j";
	cout << "The division of the two complex values are: " << dividerealPart << complexPart << abs(divideimagPart) << endl;
}
// Part 3
void complex::circuitAnalysis() {
	convertToComplex();
	cout << "Please enter the total impedance (real first)" << endl;
	cin >> realTwo >>imagTwo;
	cout << realOne << complexPart << abs(imagOne) << " Volts" << endl;
	divideComplex();
	cout << "The answer is: " << dividerealPart << complexPart << abs(divideimagPart) << " Amps" << endl;
}

#endif