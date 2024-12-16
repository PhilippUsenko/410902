#include <iostream>
using namespace std;
int main()

{
	int A[5][5] = { {1,0,3,4,0},{1,2,3,4,0},{1,2,0,4,0},{1,0,0,4,0},{1,2,0,4,0} }; // значения в динамический массив, чтобы не вводить
	int str = 5;
	int col = 5;
	int** array = new int * [str];
	for (int i = 0; i < str; i++)
	{
		array[i] = new int[col];
	}

	for (int m = 0; m <= 4; m++) // Запись в динамический массив данных из статического
	{
		for (int n = 0; n <= 4; n++)
		{
			array[m][n] = A[m][n];
		}
		cout << endl;
	}


	for (int m = 0; m <= 4; m++) // вывод самого массива
	{
		for (int n = 0; n <= 4; n++)
		{
			cout << array[m][n] << " ";
		}
		cout << endl;
	}
	for (int m = 0; m <= 4; m++)
	{
		for (int n = 0; n <= 4; n++)
		{
			if ((n + m >= 5) and array[m][n] == 0) array[m][n] = 9;
		}
	}

	cout << endl;
	for (int m = 0; m <= 4; m++)  // вывод изменённого массива
	{
		for (int n = 0; n <= 4; n++)
		{
			cout << array[m][n] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < str; i++) //чистка
	{
		delete array[i];
	}
	delete[] array;
	system("pause");
	return 0;


}