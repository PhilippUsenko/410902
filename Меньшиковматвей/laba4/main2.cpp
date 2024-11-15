#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int n, m, minElement, maxElement, arr[100][100], i, j;
	double average;

	cout << "Enter the value of rows: ";
	cin >> n;
	cout << "Enter the value of columns: ";
	cin >> m;

	if (n <= 100 && m <= 100) {
		
		cout << "Enter elements of array: " << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}

		minElement = abs(arr[0][0]);
		maxElement = abs(arr[0][0]);

		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (abs(arr[i][j]) < minElement) {
					minElement = abs(arr[i][j]);
				}
				if (abs(arr[i][j]) > maxElement) {
					maxElement = abs(arr[i][j]);
				}
			}
		}

		average = (maxElement + minElement) / 2.0;
		cout << "(Max element " << maxElement << " + Min element " << minElement << ") / 2 = " << average;
	}
	else {
		cout << "Enter numbers <= 100";
	}

return 0;
}
