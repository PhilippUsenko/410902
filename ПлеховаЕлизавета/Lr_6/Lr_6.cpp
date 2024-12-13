/*Дана строка, состоящая из латинских слов, разделенных пробелами.
Вывести строку, содержащую эти же слова, (разделенные одним пробелом, но
    расположенные в алфавитном порядке.*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string mes0, mes;
    string mes1[256]{};
    cout << "Введите строку" << endl;
    getline(cin, mes0);
    int counter = 0;
    int j = 0;

// удаление лишних пробелов в строке
    for (int i = 0; i < size(mes0); i++) {
        if (mes0[i] == mes0[i + 1] && mes0[i] != ' ' || mes0[i] != mes0[i + 1])
             mes += mes0[i];    
    }

    //создание массива слов из строки
    for (int i = 0; i < size(mes);) {
        if (mes[i] != ' ') {
            mes1[j] += mes[i];
            i++;
        }
        else { 
            counter++;
            j++;
            i++;
        }
               
            
        
    }
    counter ++; // количество слов в строке

    // сортировка слов в алфавитном порядке
    if (counter > 1) {
        bool sorted{};
        do
        {
            sorted = true;      // остается true, если строки отсортированы
            string temp;   // переменная для обмена значениями
            for (int i = 1; i < counter; i++)
            {
                if (mes1[i - 1] > mes1[i])
                {
                    temp = mes1[i];
                    mes1[i] = mes1[i - 1];
                    mes1[i - 1] = temp;
                    sorted = false;
                }
            }
        } while (!sorted);
    }

    cout << "Полученная строка:\n";
    for (int i = 0; i < counter-1; i++) {
        cout << mes1[i] << " ";
    }
    cout << mes1[counter-1];

    return 0;
}



