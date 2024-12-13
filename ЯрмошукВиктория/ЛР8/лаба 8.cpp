
#include <iostream>
using namespace std;

unsigned factorial(unsigned n) {
    if (n > 1)
        return n * factorial(n - 1);
    return 1;
}
int main()
{
    cout << factorial(4)*10*9/factorial(3);
    system("pause>nul");
    return 0;
}

