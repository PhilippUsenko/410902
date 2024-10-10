#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string answer1, answer2;
	int n, a;
	for (int i{ 1 }; i > 0; i++)
	{
		cout << "Введите число которое будет возводиться в степень или exit если хотите выйти с программы ";
		cin >> answer1;
		cout << "Введите степень в которую хотите возвести число или exit если хотите выйти с программы " ;
		cin >> answer2;
		if (answer1 == "exit" || answer2 == "exit")
			break;
		else
		{
			a = atoi(answer1.c_str());
			n = atoi(answer2.c_str());
			cout << "Если возвести число " << a << " в степень " << n << " получим результат " << pow(a, n) << endl << endl;
		}
	}
}
