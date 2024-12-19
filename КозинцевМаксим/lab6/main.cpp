#include <iostream>
#include <string>
using namespace std;

int main() {
	string line, word = "";

	int count_am = 0, count_w = 0, length = 0;
	bool found_w = false;

	cout << "Enter Line: ";

	getline(cin, line);		//Получаем введенную строку

	for (int i = 0; i < line.size(); i++) {	//Цикл для перебора всех элементов строки
		if (line[i] == ' ') {
			if (length > 0) {	//Если встретился пробел, то проверяем слово на условия из задания
				if (tolower(word[0]) == tolower(word[length - 1])) {
					count_am++;	//Если первая и последняя буквы равны
				}
				if (found_w) {
					count_w++;	//Если в слове есть W
				}
			}

			word = "";	//Очищаем слово
			length = 0;
			found_w = false;

		}
		else {
			word += line[i];	//Иначе добавляем к слову букву и увеличиваем длину
			length++;
			if(line[i] == 'w' || line[i] == 'W') {
				found_w = true;
			}
		}
	}
	if (length > 0) {	//Проверка последнего слова(т.к. В конце строки нет пробела)
		if (tolower(word[0]) == tolower(word[length - 1])) {
			count_am++;
		}
		if (found_w) {
			count_w++;
		}
	}
	cout << "Line has " << count_am << " words with same first and last letter" << endl;
	cout << "Line has " << count_w << " words with letter w" << endl;
	
	return 0;
}
