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
prepod1.fio = "���������� ������ ����������";
prepod1.predmet[0] = "������";
prepod1.predmet[1] = "����";
prepod1.predmet[2] = "���������";

prepod prepod2;
prepod2.fio = "��������� ������ �������������";
prepod2.predmet[0] = "���������";
prepod2.predmet[1] = "��";
prepod2.predmet[2] = "������";

prepod prepod3;
prepod3.fio = "������ ���� �������������";
prepod3.predmet[0] = "������";
prepod3.predmet[1] = "���";
prepod3.predmet[2] = "����";

prepod prepod4;
prepod4.fio = "��������� ������ ������������";
prepod4.predmet[0] = "����";
prepod4.predmet[1] = "������";
prepod4.predmet[2] = "��";

string predmet0;
string srav;
ofstream fout;
fout.open("prepodavateli.txt");
cout << "������� �������� ������� ����������:" << '\n';
cin >> predmet0; 
cout << '\n';
cout << "������ ���������� ����� ��������� �������������:" << '\n';
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
