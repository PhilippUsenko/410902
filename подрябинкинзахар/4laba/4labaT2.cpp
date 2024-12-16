#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A[5][5] = { {1,0,3,4,0},{1,2,3,4,0},{1,2,0,4,0},{1,0,0,4,0},{1,2,0,4,0} };
	for (int m = 0; m <= 4; m++) // вывод самого массива
	{
		for (int n =0; n <=4; n++)
		{
			cout << A[m][n] <<" ";
		}
		cout << endl;
	}
	for (int m = 0; m <= 4; m++)
	{
		for (int n = 0; n <= 4; n++)
		{
			if ((n + m >= 5) and A[m][n] == 0) A[m][n] = 9;
		}
	}

	cout << endl;
	for (int m = 0; m <= 4; m++)  // вывод изменённого массива
	{
		for (int n = 0; n <= 4; n++)
		{
			cout << A[m][n] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}