#include <iostream>
#include <math.h>
double sum, n = 0, k;
using namespace std;
int main()
{
	
	while (true)
	{
		k = pow(-1, n) * (1 / (3 * n + 1));
		if (k < 0.01 and k > 0)
		{
			break;
		}
		if (k > -0.01 and k < 0)
		{
			break;
		}
		sum += k;  //sum= sum+k;
		n++;
	}
	cout << sum;
}