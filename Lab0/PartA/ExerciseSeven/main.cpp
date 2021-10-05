#include <iostream>
#include "Car.hpp"
using namespace std;

int main ()
{
	cout << "Class Inheritance Demo" << endl;
	cout << "Create New Car" << endl;
	Car c;
	cout << "Set Brand to BMW" << endl;
	c.setBrand("BMW");
	cout << "The brand is set to ";
	cout << c.getBrand() << endl;
	/* code */
	return 0;
}