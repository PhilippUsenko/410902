#include <iostream>
#include <fstream>
using namespace std;

struct comp_nomb // создание структуры для комплексного числа
{
	double a; // действительная часть
	double b; // мнимая часть
};


int main() {
	setlocale(LC_ALL, "ru");
	comp_nomb x;
	comp_nomb y; // создание двух комплексных чисел
	cout << "Введите действительную часть x: ";
	cin >> x.a;
	cout << endl << "Введите мнимую часть x: ";
	cin >> x.b;

	cout << endl << "Введите действительную часть y: ";
	cin >> y.a;
	cout << endl << "Введите мнимую часть y: ";
	cin >> y.b;
	cout << "\n=========================\n";

	cout << endl << "Сумма (" << x.a << " + " << x.b << "i" << ") + (" << y.a << " + " << y.b << "i" << ") равна " << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl;
	cout << endl << "Произведение (" << x.a << " + " << x.b << "i" << ") * (" << y.a << " + " << y.b << "i" << ") равно " << (x.a * y.a - x.b * y.b) << " + " << (x.a * y.b + x.b * y.a)<< "i" << endl;
	cout << "\n=========================\n";
	cout << "\n Вы хотите сохранить результат вычислений? (ввести y) \n Вы хотите заменить предыдущие результаты на текущий? (ввести r) \n Выйти без сохранения? (ввести любой другой символ) \n ";
	// вывод результатов вычислений
	char answ;
	cin >> answ;
	ofstream output; 
	switch (answ) // запрос у пользователя разрешения на запись в файл или перезапись уже имеющегося содержимого
	{
	case 'y':		
		output.open("Result.txt", ofstream::app);
		if (!output.is_open()) {
			cout << "Файл не может быть открыт. ";
		}
		else
		{
			output << "\n=========================\n";
			output << endl << "Сумма (" << x.a << " + " << x.b << "i" << ") + (" << y.a << " + " << y.b << "i" << ") равна " << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl << endl <<
				"Произведение (" << x.a << " + " << x.b << "i" << ") * (" << y.a << " + " << y.b << "i" << ") равно " << (x.a * y.a - x.b * y.b) << " + " << (x.a * y.b + x.b * y.a) << "i" << endl;
			cout << endl << "Вычисления записаны в файл" << endl;
		}
		output.close();
		break;
	case 'r':
		output.open("Result.txt");
		if (!output.is_open()) {
			cout << "Файл не может быть открыт. ";
		}
		else
		{
			output << "\n=========================\n";
			output << endl << "Сумма (" << x.a << " + " << x.b << "i" << ") + (" << y.a << " + " << y.b << "i" << ") равна " << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl << endl <<
				"Произведение (" << x.a << " + " << x.b << "i" << ") * (" << y.a << " + " << y.b << "i" << ") равно " << (x.a * y.a - x.b * y.b) << " + " << (x.a * y.b + x.b * y.a) << "i" << endl;
			cout << endl << "Файл перезаписан" << endl;
		}
		output.close();	
		break;
	default:
		cout << "\nПрограмма закрыта без сохранения\n";
		break;
	}
	system("pause");
	return 0;
}