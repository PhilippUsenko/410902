#include <iostream>

using namespace std;

int main() {
	double accuracy = 0.001, result = 0, pre_result;
	int n = 1;

	do {
		pre_result = result;
		result += pow(-1, n) / (pow(2, n) * n);	//Вычисление значения выражения
		n++;

	} while (fabs(result) - fabs(pre_result) > accuracy); //Сравнивание текущего результата с предыдущим

	cout << "Result: " << result;  //Вывод результата

	return 0;
}
