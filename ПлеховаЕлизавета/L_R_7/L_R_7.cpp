#include <iostream>
#include <fstream>
using namespace std;


struct product 
{
	short number=0;
	string name="";
	int quantity=0;
	float price=0;
	void print() 
	{
		cout << number << "   " << name << "\t\t" << quantity << "\t\t" << price << "\t\t" << price * quantity << endl;
	}
};

// для вывода таблицы на экран
void print_table(struct product _1, struct product _2, struct product _3, struct product _4, struct product _5 ) {
	cout << "№   Название" << "\tКоличество" << "\tЦена за штуку" << "\tОбщая стоимость" << endl;
	_1.print();
	_2.print();
	_3.print();
	_4.print();
	_5.print();
}


product     _1{1,"Milk", 10, 1.90 },
		    _2{2,"Bread", 8, 1.50 }, 
		    _3{3,"Chips", 3, 2.99 },
		    _4{4,"Fish", 10, 5.68},
		    _5{5,"Aple", 33, 0.50};

int main()
{
	setlocale(LC_ALL, "rus");
	
	print_table(_1,  _2,  _3,  _4,  _5);
	
	// редактирование таблицы
	cout << "Введите 1, если хотите внести изменения. Введите 0 если хотите завершить работу\n";
	bool is_doing;
	cin >> is_doing;
	


		while (is_doing) {
			cout << "Введите номер товара\n";
			int number;
			cin >> number;
			if (number >= 1 && number <= 5) {
				cout << "Введите новое количество товара\n";
				int newq;
				cin >> newq;
				switch (number) {
				case 1:
					_1.quantity = newq;
					break;
				case 2:
					_2.quantity = newq;
					break;
				case 3:
					_3.quantity = newq;
					break;
				case 4:
					_4.quantity = newq;
					break;
				case 5:
					_5.quantity = newq;
					break;

				}
				cout << "Введите 1, если хотите внести изменения. Введите 0 если хотите завершить работу\n";
				cin >> is_doing;
				
			}
			else {
				cout << "Неверный номер!\n";
			}
		}


		// вывод результатов работы
		cout << "Отредактированная таблица:\n";
		print_table(_1, _2, _3, _4, _5);

		// запись в файл
		string path = "Products.txt";
		ofstream fout;
		fout.open(path);
		if (!fout.is_open()) {
			cout << "Ошибка открытия файла!\n";
		}
		else {
			cout << "Файл открыт!\n";
			fout.write((char*)&_1, sizeof(product));
			fout.write((char*)&_2, sizeof(product));
			fout.write((char*)&_3, sizeof(product));
			fout.write((char*)&_4, sizeof(product));
			fout.write((char*)&_5, sizeof(product));
		}
		fout.close();
	
	return 0;
}