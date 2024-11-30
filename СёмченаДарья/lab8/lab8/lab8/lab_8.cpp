//ƒанное натуральное число N переведите из дес€тичной системы счислени€ в двоичную. 
// ¬строенный метод перевода не использовать.
#include<iostream>
using namespace std;

int per10to2(int n)
{
	int dl = 1;
	int* a = new int[dl];
	int i = 0, j, l, k;
	while (n != 1)
	{
		dl = dl + 1;
		int* new_a = new int[dl];
		for (k = 0; k < dl - 1; k++)
			new_a[k] = a[k];
		a = new_a;
		l = n % 2;
		a[i] = l;
		n = n / 2;
		i = i + 1;
	}
	a[i] = 1;
	j = i;
	for (i = j; i >= 0; i--)
		cout << a[i];
	delete[]a;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int m, n;
	cout << "¬ведите число в дес€тичной системе: ";
	cin >> n;
	cout << "¬ двоичной системе это ";
	m = per10to2(n);
	return 0;
}