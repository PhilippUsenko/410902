#include <iostream>
#include <vector>

using namespace std;

bool isPrimeNum(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void setPrimeNums(vector<int> &primeNums, int P)
{
    for (int i = 2; i <= P; i++)
    {
        if (isPrimeNum(i))
        {
            primeNums.push_back(i);
        }
    }
}

void getNaturalNums(vector<int> &primeNums, int P)
{
    for (int i = 0; i < primeNums.size(); i++)
    {
        for (int j = i; j < primeNums.size(); j++)
        {
            int numberValue = primeNums[i] * primeNums[j];
            if (numberValue <= P)
            {
                cout << primeNums[i] << " * " << primeNums[j] << " = " << numberValue << endl;
            }
        }
    }
}

int main()
{
    int P;

    cout << "Введите натуральное число: ";
    cin >> P;

    vector<int> primeNums;

    setPrimeNums(primeNums, P);
    getNaturalNums(primeNums, P);

    return 0;
}
