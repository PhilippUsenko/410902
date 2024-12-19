#include <iostream>

using namespace std;

int main() {

	int rows, columns, minElement, maxElement, i, j;
	double average;

	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> columns;

	int** ptrarray = new int* [rows];

	for (i = 0; i < rows; i++) {
		ptrarray[i] = new int[columns];
	}

		cout << "Enter elements of array: " << endl;
		for (i = 0; i < rows; i++) {
			for (j = 0; j < columns; j++) {
				cin >> ptrarray[i][j];
			}
		}

		minElement = abs(ptrarray[0][0]);
		maxElement = abs(ptrarray[0][0]);

		for (i = 0; i < rows; i++) {
			for (j = 0; j < columns; j++) {
				if (abs(ptrarray[i][j]) < minElement) {
					minElement = abs(ptrarray[i][j]);
				}
				if (abs(ptrarray[i][j]) > maxElement) {
					maxElement = abs(ptrarray[i][j]);
				}
			}
		}
	average = (maxElement + minElement) / 2.0;

	cout << "The average is " << average;

	for (i = 0; i < rows; i++) {
		delete[] ptrarray[i];
	}
	delete[] ptrarray;

	return 0;
}
