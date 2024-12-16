#include <string>
#include <iostream>
using namespace std;


int main()
{
	char Alph1[] {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; // Массив заглавных букв для перевода
	char alph[]  {"abcdefghijklmnopqrstuvwxyz" }; // Массив прописных букв для перевода
	char text [256];
	cout << "Input: ";
	cin.getline(text, 255);
	cout << endl;
	char ch1[300]{ " " };
	strcat_s(ch1, text); 
	strcpy_s(text, ch1); // добавление пробела перед строкой для правильной работы алгоритма
	
	int size = strlen(text);
	for (int i = 0; i < size; i++ )
	{
		if (text[i] == ' ' and text[i + 1] != ' ')
		{
			int c = 0;
			while (text[i + 1] != alph[c] and c < 26) //поиск порядкого номера буквы в массиве прописных букв
			{
				c++;
			}
			if (text[i + 1] == alph[c]) // замена буквы на заглавную в случае, если найдена прописная
			{
				text[i + 1] = Alph1[c];
			}
		}
	}
	cout <<"Output: "<< text << endl;
	system("pause");
	return 0;
}