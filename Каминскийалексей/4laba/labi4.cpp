#include <iostream>
using namespace std;

int main ()
{
    int n, max = 0, max_index;
    float sum = 0;
    float mas[1000];
    cout << "Введите количество элементов массива: ";
    cin >> n;
    if (n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> mas[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (mas[i]>=max)
            {
                max = mas[i];
                max_index = i;
            }
        }
        
        for (int i = 0; i < max_index; i++)
        {
            if (mas[i]>0)
            {
                sum = sum + mas[i];
            }   
        }
        cout << "Сумма всех положительных элементов до максимального: " << sum;
    }
    else 
    {
        exit;
    }
}