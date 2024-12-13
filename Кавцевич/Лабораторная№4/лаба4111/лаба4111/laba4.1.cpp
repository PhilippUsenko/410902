#include <iostream>
using namespace std;
int main()
{
	int arr[10],C, k;
	for (int i = 0; i < 10; i++)
	{
		cin>>arr[i];
	}
	cin>>C;
	k = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < C)
		{
			k++;
		}
	}
	cout << k;
	return 0;
}