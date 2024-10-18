#include <iostream> 
#include <cmath> 

using namespace std; 

int main() 
{
    setlocale(LC_ALL, "Russian"); 
    float Edge, Oneface, Allfaceses, Volume; 
    cout << "Ребро куба = "; 
    cin >> Edge; 
    Oneface = pow(Edge, 2); 
    cout << "Площадь одной стороны куба = " << Oneface << endl; 
    Allfaceses = Oneface * 6; 
    cout << "Общая площадь всех граней куба = " << Allfaceses << endl; 
    Volume = pow(Edge, 3); 
    cout << "Объём куба = " << Volume; 
}
