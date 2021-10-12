#include <iostream>
using namespace std;

// A prime number is one which is only divisible by itself and one. 0 and 1 are not primes either


bool checkPrime(int count) { // Assign as boolean function, only ever expecting 0 or 1 output.
	if (count == 0 || count == 1) { // Check if count is either 0 or 1 -- return FALSE
		return 0;
	}
	int i;
	for (int i = 2; i <= count / 2; i++) { // Start increment from 2 as 0,1 already excluded
		// Condition for the above loop to exit is count/2 since there are no factors for count beyond count/2
		if (count % i == 0) { // Increments count as to check for any divisible "i" positive integers -- return FALSE
			return 0;
		}
	}
	return 1; // If it is neither of the two loops then it must be a prime -- return TRUE
}

int primeCounter(int X) {
	int No_ofPrimes = 0;
	for (int count = 0; count <= X; count++) { // Start normal increment
		if (checkPrime(count) == true) { // If the output is 1 (tied to line 15) then number of primes get added by 1
			No_ofPrimes +=1;
		}
	}
	return No_ofPrimes;
}

int main() {
	int X;
	cout << "Please enter the upper limit: ";
	cin >> X;
	int Output;
	Output = primeCounter(X); // Call function
	cout << "The total number of primes are: " << Output << endl;
	return 0; // Not expecting any return from main()
}


