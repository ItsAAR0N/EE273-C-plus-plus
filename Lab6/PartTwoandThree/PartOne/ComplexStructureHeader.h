#ifndef ComplexStructureHeader_H
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;

struct Complex
{
	int realOne;
	int imagOne;
	string complexPart;
	float magnitudeOutput;
	float argumentOutput;
	bool equalOrNot;
};

float magnitudeOfComplex(int realOne, int imagOne) {
	float magnitude;
	magnitude = sqrt((pow(realOne, 2)) + (pow(imagOne, 2)));
		return magnitude;
}

float argumentOfComplex(int realOne, int imagOne) {
	while (realOne > 0) { // Avoid DivByZero Error
		float argument;
		argument = ((atan(imagOne / realOne)) * (180 / PI));
		return argument;
	} 
	int argument = 0; // else argument = 0
	return argument;
}

bool equalOrNot(int realOne, int imagOne) {
	
	if (realOne == imagOne) {
		return true;
	}
	else return false;
}

#endif