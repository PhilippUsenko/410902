#include <iostream>

using namespace std;

int main() {
	int count;
	float num1, num2;
	float result = 1.;

	cout << "Enter value: ";
	
	cin >> count;

	for (int i = 1; i <= count; i++) {
		num1 = 2.f + 1.f / i;
		i++;
		num2 = 2.f - 1.f / i;

		result = result * num1 * num2;
	}

	cout << result << endl;

	system("pause>nul");
	return 0;
}