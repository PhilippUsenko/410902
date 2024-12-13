#include <iostream> // для cout, cin
#include <cmath>  // для fabs()

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 100; // Количество элементов массива
    double array[SIZE];   // Объявление массива
    double product = 1.0; // Переменная для хранения произведения
    int n;                // Фактическое количество элементов массива

    // Заполнение массива и ввод n
    std::cout << "Введите количество элементов массива n (n < 100): ";
    std::cin >> n;

    // Проверка на корректность ввода
    if (n <= 0 || n >= SIZE) {
        std::cout << "Недопустимое количество элементов. Допустимо количество от 1 до 99." << std::endl;
        return 1;
    }

    // Ввод элементов массива
    std::cout << "Введите " << n << " элемента(-ов) массива: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i]; // Пользователь вводит значения
    }

    // Вывод массива
    std::cout << "Введенный массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Поиск максимального элемента по модулю
    double maxFabsValue = fabs(array[0]);
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (fabs(array[i]) > maxFabsValue) 
        {
            maxFabsValue = fabs(array[i]);
            maxIndex = i;
        }
    }

    // Вычисление произведения элементов перед максимальным по модулю
    for (int i = 0; i < maxIndex; ++i) {
        product = product * array[i];
    }

    // Вывод результатов
    std::cout << "Максимальный элемент массива: " << array[maxIndex] << " с индексом " << maxIndex << std::endl;
    std::cout << "Произведение элементов массива перед максимальным элементом : " << product << std::endl;

    return 0;
}
