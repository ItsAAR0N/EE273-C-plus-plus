#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cout << "The size of the values are: " << sizeof(a) << "\n";
	cout << "Enter number: ";
	cin >> a;
	cout << "Enter number: ";
	cin >> b;

	c = a + b;
	cout << "C is " << c << endl;
	return 0;
}