#include <iostream>
using namespace std;
int main ()
{
	float array[5][5]{};	
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j++)
			cin >> array[i][j];
	}                                 
	float count = 0;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j += 2)
		{
			count += array[i][j];
		}
	}
	cout << count;
	return 0;
}