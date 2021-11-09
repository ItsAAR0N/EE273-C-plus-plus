#include <iostream>
#include "C:\Users\aaron\Desktop\PartTwoandThree\PartOne\ComplexStructureHeader.h"
// Drag to desktop to get it working

int main(void)
{
	Complex numbers; // Temporary running variable to access Complex structure
	cout << "Please enter the real term:" << endl;
	cin >> numbers.realOne;
	cout << "Please enter the imaginary term:" << endl;
	cin >> numbers.imagOne;
	if (numbers.imagOne < 0) { // Detect for +ve or -ve sign
		numbers.complexPart = "-j";
	}
	else numbers.complexPart = "+j";

	cout << "The complex number you have entered is: " << numbers.realOne << numbers.complexPart << abs(numbers.imagOne) << endl << "\n";

	// Call magnitude function
	numbers.magnitudeOutput = magnitudeOfComplex(numbers.realOne,numbers.imagOne);
	cout << "The magnitude of the complex number is: " << numbers.magnitudeOutput << endl << "\n";

	// Call argument function
	numbers.argumentOutput = argumentOfComplex(numbers.realOne, numbers.imagOne);
	cout << "The argument of the complex number is: " << numbers.argumentOutput << " degrees" << endl << "\n";

	// Call comparison function
	numbers.equalOrNot = equalOrNot(numbers.realOne, numbers.imagOne);
	cout << "Is the real term and imaginary term both equal? (1 - True/ 0 - False): " << numbers.equalOrNot << endl;

	return 0;
}