#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	
	int u = 0, i = 0;
	int arr [5][5];

	for (int u = 0; u < 5; u++) {

		for (int i = 0; i < 5; i++) {
			cout << "[" << u + 1 << "." << i + 1 << "]" << ": ";
			cin >> arr[u][i];
		}
		cout << "\n";
	}
	
	
	for (int u = 0; u < 5; u++) {

		for (int i = 0; i < 5; i++) {
			if (i < u)
			arr[u][i] = 0;
		}
		cout << "\n";
	}
	

	for (int u = 0; u < 5; u++) {

		for (int i = 0; i < 5; i++) {
			cout << arr[u][i] << " ";
		}
		cout << "\n";

	}

	return 0;
}
