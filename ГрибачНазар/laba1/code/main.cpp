#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double R1;
    double R2;

    cout << "Radius 1:";
    cin >> R1;

    cout << "Radius 2:";
    cin >> R2;

    double Pi = 3.14;

    double S1 = Pi * R1 * R1;
    double S2 = Pi * R2 * R2;

    cout << S2 << endl;

    double S0 = S2 - S1;

    cout << "The radius of the ring - ";
    cout << S0;

    system("pause>nul");

    return 0;
}
