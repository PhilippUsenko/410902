#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double ans = 0.25;
	int i;
	for (i = 1; i <= 52; i++)
	{
		ans = ans * (pow(i, 2) / (pow(i, 2) + 3));
	}
	cout << "Answer: " << ans;
	return 0;
}