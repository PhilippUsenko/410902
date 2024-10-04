#include <iostream>

#include <cmath> //Использование тригонометрических функций


using namespace std;

int main() {
    
    setlocale(LC_ALL, "RU"); // Кодировка для распознания русского языка

    const double pi = 3.141592653589793;  //Задаем константу

	double a, b, alpha; //Задание переменных
    cout << "Введите большее основание a: "; //Вывод данных
    cin >> a; //Ввод данных
    cout << "Введите меньшее основание b: ";
    cin >> b;



    if (a <= b) {
        cout << "Ошибка: a должно быть больше b." << endl; //Проверка соответствия условию
        return 1;
    }
    
    cout << "Введите угол alpha (в градусах): ";
    cin >> alpha;
    
    if (alpha >= 90) {
        cout << "Ошибка: альфа должно быть меньше 90." << endl;
        return 2;
    }
    
    double alphaRad = alpha * pi / 180; //Перевод из градусов в радианы

    double h = (a - b) * 0.5 * tan(alphaRad); //Высота нахождение через тангенс

    double c = h / sin(alphaRad); //Гипотенуза нахождение через синус

    double P = a + b + 2 * c; //Расчёт периметра

    double S = 0.5 * (a + b) * h; //Расчёт площади

    cout << "Периметр трапеции: " << P << endl; //Вывод результатов
    cout << "Площадь трапеции: " << S << endl;


	return 0;

}

