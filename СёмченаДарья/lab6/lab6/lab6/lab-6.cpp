#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string pr;
	char a;
	int k=0;
	cout << "���� �����������: ";
	getline(cin, pr);
	for (const char a : pr)
	{
		if ((a == ',') || (a == '.') || (a == '!') || (a == '?') 
			|| (a == ':') || (a == ';') || (a == '�')) k = k + 1;
	}
	cout <<"� ����������� " << k << " ������ ����������.";
	return 0;
}