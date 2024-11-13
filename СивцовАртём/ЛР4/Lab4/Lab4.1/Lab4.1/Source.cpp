//Дан двумерный массив вещественных чисел размерностью n*m. В каждом столбце найти максимальный элемент, а среди них – минимальный.
#include <iostream>
using namespace std;
int main() {
	setlocale (LC_ALL, "Russian");
	const int n = 5, m = 5;
	int a[n][m];
	int max = 0;
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
		
	}
	int b[5];
	for (int j = 0; j < n; j++)
	{
		max = a[0][j];
		for (int i = 1; i < n; i++)
		{
			if (a[i][j] > max) {
				max = a[i][j];

			}
		}
		b[j] = max; 
	}
	
	min = b[0];
	for (int i = 1; i < 5; i++) {
		if (b[i] < min)
			min = b[i];
	}
	cout << min;
	return 0;
}

