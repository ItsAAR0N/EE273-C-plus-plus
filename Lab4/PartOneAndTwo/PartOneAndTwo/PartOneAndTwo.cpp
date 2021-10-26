#include <iostream>
#include <fstream>
#include <string>
#define SIZE1 5 //Declare size of array globally
#define SIZE2 5 
using namespace std;

int main()
{

	string fileNameOne;
	string fileNameTwo;
	string matrixElement;

	int myMatrixA[SIZE1][SIZE2];
	int myMatrixB[SIZE1][SIZE2];

	//int myMatrixA[SIZE1][SIZE2] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} }; // No. of rows = 5, No. of columns = 5
	//int myMatrixB[SIZE1][SIZE2] = { {25,24,23,22,21},{20,19,18,17,16},{15,14,13,12,11},{10,9,8,7,6},{5,4,3,2,1} };

	cout << "Please enter the first input file name: " << endl;
	cin >> fileNameOne;

	cout << "Please enter the second input file name: " << endl;
	cin >> fileNameTwo;

	ifstream currentFileOneInput; // Declare input file var
	currentFileOneInput.open(fileNameOne.c_str()); //Open file

	ifstream currentFileTwoInput;
	currentFileTwoInput.open(fileNameTwo.c_str());

	while (!currentFileOneInput.eof() && !currentFileTwoInput.eof()) {
		for (int i = 0; i < 5; i++) { // New line after 5 digits
			for (int j = 0; j < 5; j++) {
				getline(currentFileOneInput, matrixElement, ','); // Remove commas, separate values...
				myMatrixA[i][j] = stoi(matrixElement); // stoi converts to integer then assigns it to each element of 2d array going through (i rows) and (j columns) respectively

				getline(currentFileTwoInput, matrixElement, ','); // Do it for secondary matrix too
				myMatrixB[i][j] = stoi(matrixElement);
			}
		}
	}

	// FOR DEBUGGING PURPOSES
	cout << "My Matrix A: " << endl;
	for (int i = 0; i < 5; i++) { // Interates up to n rows 
		for (int j = 0; j < 5; j++) { // Interates up to n columns
			cout << myMatrixA[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	cout << "My Matrix B: " << endl;
	for (int i = 0; i < 5; i++) { // Show rows 
		for (int j = 0; j < 5; j++) { // Show columns
			cout << myMatrixB[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	cout << "Matrix multiplication: " << endl;
	for (int i = 0; i < 5; i++) { // Interates up to n number of rows in matrix A (resulting matrix will be 5 x 5) 
		for (int j = 0; j < 5; j++) { // Interates up to n number of columns in matrix B
			int sum = 0; // Define sum initially
			for (int k = 0; k < 5; k++) { // Iterates up to n number of columns in matrix A
				
				sum = sum + myMatrixA[i][k] * myMatrixB[k][j];

				/* Example test run manually by hand:
				sum = sum + myMatrixA[i][k] * myMatrixB[k][j];
				sum = 0 + myMatrixA[0][0] * myMatrixB[0][0] // Grab 1st element of myMatrixA (1) & myMatrix(B) (25)
				sum = 0 + 1 * 25 = 25
				etc... Repeat for myMatrixA[0][1] * myMatrixB[1][0]...myMatrixA[0][5] * myMatrixB[5][0] for sum
				*/
			}
			cout << sum << "\t"; // Sum each element then display in 3rd matrix
		}
		cout << endl; // On to new row
	}

	currentFileOneInput.close();
	currentFileTwoInput.close();
}