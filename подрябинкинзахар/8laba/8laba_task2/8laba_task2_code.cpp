#include<iostream>
#include<string>
using namespace std;

void remove(char input[])
{
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == '\n')
		{
			for (int j = i; input[j] != '\0'; j++)
			{
				input[j] = input[j + 1];
			}
			i--;
		}
	}
}

void preobr(char input[], int inp_length)
{
	for (int i = 0; i < inp_length; i++)
	{
		if ((i - 1) % 2 == 0)
		{
			input[i] = '\n';
		}
	}
	remove(input);
}

void preobr(char input[], int inp_length, char nnul)
{
	for (int i = 0; i < inp_length; i++)
	{
		if (input[i] == nnul)
		{
			input[i] = '\n';
			i++;
			for (i; input [i] != nnul and i < inp_length; i++)
			{
				input[i] = '\n';
			}
			if (input[i] == nnul)
			{
				input[i] = '\n';
			}
			
		}
	}
	remove(input);
}

void main()
{
	setlocale(LC_ALL, "ru");
	char input[256];
	cout << "Введите нейкую строку символов на латинском: ";
	cin.getline(input, 256);
	cout << "Введите код операции: \n 1 -- убрать все чётные символы \n 2 -- убрать все элементы между нулями \n другой символ -- закрыть программу. \n";
	char answ;
	cin >> answ;
	switch (answ)
	{
		case '1':
			preobr(input, strlen(input));
			break;
			
		case '2':
			preobr(input, strlen(input), '0');
			break;
			
		default:
			cout << "выход";
			break;
			
	}
	cout << endl << "Вывод текста: ";
	for (int i = 0; i < strlen(input); i++)
	{
		cout << input[i];
	}
	cout << endl;
	system("pause");
}