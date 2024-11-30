#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;
struct prepod
{
	 string fio;
	 string predmet[3];
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
setlocale(LC_ALL, "Russian");

prepod prepod1;
prepod1.fio = "Поперечный Данила Алексеевич";
prepod1.predmet[0] = "Логика";
prepod1.predmet[1] = "ИнЯз";
prepod1.predmet[2] = "Философия";

prepod prepod2;
prepod2.fio = "Айрапетов Андрей Александрович";
prepod2.predmet[0] = "Философия";
prepod2.predmet[1] = "КЧ";
prepod2.predmet[2] = "Физика";

prepod prepod3;
prepod3.fio = "Усович Иван Александрович";
prepod3.predmet[0] = "Логика";
prepod3.predmet[1] = "КПО";
prepod3.predmet[2] = "АиСД";

prepod prepod4;
prepod4.fio = "Лисевский Богдан Владимирович";
prepod4.predmet[0] = "ФизК";
prepod4.predmet[1] = "Логика";
prepod4.predmet[2] = "ЧМ";

string predmet0;
string srav;
ofstream fout;
fout.open("prepodavateli.txt");
cout << "Введите название учебной дисциплины:" << '\n';
cin >> predmet0; 
cout << '\n';
cout << "Данную дисциплину ведут следующие преподаватели:" << '\n';
for (int i = 0; i < 4; i++) {
    prepod prepods[] = { prepod1, prepod2, prepod3, prepod4 };
    for (int j = 0; j < 3; j++) {
        if (predmet0 == prepods[i].predmet[j]) {
            cout << prepods[i].fio << '\n';
                fout  << prepods[i].fio << '\n';
          
        }
    }
}
fout.close();
return 0;
}
