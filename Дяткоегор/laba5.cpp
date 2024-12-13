#include <iostream>
#include <math.h>
using namespace std;

int main() {
	srand(time(0));
	int rows, columns, mini=0,minj=0,min;
	cout << "input number of rows: ";
	cin >> rows;
	cout << "input number of columns: ";
	cin >> columns;
	cout << "\n";
	double **mass = new double*[rows]();
	for (unsigned i = 0; i < rows; i++) {
		mass[i] = new double[columns];
	}
	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = 0; j < columns; j++) {
			mass[i][j] = rand() % 201 - 100;
			cout << mass[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
	for (unsigned i = 1; i < rows; i++) {
		for (unsigned j = 1; j < columns; j++) {
			if (fabs(mass[mini][minj]) > fabs(mass[i][j])) {
				mini = i; minj = j;
			}
		}
	}
	min = mass[mini][minj];
	cout << min << "\n"<<"\n";
	if (min != 0) {
		for (unsigned i = 0; i < rows; i++) {
			for (unsigned j = 0; j < columns; j++) {
				mass[i][j] /= min;
				cout << mass[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	else {
		cout << "sorry but minimum number in this array is 0, we cannot devide by 0" << endl;
	}
	for (unsigned i{}; i < rows; i++) {
		delete[]mass[i];
	}
	delete[]mass;
	system("pause");
	return 0;
}