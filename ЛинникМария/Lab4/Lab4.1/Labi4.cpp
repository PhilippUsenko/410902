#include <iostream>
using namespace std;
int main() {
	float array[10];
	cout << "Enter array" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	cout << "Enter M and P" << endl;
	float M, P;
	cin >> M >> P;
	int count = 0;
	if (M <= P)
	{
		for (int i = 0; i < 10; i++)
		{
			if (array[i] >= M && array[i] <= P)
				++count;
		}
	}
	else
		for (int i = 0; i < 10; i++)
		{
			if (array[i] >= P && array[i] <= M)
				++count;
		}
	cout << count;
return 0;
}