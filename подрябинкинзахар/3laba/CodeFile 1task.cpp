#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	cout << "Enter integer number: ";
	cin >> num;
	double res = 0;
	for (int i = 1; i <= num; i++) {
		res = res + ( pow(-1 , i) * (i + 1) ) / i;
		cout << "\n  med result: " << res;
	}
	cout << "\n result: " << res << "\n";
	system("pause");
	return 0;

}