#include <iostream>
#include <math.h>
using namespace std;
double ans, n = 1 , k;
int main()
{

    while (n>=1)
	{
		k = pow(-1, n + 1) * (1 / n);
		if (abs(k) < 0.0001)
			break;
		ans = ans + k; 
		n++;
	}
	cout << ans;
}