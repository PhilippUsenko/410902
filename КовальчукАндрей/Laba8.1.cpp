#include <iostream>  
#include <string>   

using namespace std; 

// ������� ��� ���������� � ������ ���� ��������� ����� p
void devision(int p) {
    for (int i = 1; i <= p; i++) {
        if (p % i == 0) {  // ��������, �������� �� i ��������� p
            cout << i << endl;  // ����� ��������
        }
    }
}

int main() {

    int p;  // ���������� ��� �������� ���������� �����
    cout << "Enter p: "; 
    cin >> p;  // ���� ����� �������������
    devision(p);  // ����� ������� ��� ���������� � ������ ���������

    return 0; 
}
