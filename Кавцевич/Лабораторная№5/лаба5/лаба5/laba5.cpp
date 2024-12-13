#include <iostream>
using namespace std;
int main()
{
	int stroka, stolb;
	cin >> stroka >> stolb;
	int** arr = new int* [stroka];
	for (int i = 0; i < stroka; i++)
	{
		arr[i]=new int[stolb];
		{
			for (int j = 0; j < stolb; j++)
			{
				cin >> arr[i][j];

			}
		}
	}
	int k = 0;
	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			if (arr[i][j] < 0)
			{
				k++;
				break;
			}
		}
	}
	cout << k;
	return 0;
}

