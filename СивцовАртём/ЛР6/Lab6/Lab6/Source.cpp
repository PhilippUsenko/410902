//27.  ���� ������-����������� �� ��������� �����. ������� ����� �������� ����� � �����������. ���� ����� ���� ���������, �� ������� ������ �� ���. 
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string s, word = "";
	cout << "������� ������ �� ��������� �����:" << "\n";
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
	cout << "\n����� �������� �����: "  << minWord;
	return 0;
}




