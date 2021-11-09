#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float GP(int startingTerm, float commonRatio, float* aTerm, int maxTerm)
{	
	int i;
	for (i=1; i < maxTerm; i++) {		
		float nthTerm = 0;
		nthTerm = startingTerm * pow(commonRatio, (i - 1));		
		*aTerm = nthTerm;
		cout << "Term " << i << " of the sequence is: " << *aTerm << endl;


		// For debugging purposes
		
	}	
	
	return 0;
}

int main()
{
	float callFunction; // Assign values
	int startingTerm = 0;
	float commonRatio = 0;
	int maxTerm = 0;

	cout << "Please enter the starting term: " << endl;
	cin >> startingTerm;

	cout << "Please enter the common ratio: " << endl;
	cin >> commonRatio;

	cout << "Please enter how many N terms: " << endl;
	cin >> maxTerm;
	float* aTerm = new float[maxTerm];

	callFunction = GP(startingTerm, commonRatio, aTerm, maxTerm);
}


