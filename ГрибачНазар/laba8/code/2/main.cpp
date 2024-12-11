#include <iostream>
#include <numeric> // Для функции lcm (НОК)

using namespace std;

// Функция для сложения десятичных дробей
void solutionDouble(double num1, double num2, double &result)
{
    result = num1 + num2;
}

// Функция для сложения обыкновенных дробей
void solutionDouble(int nmtr1, int dmtr1, int nmtr2, int dmtr2)
{
    int nok = std::lcm(dmtr1, dmtr2); // Находим наименьшее общее кратное знаменателей
    if (dmtr1 == dmtr2) // Если знаменатели одинаковы
    {

        if ((nmtr1 + nmtr2) == nok) // если сумма числителей равна ноку знаменателей
        { 
            int resultNmtr = (nmtr1 + nmtr2) / nok;
            cout << "Результат: " << resultNmtr;
        }
        else
        {
            int resultNmtr = nmtr1 + nmtr2;
            cout << resultNmtr << "/" << dmtr1;
        }
    }
    else
    {
        // Приводим дроби к общему знаменателю
        int newNmtr1 = (nok / dmtr1) * nmtr1;
        int newNmtr2 = (nok / dmtr2) * nmtr2;

        int resultNmtr = newNmtr1 + newNmtr2;

        if (resultNmtr % nok == 0) // если сумма числителей делится без остатка просто делю
        {
            int result = resultNmtr / nok;
            cout << result;

            return;
        }
        if (resultNmtr >= nok) // если числитель больше знаменателя произвожу преобразования
        {
            int chastnoe = resultNmtr / nok;
            int raznost = resultNmtr - (nok * chastnoe); // Остаток

            cout << "Не преобразованная дробь: " << resultNmtr << "/" << nok << endl;

            cout << "преобразованная дробь: " << chastnoe << "+" << raznost << "/" << nok;

            return;
        }
        // числитель < знаменателя => вывожу десятичную и обыкновенную
        double result = (double)resultNmtr / (double)nok;

        cout << result << " или " << resultNmtr << "/" << nok;
    }
}

int main()
{
    int selectedNum;
    cout << "Выберите какие дроби будете слаживать: 1 - десятичные, 2 - обыкновенные: ";
    cin >> selectedNum;
    if (selectedNum == 1)
    {
        double num1;
        double num2;
        double result;

        cout
            << "Введите первую десятичную дробь: ";
        cin >> num1;

        cout << "Введите вторую десятичную дробь: ";
        cin >> num2;

        solutionDouble(num1, num2, result); // Вызываем функцию сложения десятичных дробей

        cout << "Ответ: " << result;
    }
    else
    {
        /* числители */
        int nmtr1;
        int nmtr2;

        /* знаменатели */
        int dmtr1;
        int dmtr2;

        cout << "Введи числитель первой дроби: ";
        cin >> nmtr1;
        cout << "Введи знаменатель первой дроби: ";
        cin >> dmtr1;

        cout << "Введи числитель второй дроби: ";
        cin >> nmtr2;
        cout << "Введи знаменатель второй дроби: ";
        cin >> dmtr2;

        solutionDouble(nmtr1, dmtr1, nmtr2, dmtr2); // Вызываем функцию сложения обыкновенных дробей
    }

    return 0;
}
