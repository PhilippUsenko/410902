#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");
	string str_1, str_2, answer;
	string separators = {" "};
	string letters = { "QWERTYUIOPASDFGHJKLZXCVBNMЙЦУКЕНГШЩЗХФЫВАПРОЛДЖЭЯЧСМИТБЮ" };
	int count_1 = 0, count_2 = 0, number_of_BIG_letter = 0, number_of_space = 0;
	cout << "Введите значение 1 строки ";
	getline(cin, str_1);
	cout << "Введите значение 2 строки ";
	getline(cin, str_2);
	for (const char c: str_1)
		count_1 += 1;
	for (const char c : str_2)
		count_2 += 1;
	if (count_1 == count_2)
	{
		cout << "Ваши строки равны. Введите 1 или 2 строку которую вы хотите проверить и изменить " << endl;
		cin >> answer;
		if (answer == "1")
			count_2 += 1;
		else
			count_1 += 1;
	}
	if (count_1 > count_2)
	{
		for (int j = 0; j < count_2; j++)
		{
			number_of_BIG_letter = str_2.find_first_of(letters);
			static_cast<int>(number_of_BIG_letter);
			number_of_space = str_2.find(" ", number_of_BIG_letter);
			if (number_of_BIG_letter == -1 and number_of_space == -1)
				break;
			str_2.replace(number_of_BIG_letter, number_of_space - number_of_BIG_letter + 1, "");
		}
		cout << str_2 << endl;
	}
	if (count_1 < count_2)
	{
		for (int j = 0; j < count_1; j++)
		{
			number_of_BIG_letter = str_1.find_first_of(letters);
			static_cast<int>(number_of_BIG_letter);
			number_of_space = str_1.find(" ", number_of_BIG_letter);
			if (number_of_BIG_letter == -1 and number_of_space == -1)
				break;
			str_1.replace(number_of_BIG_letter, number_of_space - number_of_BIG_letter + 1, "");
		}
		cout << str_1 << endl;
	}
}
