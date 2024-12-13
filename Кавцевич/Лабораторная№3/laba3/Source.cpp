#include <iostream>
using namespace std;
int main()
{
	int i, first, third;
	for (i = 100; i <= 999; i++)
	{
		first = i / 100;
		third = i % 10;
		if (first == third)

		{
			cout << i << "\n";
		}
	}
	return 0;
}