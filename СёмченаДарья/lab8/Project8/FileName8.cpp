#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

int kol(int b)
{
	int j;
	if (b == 1) return 0;
	for (j = 2; j < b; j++)
		if (b % j == 0)
			return 0;
	return 1;
}

int kol(string pos, int dlina)
{
	int k, kolsl=0, p = 0, m = 0, dlinas, g, koli=0;
	string slovo;
	for (k = 0; k < dlina - 1; k++) if (pos[k] == ' ') kolsl = kolsl + 1;
	kolsl = kolsl + 1;
	string* slova = new string[kolsl];

	for (k = 0; k < dlina; k++)
	{
		if ((pos[k] != ' ')&&(pos[k]!='.')&&(pos[k]!=',')&&(pos[k]!='!')&&(pos[k]!='?')) m = m + 1;
		else
		{
			slova[p] = pos.substr(k - m, m);
			p = p + 1;
			m = 0;
		}
	}

	for (k = 0; k < kolsl; k++)
	{
		slovo = slova[k];
		dlinas = slovo.length()-1;
		if (slovo[0] == slovo[dlinas]) koli = koli + 1;
	}
	cout<<"Найдено " << koli<<" слов, начинающихся и заканчивающихся на одну и ту же букву."<<endl;
	delete[]slova;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int p, i, b, kola = 0, kolb, dlina;
	int* a = new int[10];
	string pos;

	cout << "Введите последовательность целых чисел из 10 элементов: " << endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	for (i = 0; i < 10; i++)
	{
		b = a[i];
		p = kol(b);
		kola = kola + p;
	}
	cout << "В последовательности " << kola << " простых чисел."<<endl;
	delete[]a;

	cout << endl << "Введите предложение или набор слов:" << endl;
	cin.ignore();
	getline(cin, pos);
	pos = pos + '.';
	dlina = pos.length();
	kolb = kol(pos, dlina);
	
	return 0;
}