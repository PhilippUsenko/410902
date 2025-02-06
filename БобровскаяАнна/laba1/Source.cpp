#include <iostream>  
#include<math.h>
using namespace std;
int s, u, v, t1, t2;
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "¬ведите нужные данные" << endl;
	cin >> v >> u >> t1 >> t2;
	s = v * t1 + (v - u) * t2;
	cout << "рассто€ние:" << s;


	
}
