#include <iostream>

using namespace std;

int main() {
	int n = 20, i;
	double result = 0;
	
	for (i = 1; i <= n; i++) {
		result += 1.0 / pow(i, 3);
	}

	cout << "Result: " << result;
	return 0;
}
