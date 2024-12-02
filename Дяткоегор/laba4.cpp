#include <iostream>
#include <cstdlib>
using namespace std;

void first_part_laba4();
void second_part_laba4();

int main() {
	srand(time(0));
	int n;
	cout << "wich part you would like to see?:  "; cin >> n;
	if (n == 1) {
		first_part_laba4();
	}
	else if (n == 2) {
		second_part_laba4();
	}
	else {
		cout << "You can`t play outside the rules!!!!";
	}
	system("pause");
	return 0;
}

void first_part_laba4() {
	int summ = 0, minindex = 0;
	int array[10];
	cout << endl;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 201 + (-100);
		cout << array[i] << " ";
	}
	cout << "\n";
	for (int i = 1; i < 10; i++) {
		if (fabs(array[minindex]) > fabs(array[i])) {
			minindex = i;
		}
	}
	for (int i = 0; i < minindex; i++) {
		summ += array[i];
	}
	cout << "resault: " << summ << '\n';
}

void second_part_laba4() {
	double array[10][10];
	int minindexi = 0, minindexj = 0, minnum;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array[i][j] = rand() % 201 + (-100);
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (fabs(array[minindexi][minindexj]) > fabs(array[i][j])) {
				minindexi = i; minindexj = j;
			}
		}
	}
	minnum = array[minindexi][minindexj];
	if (minnum == 0) {
		cout <<'\n' << "minimum number is 0, answer is error!!";
	}
	else {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				array[i][j] /= minnum;
				cout << array[i][j] << " ";
			}
			cout << "\n";
		}
	}
	cout << '\n' << minnum << endl;
}