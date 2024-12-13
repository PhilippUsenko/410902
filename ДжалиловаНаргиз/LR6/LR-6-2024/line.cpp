#include <iostream>
#include <string>

int main() {

	setlocale(LC_ALL, "Russian");
    std::string line1;
	std::cout << "Введите первую строку: " << std::endl;
	getline(std::cin, line1);
	std::string line2;
	std::cout << "Введите вторую строку: " << std::endl;
	getline(std::cin, line2);

	int result = line1.compare(line2);
	std::cout << result << std::endl;

	if (result == 0) {
		std::cout << "Первая строка равна второй" << std::endl;
	}
	else {
		if (result > 0) {
			std::cout << "Строки не равны. Первая строка больше второй" << std::endl;
		}
		else {
			std::cout << "Строки не равны. Первая строка меньше второй" << std::endl;
		}
	}

	return 0;
}