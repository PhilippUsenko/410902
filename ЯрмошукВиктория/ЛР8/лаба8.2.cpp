
#include <iostream>
#include <complex>
using namespace std;

int fun(int n, int m) {
    return n*m;
}
complex<double> fun( complex<double> n, complex <double> m) {

    return n * m;
}
int main()
{
    int a, b;
    complex<double> d, e;
    cin >> a >> b;
    cout << fun(a,b)<<endl;
    cin >> d >>e;
    cout << fun(d,e);
    system("pause>nul");
    return 0;
}
