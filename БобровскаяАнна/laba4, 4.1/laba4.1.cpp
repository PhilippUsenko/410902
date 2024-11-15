#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int array[2][3];
	int i, j;
	for (i = 0; i < 2; i++)
	{ 
		for (j = 0; j < 3; j++)
		{
			cin >> array[i][j];
		}
	}

	int max = array[0][0];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (max < array[i][j])
			{
				max = array[i][j];
			}
		}
	}
	cout << "max number: " << max << endl;

	int min = array[0][0];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (min > array[i][j])
			{
				min = array[i][j];
			}
		}
	}
	cout << "min number: " << min << endl;

	int result = min * max;
	cout << "max*min: " << result;

  return 0;
}