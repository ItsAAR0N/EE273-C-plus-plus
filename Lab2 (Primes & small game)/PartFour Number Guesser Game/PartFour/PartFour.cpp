#include <iostream>
using namespace std;
// Write a program to play a "20 questions" game to identify a number thought of by the program's users.

int NoGuesser(int number) {
	int count = 0;
	string isCorrect;
	int i = 0;
	int newRange = 0;
	int maxAttempts = 0;
	int upperLimitOne = 0;
	int upperLimitTwo = 0;
	do {
		for (i = 0; i < 100; i = i + 10) {
			cout << "Is your number within the range: " << i << "-" << (i + 10) << endl;
			maxAttempts += 1; // Add one attempt each time
			cin >> isCorrect;
			if (isCorrect == "yes") {
				//cout << i;
				//cout << "Is your number odd or even?" << endl;			
				cout << "The range is between: " << i << "-" << (i + 10) << endl;
				cout << "Is your number less than (yes) " << (i + 5) << ", or greater than? (no)" << endl;
				maxAttempts += 1;
				cin >> isCorrect;

				if (isCorrect == "yes") {
					upperLimitOne = i + 5; // Assign static variable (value never changes from now on) -- assign upper limit for iteration loop
					for (i; i < upperLimitOne; i++) { // Increment starting from n, where n are +ve multiples of 10 e.g 50-55
						cout << "Is your number now: " << i << endl;
						maxAttempts += 1;
						cin >> isCorrect;
						if (isCorrect == "yes") {
							break;
						}
						else continue;
					}
				}
				else
					upperLimitTwo = i + 5; // Assign static variable (value never changes from now on) -- assign upper limit for iteration loop
				for (i + 5; i < upperLimitTwo; i++) { // Increment starting from n+5, where n are +ve multiples of 10 e.g 55-60

					cout << "Is your number: " << i + 5 << endl;
					maxAttempts += 1;
					cin >> isCorrect;
					if (isCorrect == "yes") {
						break;
					}
					else continue;
				}
				break;
			}
			else continue;
			return 0; 
		}
		cout << "The number of attempts is: " << maxAttempts << endl;
		return 0; // Never expecting number to not be within range 0-100, return nothing
	} while (maxAttempts < 20); // Program stops if no. of attempts = 20
	return 0;
}

int main() {
	int number;
	number = 0;
	int Output;

	cout << "Please enter a number (0-100): ";
	cin >> number;

	Output = NoGuesser(number); // Call function, pass argument (number) into function
	
}