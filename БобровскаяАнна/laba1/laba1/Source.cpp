#include <iostream>  
#include<math.h>  
using namespace std;   
int main() 
{
	int s, u, v, t1, t2;
	setlocale(LC_ALL, "RU"); 
	cout << "������� ������ ������"; 
	cin >> v >> u >> t1 >> t2;
	s = v * t1 + (v - u) * t2;
	cout << "����������:" << s <<;
}
