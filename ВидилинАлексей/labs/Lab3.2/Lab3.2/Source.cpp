#include <iostream>

using namespace std;

int main() {
	int n = 1;
	float a, b;

	while (true) {
		a = 1 / (n * (2 * n - 1));
		b = (-1) ^ n;
		cout << b * a;
		n++;
	}
	system("pause>null");
	return 0;
}