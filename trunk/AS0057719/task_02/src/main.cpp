#include <iostream>
#include <clocale>
#include "models.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Программа работает. Математические модели вынесены в models.hpp для тестирования." << endl;
    
    // Пример вызова для линейной модели
    double y_next = calcLinearStep(0.8, 0.5, 20.0, 5.0);
    cout << "Тестовый расчет линейной модели: " << y_next << endl;

    return 0;
}