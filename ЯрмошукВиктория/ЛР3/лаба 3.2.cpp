#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  n;
	double s;
	int i = 1;
	s = 0;
    cin >> n;
	while (i<=n)
	{s += pow((-1), i)/(3*i*i);
		i++;
	}
	s = round(s * 10000)/ 10000;
	cout << s;
	system("pause>nul");
		return 0;
}

