#include <iostream>
#include<cmath>

using namespace std;
int main() {
	srand(time(0));

	int sum = 0;

	int arr[5]{};
	cout << "Befor: ";
	for (int i{}; i < 5; i++) {
		arr[i] = rand() % 201 - 100;
		sum += arr[i];
		cout << arr[i] << " ";
	}
	cout << endl; 
	cout << "After: ";
	arr[0] = sum;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
  return 0;
}
