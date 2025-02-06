#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, count = 0;
	string line;
	bool inWord = false;
	cout << "Введите строку: ";
	getline(cin, line);

	for (i = 0; i < line.size(); i++)
	{
		if (line[i] != ' ')
		{
			if (!inWord)
			{
				inWord = true;
				count++;
			}
		}
		else
		{
			inWord = false;
		}
	}

	cout << "Количество слов: " << count;
	return 0;
}
