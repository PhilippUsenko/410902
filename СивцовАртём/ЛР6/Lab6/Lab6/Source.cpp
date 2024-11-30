//27.  Дана строка-предложение на латинском языке. Вывести самое короткое слово в предложении. Если таких слов несколько, то вывести первое из них. 
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string s, word = "";
	cout << "Введите строку на латинском языке:" << "\n";
	getline(cin, s);
	string minWord = s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ')
			word += s[i];
		if (s[i] == ' ' or i == (s.size() - 1)) {
			if (0 < word.size() && word.size() < minWord.size()) {
				minWord = word;
			}
			word = "";
		}
	}
	cout << "\nСамое короткое слово: "  << minWord;
	return 0;
}




