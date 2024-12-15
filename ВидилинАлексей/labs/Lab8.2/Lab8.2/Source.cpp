#include <iostream>
#include <string>

using namespace std;

float multiply(float num1, float num2);
void multiply(int x1, int x2, int y1, int y2);

int main() {
	int x1, x2, y1, y2;
	float num1, num2;

	cin >> num1 >> num2;
	
	cout << "Float multiply: " << multiply(num1, num2) << endl;
	
	cout << "Enter first complex number: " << endl;
	cin >> x1 >> x2;

	cout << "Enter second complex number: " << endl;
	cin >> y1 >> y2;

	cout << "first: " << x1 << " + (" << x2 << ")i" << endl;
	cout << "second: " << y1 << " + (" << y2 << ")i" << endl;

	multiply(x1, x2, y1, y2);

	system("pause>null");
	return 0;
}

float multiply(float num1, float num2) {
	return num1 * num2;
}

void multiply(int x1, int x2, int y1, int y2) {
	int first = (x1 * x2 - y1 * y2);
	int second = (x1 * y2 + x2 * y1);
	cout << "Result: " << first << " + (" << second << ")i" << endl;
}