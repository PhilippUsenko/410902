#include <stdio.h>   // ��� ������� printf, scanf, puts
#include <iostream> // setlocale
#include <conio.h> // _getch()

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    float x, y;

    puts("������� �������� ����� x"); // ������� ��������� � ����� ������ ����������

    scanf_s("%f", &x);  // ������ ������� ����� (����)

    if (x==0) {
        cout << "������: ����� �� ����� �� OX" << endl;
        return 1;
    }

    puts("������� �������� ����� y"); //������� ��������� � ����� ������ ����������

    scanf_s("%f", &y);  // ������ ������� ����� (����)

    if (y == 0) {
        cout << "������: ����� �� ����� �� OY" << endl;
        return 1;
    }


    printf("(%f;%f)\n", x, y);

    if (x>0 && y>0)
        puts("�������� I");
    else if(x>0 && y<0)
        puts("�������� IV");
    else if (x < 0 && y < 0)
        puts("�������� III");
    else if (x < 0 && y > 0)
        puts("�������� II");

    int ch = _getch();  // �������, ���� ������������ �� ������ �������
    return 0;
}