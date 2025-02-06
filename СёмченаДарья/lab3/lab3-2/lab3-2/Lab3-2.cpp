#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n=1;
	float a=0, b=1;
	while ((abs(a-b))>0.01)
	{
		b = a;
		a = a + sin(1.57 + 3.14 * n) / (n *n *n + 1);
		n = n + 1;
	}
	cout << "Rezultat vichislenia: " << a<< endl;
	return 0;
}