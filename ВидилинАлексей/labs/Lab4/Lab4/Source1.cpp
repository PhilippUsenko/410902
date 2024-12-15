#include <iostream>

using namespace std;

int main() {
	int rows, columns;
	cin >> rows >> columns;
	int result = 1;
	int arr[100][100];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> arr[i][j];
			result *= arr[i][j];
		}
	}
	cout << result << endl;
	return 0;
}