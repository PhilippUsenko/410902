#include <iostream>
#include <cmath>

using namespace std;
int main() {

	int arr[100], n, minElement, counter;

	cout << "Enter the value of 'n': ";
	cin >> n;

	if (n <= 100) {

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		minElement = abs(arr[0]);

		for (int i = 1; i < n; i++) {
			if (abs(arr[i]) < minElement) {
				minElement = abs(arr[i]);
			}
		}

		counter = 0;

		for (int i = 0; i < n; i++) {
			if (abs(arr[i]) == minElement) {
				counter = counter + 1;
			}
		}
		cout << "Number of min element: " << counter;
	}
	else {
		cout << "Number should be <= 100";
	}
	return 0;
}
