#include <iostream>

#include <cmath> //������������� ������������������ �������


using namespace std;

int main() {
    
    setlocale(LC_ALL, "RU"); // ��������� ��� ����������� �������� �����

    const double pi = 3.141592653589793;  //������ ���������

	double a, b, alpha; //������� ����������
    cout << "������� ������� ��������� a: "; //����� ������
    cin >> a; //���� ������
    cout << "������� ������� ��������� b: ";
    cin >> b;



    if (a <= b) {
        cout << "������: a ������ ���� ������ b." << endl; //�������� ������������ �������
        return 1;
    }
    
    cout << "������� ���� alpha (� ��������): ";
    cin >> alpha;
    
    if (alpha >= 90) {
        cout << "������: ����� ������ ���� ������ 90." << endl;
        return 2;
    }
    
    double alphaRad = alpha * pi / 180; //������� �� �������� � �������

    double h = (a - b) * 0.5 * tan(alphaRad); //������ ���������� ����� �������

    double c = h / sin(alphaRad); //���������� ���������� ����� �����

    double P = a + b + 2 * c; //������ ���������

    double S = 0.5 * (a + b) * h; //������ �������

    cout << "�������� ��������: " << P << endl; //����� �����������
    cout << "������� ��������: " << S << endl;


	return 0;

}

