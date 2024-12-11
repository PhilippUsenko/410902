#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double x, y;
	cout << "¬ведите x, затем y" << endl;
	cin >> x >> y;
	if (x < 0 && y > 0)
	{
		printf("¬ысказывание 'ƒанные числа x, y €вл€ютс€ координатами точки, лежащей во второй координатной четверти' истинно");
	}
	else
		printf("¬ысказывание 'ƒанные числа x, y €вл€ютс€ координатами точки, лежащей во второй координатной четверти' ложно");
	return 0;
}