#include <string>
#include <iostream>
#include "C:\Users\aaron\Desktop\Lab10\Lab10\PartOneHeader.h"
using namespace std;

int main(void)
{
	// Define variables
	double re1, im1, re2, im2;
	Complex c = Complex(0, 0);

	cout << "Please enter the the first complex number: " << endl;
	cin >> re1, cin >> im1;
	cout << "Please enter the the second complex number: " << endl;
	cin >> re2, cin >> im2;

	Complex a = Complex(re1, im1);
	Complex b = Complex(re2, im2);

	c = a + b;
	cout << "Addtion: " << endl;
	cout << c.getReal() << c.displayComplex(c) << abs(c.getImag()) << "\n" << endl; // abs() used here to display sign properly

	c = a - b;
	cout << "Subtraction: " << endl;
	cout << c.getReal() << c.displayComplex(c) << abs(c.getImag()) << "\n" << endl;

	c = a * b;
	cout << "Multiplication: " << endl;
	cout << c.getReal() << c.displayComplex(c) << abs(c.getImag()) << "\n" << endl;

	c = a / b;
	cout << "Division: " << endl;
	cout << c.getReal() << c.displayComplex(c) << abs(c.getImag()) << "\n" << endl;

	Complex obj;
	obj.OhmsLaw();
	return 0;
}