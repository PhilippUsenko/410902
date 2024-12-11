#include <iostream>

using namespace std;

// Функция для проверки, является ли число простым
bool isPrimeNum(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) // Если найден делитель, число не является простым
            return false;
    }
    return true; // Если делителей нет, число простое
}

// Функция для нахождения всех простых чисел от 2 до P
void setPrimeNums(int *&primeNums, int &size, int P)
{
    int capacity = 10;             // начальный размер массива
    primeNums = new int[capacity]; // выделяем память

    for (int i = 2; i <= P; i++)
    {
        if (isPrimeNum(i)) // Проверяем, является ли число простым
        {
            if (size == capacity) // если массив заполнен
            {
                capacity *= 2;                 // увеличиваем размер
                int *temp = new int[capacity]; // создаем новый массив большего размера
                for (int j = 0; j < size; j++) // копируем данные
                {
                    temp[j] = primeNums[j];
                }
                delete[] primeNums; // освобождаем старый массив
                primeNums = temp; // указываем указатель со старого массива на новый массив
            }
            primeNums[size++] = i; // добавляем простое число
        }
    }
}

// Функция для вывода всех произведений пар простых чисел, не превышающих P
void getNaturalNums(int *&primeNums, int &size, int P)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
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

    int *primeNums;           // Указатель на массив простых чисел
    int size = 0;             // текущий размер массива простых чисел

    setPrimeNums(primeNums, size, P);
    getNaturalNums(primeNums, size, P);

    delete[] primeNums; // освобождаем память
    return 0;
}
