#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int rows, cols, i, j;
	cout << "enter rows, cols: ";
	cin >> rows >> cols;

	int**array = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];

		for (j = 0; j < cols; j++)
		{
			cin >> array[i][j];
		}
	}

	int max = array[0][0];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (max < array[i][j])
			{
				max = array[i][j];
			}
		}
	}
	cout << "max number: " << max << endl;

	int min = array[0][0];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
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
	delete []array;

	return 0;
}