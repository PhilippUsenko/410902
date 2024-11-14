#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int C[10], A[5], B[5];
	for (int i = 0; i <= 9; i++)
	{
		cin >> C[i];
	}// ввод элементов массива
	cout << endl;
	for (int i = 0; i <= 9; i++)
	{
		if (i % 2 == 0) A[i / 2] = C[i];
	
		else  B[i / 2] = C[i];
	}
	cout << endl << "Ёлементы с чЄтными индексами: ";
	for (int i = 0; i <= 4; i++) cout << " " << A[i];
	cout << endl << "Ёлементы с нечЄтными индексами: ";
	for (int i = 0; i <= 4; i++) cout << " " << B[i];
	cout << endl;






	system("pause");
	return 0;
}