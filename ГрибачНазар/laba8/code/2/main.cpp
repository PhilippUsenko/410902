#include <iostream>
#include <numeric> // Для функции lcm (НОК)

using namespace std;

class FractionCalculator
{
public:
    // Метод для сложения десятичных дробей
    void solutionDouble(double num1, double num2, double &result)
    {
        result = num1 + num2;
    }

    // Метод для сложения обыкновенных дробей
    void solutionDouble(int nmtr1, int dmtr1, int nmtr2, int dmtr2)
    {
        int nok = std::lcm(dmtr1, dmtr2); // Находим наименьшее общее кратное знаменателей

        if (dmtr1 == dmtr2)
        { // Если знаменатели одинаковы
            if ((nmtr1 + nmtr2) == nok)
            { // Если сумма числителей равна НОК знаменателей
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

            if (resultNmtr % nok == 0)
            { // Если сумма числителей делится без остатка
                int result = resultNmtr / nok;
                cout << result;
                return;
            }

            if (resultNmtr >= nok)
            { // Если числитель больше знаменателя
                int chastnoe = resultNmtr / nok;
                int raznost = resultNmtr - (nok * chastnoe); // Остаток

                cout << "Не преобразованная дробь: " << resultNmtr << "/" << nok << endl;
                cout << "Преобразованная дробь: " << chastnoe << "+" << raznost << "/" << nok;
                return;
            }

            // Если числитель < знаменателя => выводим десятичную и обыкновенную
            double result = (double)resultNmtr / (double)nok;
            cout << result << " или " << resultNmtr << "/" << nok;
        }
    }
};

int main()
{
    FractionCalculator calculator;

    int selectedNum;
    cout << "Выберите, какие дроби будете складывать: 1 - десятичные, 2 - обыкновенные: ";
    cin >> selectedNum;

    if (selectedNum == 1)
    {
        double num1;
        double num2;
        double result;

        cout << "Введите первую десятичную дробь: ";
        cin >> num1;

        cout << "Введите вторую десятичную дробь: ";
        cin >> num2;

        calculator.solutionDouble(num1, num2, result); // Вызываем метод сложения десятичных дробей

        cout << "Ответ: " << result;
    }
    else
    {
        int nmtr1, nmtr2; // Числители
        int dmtr1, dmtr2; // Знаменатели

        cout << "Введите числитель первой дроби: ";
        cin >> nmtr1;
        cout << "Введите знаменатель первой дроби: ";
        cin >> dmtr1;

        cout << "Введите числитель второй дроби: ";
        cin >> nmtr2;
        cout << "Введите знаменатель второй дроби: ";
        cin >> dmtr2;

        calculator.solutionDouble(nmtr1, dmtr1, nmtr2, dmtr2); // Вызываем метод сложения обыкновенных дробей
    }

    return 0;
}
