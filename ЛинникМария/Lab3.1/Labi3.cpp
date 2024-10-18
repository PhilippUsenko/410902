#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	double sum=0;
	cout << "Enter n > 0" << endl;
	cin >> n;
	for (double i = 2; i < (n+2); i++)
	{
		sum = i /( i - 1) + sum;
		//cout << sum << endl;
	}
	cout << sum;
	return 0;
}