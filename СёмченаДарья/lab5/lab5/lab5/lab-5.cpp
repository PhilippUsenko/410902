#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, k=0;
	float c;
	float** a{ new float*[5] {} };

	for (i=0; i < 5; i++)
		a[i] = new float [5] {};

	for (i=0; i < 5; i++)
	{
		cout << "Введите числа из ряда " << i+1 << endl;
		for (j=0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "Введите C: ";
	cin >> c;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] == c)
			{
				a[i][j] = 0;
				k = k + 1;
			}
		}
	}

	if (k == 0) cout << "Числа С в массиве нет.";
	else
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
	}

	for (i=0; i < 5; i++)
	{
		delete[] a[i];
	}
	delete[] a; 

	return 0;
}

