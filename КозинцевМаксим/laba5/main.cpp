#include <iostream>

using namespace std;

int main() {
	int n, i, j, amount, proizved = 1, summ = 0;
	double average;
	bool t;

	printf("Enter array's NxN length: ");
	cin >> n;

	int** arr{ new int*[n] };

	for (i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> arr[i][j];			
		}
	}

	amount = n * n;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if (i == j) {
				proizved *= arr[i][j];
			}
			summ += arr[i][j];
		}
	}
	cout << '\n';

	average = summ / amount;

	cout << "Average = " << average << " and Proizvedenie = " << proizved << '\n';

	if (average > proizved) {t = true;}
	else {t = false;}

	cout << t;

	for (i = 0; i < n; i++) {   // Освобождение памяти
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
	return 0;
}
