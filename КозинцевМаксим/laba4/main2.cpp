#include <iostream>

using namespace std;

int main() {
	bool t;
	long int n, i, j;
	float average, summ, amount, proizved, arr[10][10];
	summ = 0;
	amount = 0;
	proizved = 1;
	
	cout << "Enter n for matrix nxn (0 < n <= 10): ";
	cin >> n;
	if (0 < n && n <= 10) {
		cout << "Enter matrix elements: \n";
		for (i = 0; i < n; i++) {	//Заполнение матрицы
			for (j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		cout << endl;
		amount = n * n;		//Количество элементов
		for (int i = 0; i < n; i++) {		//Подсчёт суммы элементов матрицы 
			for (int j = 0; j < n; j++) {	//Подсчёт произведения элементов главной диагонали
				if (i == j) {
					proizved *= arr[i][j];
				}
				summ += arr[i][j];
			}
		}

		average = summ / amount;

		cout << "Proizvedenie = " << proizved << " and Average = " << average << '\n';

		if (average > proizved) {t = true;}
		else {t = false;}
		cout << "t = " << t;
	}
	else {cout << "Entered wrong length";}
	return 0;
}
