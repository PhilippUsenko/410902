#include <iostream>;
#include <locale>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	string file;
	unsigned count = 0;
	unsigned count2 = 0;
	int i = 0;
	//int length = size(file);
	cout << "Введите полное расположение файла на английском языке через / : " << endl;
	cin >> file;
	//подсчет количества символов "/" (count)
	for (const char c : file)
	{
		if (c == '/')
			count++;
	}
	if (count == 0)
		cout << "/ ";
	else {
		cout << "Название файла : ";
		for (const char c : file)
		{
			if (count2 == count)
				cout << c;

			if (c == '/')
				count2++;
		}
	}
	return 0;
}
