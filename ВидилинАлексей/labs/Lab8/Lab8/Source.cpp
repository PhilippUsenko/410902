#include <iostream>
#include <string>

using namespace std;

int carNumberCalculator();
int main() {
	cout << "Count of cars: " << carNumberCalculator() << endl;

	system("pause>null");
	return 0;
}

int carNumberCalculator() {
	int n;
	cout << "Enter car count: " << endl;
	cin >> n;
	int carCount = 0;
	int* carNumbers{ new int[n] };

	cout << "Enter car numbers: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> carNumbers[i];
	}

	int thnd, hndr, ten, one;

	for (int i = 0; i < n; i++) {

		thnd = (carNumbers[i] / 1000) % 10;
		cout << thnd << endl;
		hndr = (carNumbers[i] / 100) % 10;
		cout << hndr << endl;
		ten = (carNumbers[i] / 10) % 10;
		cout << ten << endl;
		one = carNumbers[i] % 10;
		cout << one << endl;

		int nums[4]{ thnd, hndr, ten, one };

		int counter = 0;

		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if (nums[j] == nums[k]) {
					counter++;
					cout << "kshjf" << counter << endl;
				}
			}
		}
		if (counter == 6) {
			carCount += 1;
		}
	}
	return carCount;
}