#include <iostream>

using namespace std;

int main() {
	double arr[100];
	int n, min_index;
	cout << "Enter length of array (0 < n <= 100): ";
	cin >> n;

	if(0 < n && n <= 100){
		for (int i = 0; i < n; i++) { //Заполнение массива
			cin >> arr[i];
		}

		min_index = 0;

		for (int i = 0; i < n; i++) {  // Поиск индекса наименьшего элемента
			if (arr[i] < arr[min_index]) {
				min_index = i;
			}
		}

		cout << "Minimum element's index from array: " << min_index << '\n';

		swap(arr[n - 1], arr[min_index]);

		for (int i = 0; i < n; i++) { //Вывод массива
			cout << arr[i] << " ";
		}
	}
	else {
		cout << "Entered wrong length";
	}
	
	return 0;
}
