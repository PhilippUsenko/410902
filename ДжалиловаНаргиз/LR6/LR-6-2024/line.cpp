#include <iostream>
#include <string>

int main() {

	setlocale(LC_ALL, "Russian");
    std::string line1;
	std::cout << "������� ������ ������: " << std::endl;
	getline(std::cin, line1);
	std::string line2;
	std::cout << "������� ������ ������: " << std::endl;
	getline(std::cin, line2);

	int result = line1.compare(line2);
	std::cout << result << std::endl;

	if (result == 0) {
		std::cout << "������ ������ ����� ������" << std::endl;
	}
	else {
		if (result > 0) {
			std::cout << "������ �� �����. ������ ������ ������ ������" << std::endl;
		}
		else {
			std::cout << "������ �� �����. ������ ������ ������ ������" << std::endl;
		}
	}

	return 0;
}