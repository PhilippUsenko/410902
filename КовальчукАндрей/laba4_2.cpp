#include <iostream>
#include <cmath>
using namespace std;
int main(){
	srand(time(0));

	int sum = 0; 

	int arr[5][5]{};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 201 - 100;
		}
	}
	cout << "Matrix: " << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl; 
	}
	cout << endl;
		for (int i = 0; i < 5; i++) {
			if (i % 2 == 1) {
				for (int j = 0; j < 5; j++) {
					sum += arr[i][j];
				}
				cout << "Summa: " << sum << endl;
				sum = 0;
			}
		}
	return 0;
}