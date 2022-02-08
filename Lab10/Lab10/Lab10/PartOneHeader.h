#ifndef PartOneHeader_H
#include <string>
#include <iostream>
#include <math.h>

#define PI 3.14159265358979323846
using namespace std;

class Complex {
private:
	double re, im;
public:

	Complex() { // Constructor
		re = 0;
		im = 0;
	}

	Complex(double r, double i) { re = r; im = i; } // Setter
	double getReal() { return re; }
	double getImag() { return im; }

	// Display the sign of complex number
	string displayComplex(Complex b)
	{
		string sign1, sign2;
		if (this->getImag() < 0) { // Detect for +ve or -ve sign
			return sign1 = "-j";
		}
		else return sign2 = "+j";
		if (b.getImag() < 0) {
			return sign2 = "-j";
		}
		else return sign2 = "+j";
	}

	void OhmsLaw() {
		double vs, phase; // Define variables
		double res, imp;
		double re1, im1, re2, im2;
		Complex c(0, 0);

		cout << "Please enter the voltage source magnitude and phase: " << endl;
		cin >> vs >> phase;
		re1 = (vs * cos(phase * (PI / 180))); // Conversion to rect. then assignment (first)
		im1 = (vs * sin(phase * (PI / 180)));
		cout << "Please enter the circuit resistance and impedance: " << endl; // (second)
		cin >> res >> imp;
		re2 = res;
		im2 = imp;

		Complex a = Complex(re1, im1);
		Complex b = Complex(re2, im2);
		c = a / b;
		cout << c.getReal() << c.displayComplex(c) << abs(c.getImag()) << " Amperes \n" << endl;
	}

	Complex operator+ (Complex b) // Addition
	{
		Complex d(0, 0); // Constructor define initial para.
		d.re = this->getReal() + b.getReal(); // (this->) is equivalent to a.getReal() etc. "first object"
		d.im = this->getImag() + b.getImag();
		return d;
	}

	Complex operator- (Complex b) // Subtraction
	{
		Complex d(0, 0); // Constructor define initial para.
		d.re = this->getReal() - b.getReal();
		d.im = this->getImag() - b.getImag();
		return d;
	}

	Complex operator* (Complex b) // Multiplication
	{
		Complex d(0, 0); // Constructor define initial para.
		d.re = (this->getReal() * b.getReal()) - (this->getImag() * b.getImag());
		d.im = (this->getReal() * b.getImag()) + (this->getImag() * b.getReal());
		return d;
	}

	Complex operator/ (Complex b) // Division
	{
		Complex d(0, 0); // Constructor define initial para.
		d.re = ((this->getReal() * b.getReal()) + (this->getImag() * b.getImag())) / (pow(b.getReal(), 2) + pow(b.getImag(), 2));
		d.im = ((this->getImag() * b.getReal()) - (this->getReal() * b.getImag())) / (pow(b.getReal(), 2) + pow(b.getImag(), 2));
		return d;
	}

	// Deconstructor - delete class attributes
	virtual ~Complex() {}

};



#endif
