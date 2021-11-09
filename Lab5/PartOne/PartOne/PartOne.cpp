#include <iostream>
#include <cmath>

using namespace std;

float GP(int startingTerm, float commonRatio, int* secondTerm, int* thirdTerm)
{	
	float nthTerm = 0;
	nthTerm = startingTerm * pow(commonRatio, (*secondTerm - 1));
	*secondTerm = nthTerm;
	cout << "The 2nd term of the series is: " << *secondTerm << endl;

	nthTerm = startingTerm * pow(commonRatio, (*thirdTerm - 1));
	*thirdTerm = nthTerm;
	cout << "The 3rd term of the series is: " << *thirdTerm << endl;

	return 0;
}

int main()
{
	float callFunction; // Assign values
	int startingTerm = 0; 
	float commonRatio = 0;
	
	cout << "Please enter the starting term: " << endl;
	cin >> startingTerm;

	cout << "Please enter the common ratio: " << endl;
	cin >> commonRatio;
	
	int a = 2; // 2nd term 
	int* secondTerm = &a; // Pointers 

	int b = 3; // 3rd term
	int* thirdTerm = &b;

	callFunction = GP(startingTerm, commonRatio, secondTerm, thirdTerm);
}


