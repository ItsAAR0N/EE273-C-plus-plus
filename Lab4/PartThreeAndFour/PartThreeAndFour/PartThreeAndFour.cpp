#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{	// Declare variables initially
	string fileNameOne;
	string fileNameTwo;	
	string fileNameThree;
	string matrixElement;
	int firstRow, firstCol, secondRow, secondCol;
	int** myMatrixA = NULL; //2d pointers
	int** myMatrixB = NULL;

	//int myMatrixA[SIZE1][SIZE2] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} }; // No. of rows = 5, No. of columns = 5
	//int myMatrixB[SIZE1][SIZE2] = { {25,24,23,22,21},{20,19,18,17,16},{15,14,13,12,11},{10,9,8,7,6},{5,4,3,2,1} };

	// Request number of rows and columns for each matrix
	cout << "Please enter the number of Rows and columns in the first matrix: ";
	cin >> firstRow; 
	cin >> firstCol;

	cout << "Please enter the number of Rows and columns in the second matrix: ";
	cin >> secondRow;
	cin >> secondCol;

	// If they are NOT compatible
	if (firstCol != secondRow) {
		cout << "Error, incompatible matrices. (first col =/= second row). Restart.";
		exit(1); // Terminate program as impossible matrices...
	}
	else;
	

	// Dynamic Memory Allocation
	int firstnrows = firstRow, firstncols = firstCol;
	myMatrixA = new int* [firstnrows];
	for (int row = 0; row < firstnrows; row++) {
		myMatrixA[row] = new int[firstncols];
	}
	
	int secondnrows = secondRow, secondncols = secondCol;
	myMatrixB = new int* [secondnrows];
	for (int row = 0; row < secondnrows; row++) {
		myMatrixB[row] = new int[secondncols];
	}

	//Request file names
	cout << "Please enter the first input file name: " << endl;
	cin >> fileNameOne;

	cout << "Please enter the second input file name: " << endl;
	cin >> fileNameTwo;

	cout << "Please enter the output file name: " << endl;
	cin >> fileNameThree;

	// Open files for input/output
	ifstream currentFileOneInput; // Declare input file var
	currentFileOneInput.open(fileNameOne.c_str()); //Open file

	ifstream currentFileTwoInput;
	currentFileTwoInput.open(fileNameTwo.c_str());

	ofstream currentFileThreeOutput; // Declare output file var
	currentFileThreeOutput.open(fileNameThree); //Create/open output file

	// Convert file matrix to 2d arrays
	while (!currentFileOneInput.eof() && !currentFileTwoInput.eof()) {
		for (int i = 0; i < firstRow; i++) { // New line after 5 digits
			for (int j = 0; j < firstCol; j++) {
				getline(currentFileOneInput, matrixElement, ','); // Remove commas, separate values...
				myMatrixA[i][j] = stoi(matrixElement); // stoi converts to integer then assigns it to each element of 2d array going through (i rows) and (j columns) respectively

				getline(currentFileTwoInput, matrixElement, ','); // Do it for secondary matrix too
				myMatrixB[i][j] = stoi(matrixElement);
			}
		}
	}

	// Display Matrix A
	cout << "My Matrix A: " << endl;
	for (int i = 0; i < firstRow; i++) { // Interates up to n rows 
		for (int j = 0; j < firstCol; j++) { // Interates up to n columns
			cout << myMatrixA[i][j] << "\t";
		}
		cout << endl;
	}

	// Display Matrix B
	cout << endl;
	cout << "My Matrix B: " << endl;
	for (int i = 0; i < secondRow; i++) { // Show rows 
		for (int j = 0; j < secondCol; j++) { // Show columns
			cout << myMatrixB[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// Multiply matrices
	cout << "Matrix multiplication: " << endl;
	for (int i = 0; i < firstRow; i++) { // Interates up to n number of rows in matrix A (resulting matrix will be 5 x 5) 
		for (int j = 0; j < secondCol; j++) { // Interates up to n number of columns in matrix B
			int sum = 0; // Define sum initially
			for (int k = 0; k < firstCol; k++) { // Iterates up to n number of columns in matrix A 

				sum = sum + myMatrixA[i][k] * myMatrixB[k][j];

				/* Example test run manually by hand:
				sum = sum + myMatrixA[i][k] * myMatrixB[k][j];
				sum = 0 + myMatrixA[0][0] * myMatrixB[0][0] // Grab 1st element of myMatrixA (1) & myMatrix(B) (25)
				sum = 0 + 1 * 25 = 25
				etc... Repeat for myMatrixA[0][1] * myMatrixB[1][0]...myMatrixA[0][5] * myMatrixB[5][0] for sum
				*/
				
			}
			cout << sum << "\t"; // Display in 3rd matrix
			currentFileThreeOutput << sum << "\t";
		}
		cout << endl; // On to new row
		currentFileThreeOutput << endl;
		
	}
	

	//Deallocate arrays
	for (int row = 0; row < firstnrows; row++) {
		delete [] myMatrixA[row];
	}

	for (int row = 0; row < secondnrows; row++) {
		delete [] myMatrixB[row];
	}

	//Close files
	currentFileOneInput.close();
	currentFileTwoInput.close();
	currentFileThreeOutput.close();
	return 0;
}