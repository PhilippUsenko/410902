//а) дл€ последовательности целых чисел находит количество простых чисел;
//б) дл€ строки находит количество слов, заканчивающихс€ и начинающихс€ на одну и ту же букву.

#include<iostream>
#include<string>
using namespace std;

int kol (int b)
{
	int j;
	if (b == 1) return 0;
	for (j = 2; j < b; j++)
		if (b % j == 0) 
		{
			return 0; 
			break;
		}
	return 1;	
}


int kol(string pos)
{
	int l, k = 0, m=0, p=0, kolsl;
	for (k = 0; k < l; k++) if (pos[k] == ' ') kolsl = kolsl + 1;
	string* slova = new string[kolsl];
	l = length(pos);

	for (k = 0; k< l; k++)
	{
		if (pos[k] != ' ') m = m + 1;
		else
		{
			slova[p] = substr(k + 1 - m, m);
			p = p + 1;
		}
	}

	for (k = 0; k < kolsl; k++)
	{
		cout << slova[k];
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "russian");
	int p, i, b, kola=0, kolb;
	int* a = new int[10];
	string pos;


	cout << "¬ведите последовательность целых чисел из 10 элементов: "<<endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];

	for (i = 0; i < 10; i++)
	{
		b = a[i];
		p = kol(b);
		kola = kola + p;
	}
	cout <<endl<<"¬ последовательности " <<kola<<" простых чисел.";


	cout << endl << "¬ведите предложение или набор слов." << endl;
	getline(cin, pos);

	kolb = kol(pos);

	return 0;
}