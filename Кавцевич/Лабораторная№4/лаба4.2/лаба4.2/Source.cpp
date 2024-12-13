#include <iostream>
using namespace std;
int main()
{
	int a[5][5]{} , k;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];

		}
	}
	 k = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] < 0)
			{
				k++;
				break;
			}

		}
	}
	cout << k;
	return 0;
}

