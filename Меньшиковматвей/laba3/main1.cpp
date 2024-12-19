#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int n;
	float sum, i;

	cout << "Enter the value of 'n': " << endl;
	cin >> n;

	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += pow(-1, i + 1) * 1 / i;
	}
	cout << "Sum is " << sum;

	return 0;
}
