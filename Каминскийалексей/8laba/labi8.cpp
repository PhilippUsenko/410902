#include <iostream>

using namespace std;

void initializeArray(bool*& array, const int n)
{
    for (int i = 0; i < n - 2; i++)
    array[i] = true;
}

void checkForPrime(bool*& array, const int n)
{
    for (int i = 2; i < n; i++)
        if (array[i - 2] == true)
            for(int j = 2; j < (n / i) + 1; j++)
                array[i * j - 2] = false;
}

void writeTheArray(const bool* array, const int n)
{
    cout << "Все простые числа до N : ";
    for (int i = 0; i < n - 2; i++)
        if (array[i])
            cout << i + 2 << ' ';
}

int main()
{
    int p;
    cin >> p;
    bool *primeNumbers = new bool[p-2];
    initializeArray(primeNumbers, p);
    checkForPrime(primeNumbers, p);
    writeTheArray(primeNumbers, p);
    delete primeNumbers;
}
