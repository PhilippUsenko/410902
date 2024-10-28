#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "A:";
    cin >> A;

    cout << "B:";
    cin >> B;

    if (A != B)
    {
        
        A > B ? B=A : A=B;

        cout << "A - " << A << endl;
        cout << "B - " << B << endl;
    }
    else
    {
        A = 0;
        B = 0;

        cout << "A = B = " << 0 << endl;
    }
}
