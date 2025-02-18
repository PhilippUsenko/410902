#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct drob
{
	int chisl;
	int znam;
};

drob chastnoye(drob inp1, drob inp2) //функци€ вычислени€ частного
{
	drob outp;
	int znak = 1; // знак дроби
	outp.chisl = inp1.chisl * inp2.znam;
	outp.znam = inp1.znam * inp2.chisl;
	if (((outp.chisl > 0) and (outp.znam < 0)) or ((outp.chisl < 0) and (outp.znam > 0))) // определение итогового знака дроби
	{
		znak = -1;
	}
	
	outp.chisl = pow(pow(outp.chisl, 2), 0.5); // вз€тие модул€ от дроби дл€ правильной работы алгоритма
	outp.znam = pow(pow(outp.znam, 2), 0.5);
	for (int i = 2; (i <= outp.chisl) and (i <= outp.znam); i++) //привидение дроби к стандартному виду
	{
		if ((outp.chisl % i == 0) and (outp.znam % i == 0))
		{
			outp.chisl = outp.chisl / i;
			outp.znam = outp.znam / i;
			i = 2;
		}
	}
	outp.chisl *= znak; // возврат итогового знака дроби
	if (outp.znam == 0)
	{
		cout << "\n !!!! \n ¬ знаменателе обнаружен 0. ¬ычислени€ не будут €вл€тьс€ правильными. ѕерезапустите програму и введите данные заново,";
		cout << "избега€ нул€ в знаменател€х и числителе второй дроби. \n !!!!\n";
	}
	return outp;
}

drob vvod() //функци€ ввода дробного числа
{
	drob res;
	int chisl = 0;
	int znam = 0;
	char input[256];
	int znak = 1;
	int funct_status = -1; // переменна€ дл€ проверки вида дроби и поиска места символа / в записи дроби
	cin.getline(input, 256);
	for (int i = 0; i < strlen(input); i++) // поиск знака / в дроби
	{
		if (input [i] == '/')
		{
			funct_status = i;
		}
	}
	
	if (input[0] == '-') // проверка на отрицательное число в числителе
	{
		znak *= -1;
	}
	if (input[funct_status + 1] == '-' and funct_status != -1) // проверка на отрицательное число в знаменателе
	{
		znak *= -1;
	}

	if (funct_status == -1)
	{
		znam = 1;

		for (int i = 0; i < strlen(input); i++) // действие на случай если отсутствует знак /
		{
			if (input[i] != '-') //проверка на знак минус и перевод числа из массива char в int
			{
				chisl += ((int)input[i] - '0') * pow(10, strlen(input) - i - 1); 
			}
		}
		cout << endl << "ќтсутствует символ \"/\". Ѕудет выведена дробь " << znak * chisl << "/1" << endl;
	}
	else
	{
		for (int i = 0; i < funct_status; i++)
		{
			if (input[i] != '-') //проверка на знак минус и перевод числа из массива char в int
			{
				chisl += ((int)input[i] - '0') * pow(10, funct_status - i - 1);
			}
		}
		for (int i = funct_status +1 ; i < strlen(input) ; i++)
		{
			if (input[i] != '-') //проверка на знак минус и перевод числа из массива char в int
			{
				znam += ((int)input[i] - '0') * pow(10, strlen(input) - i - 1);
			}
		}
	}
	res.chisl = chisl * znak;
	res.znam = znam;
	if (znam == 0)
	{
		cout << "\n !!!! \n ¬ знаменателе обнаружен 0. ¬ычислени€ не будут €вл€тьс€ правильными. \n !!!! \n";
	}
	return res;
}

void main()
{
	setlocale(LC_ALL, "ru");
	drob a;
	drob b;
	cout << endl << "¬ведите первую дробь через \"/\" (например 53/21): ";
	a = vvod();
	cout << endl << "¬ведите вторую дробь через \"/\" (например -25/2, избегайте нулевой дроби): ";
	b = vvod();
	drob res;
	res = chastnoye(a, b);
	cout << "\n–езультат делени€: (" << a.chisl << '/' << a.znam << ") / (" << b.chisl << '/' << b.znam << ") = ";
	cout << res.chisl << '/' << res.znam << endl;
	system("pause");
}