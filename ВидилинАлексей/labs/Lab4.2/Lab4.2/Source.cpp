#include <iostream>

using namespace std;

int main() {
	int rows, columns;
	int result = 0;
	int arr[10][10];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
			result += arr[i][j];
		}
	}
	cout << result / 9 << endl;
	system("pause>nul");
	return 0;
}