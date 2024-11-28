#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float num1, num2;
	int n = 0;

	while (true) {
		cout << n << endl;
		num1 = pow(-1, n);
		num2 = 1. / (n * (2 * n + 1));
		cout << num1 * num2 << endl;
		n++;
	}
	system("pause>nul");
	return 0;
}