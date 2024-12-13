#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double sum=0, n = 0, k;
	while (True)
	{
		k = pow(-1, n) * (1 / (3 * n + 1));
		if ( abs(k)< 0.01 )
		{
			break;
		}
		sum += k;
		n++;
	}
	cout << sum;
	return 0;
}