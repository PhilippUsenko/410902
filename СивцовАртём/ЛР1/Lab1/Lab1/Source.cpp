#include <iostream>;
#include <cmath>;
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	double z1, z2, p = 3.1415;
	cout << "������� �������� n:";
	cin >> n;
	z1 = (2 * (tan(n / 2 * p / 180))) / (1 - ((tan(n / 2 * p / 180) * tan(n / 2 * p / 180))));
	z2 = sin(n * p / 180) / (sqrt(1 - (sin(n * p / 180) * sin(n * p / 180))));
    cout << "����� 1: " << z1 << " " <<  "����� 2: " << z2;
	return 0;
}