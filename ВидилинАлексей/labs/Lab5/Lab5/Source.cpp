#include <iostream>

using namespace std;

int main() {
	int rows, columns;

	cout << "Enter rows and columns count:" << endl;
	cin >> rows >> columns;

	int result = 0;
	int** arr{ new int* [rows] };

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[columns];
	}

	cout << "Enter elements:" << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> arr[i][j];
			result += arr[i][j];
		}
	}

	delete[] arr;
	arr = nullptr;


	cout << "Result: " << result / (rows * columns) << endl;

	system("pause>nul");
	return 0;
}