#include <iostream>
#include <string>

using namespace std;

float multiply(float num1, float num2);

int main() {
	float num1, num2;
	cin >> num1 >> num2;
	
	cout << "Float multiply: " << multiply(num1, num2) << endl;

	system("pause>null");
	return 0;
}

float multiply(float num1, float num2) {
	return num1 * num2;
}

