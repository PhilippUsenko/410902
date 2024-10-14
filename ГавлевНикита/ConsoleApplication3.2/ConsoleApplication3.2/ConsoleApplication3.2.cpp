#include <iostream>

using namespace std;

int main() {
	const float a = 0.001;
	int n;
	n = 1;
	double result = 0, old_value = 0, now_value = 1;
	while (fabs(now_value - old_value) > a)
	{
		now_value = pow(-1, n) * (1 / pow(2, n));
		old_value = pow(-1, n - 1) * (1 / pow(2, n - 1));
		result += now_value;
		n += 1;
	}
	cout << result;
}