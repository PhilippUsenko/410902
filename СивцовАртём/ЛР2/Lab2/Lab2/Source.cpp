//��������� ���������� ������������: "����� ���� ������ ����� ����� ���� ���� �� ���� ���� �����������". 
#include <iostream>;

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "������� a:";
	cin >> a;
	cout << "������� b:";
	cin >> b;
	cout << "������� c:";
	cin >> c;
	if (a == b or b == c or a == c) 
		cout << "����� ������ ����� ���� ���� �����������";

	else
		cout << "����� ������ ����� ��� ���� �����������";
	return 0;
}