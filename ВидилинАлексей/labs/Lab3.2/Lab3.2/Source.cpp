#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n = 0;
	float a, b;

	while (true) {
		a = 1. / (n * (2. * n - 1.));
		b = pow((-1), n);
		printf("%0.3f \n", b * a);
		n++;
	}
	system("pause>null");
	return 0;
}