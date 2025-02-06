#include <iostream>
using namespace std;
int main()
{
	int i;
	float n=0, a;
	for (i = 1; i <= 99; i=i+2)
	{
		a = pow(i, 2);
		n = n + 1 / a;
	}
	cout <<"Rezultat vichislenia: " <<n << endl;
	return 0;
}