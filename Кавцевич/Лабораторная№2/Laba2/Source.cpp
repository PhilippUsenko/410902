#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3, a4;  //для целых чисел 
    cin >> a1 >> a2 >> a3 >> a4;
    if ((a1 == a2) && (a1 == a3) && (a1 != a4))
        cout << '4';
    else
    {
        if ((a1 == a4) && (a1 == a2) && (a1 != a3))
            cout << '3';
        else
        {
            if ((a1 == a3) && (a1 == a4) && (a1 != a2))
                cout << '2';
            else
                cout << '1';
        }
    }
    return 0;


}