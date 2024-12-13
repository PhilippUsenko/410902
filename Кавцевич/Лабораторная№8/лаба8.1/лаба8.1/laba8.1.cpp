#include <iostream>
#include <string>

using namespace std;

bool cratno11(int P)
{
	string number = to_string(P);
	int alternatingsum = 0;
	for (size_t i = 0; i < number.size(); i++)
	{
		if (i % 2 == 0)
		{
			alternatingsum +=( number[i]-'0');
		}
		else
		{
			alternatingsum -= (number[i]-'0');
		}
	}
	return (alternatingsum % 11 == 0) ;
}


int main()
{
	setlocale(LC_ALL, "RU");
	int P;
	cout << "������� ����������� �����:";
	cin >> P;
	if (cratno11(P))
	{
		cout << "�������� �����" << ' ' << P << ' ' << "������ 11.";
	}
	else
	{
		cout<< "�������� �����" << ' ' << P << ' ' << "�� ������ 11.";
	}
	return 0;
}