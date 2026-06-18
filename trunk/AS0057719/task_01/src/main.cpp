
#include <iostream>
#include <vector>
#include <cmath>
#include <locale>

using namespace std;

// Функция для моделирования линейной системы
// Уравнение: y_{t+1} = a*y_{t} + b*u_{t}
void simulateLinear(int steps, double a, double b, double y0, double u) {
    cout << "--- Линейная модель ---" << endl;
    double y = y0;

    for (int t = 1; t <= steps; ++t) {
        double y_next = a * y + b * u;
        cout << "Шаг " << t << ": Температура y = " << y_next << endl;
        y = y_next; // Обновляем текущее значение для следующего шага
    }
    cout << endl;
}

// Функция для моделирования нелинейной системы
// Уравнение: y_{t+1} = a*y_{t} - b*y_{t-1}^2 + c*u_{t} + d*sin(u_{t-1})
void simulateNonlinear(int steps, double a, double b, double c, double d, double y0, double y_prev, double u, double u_prev) {
    cout << "--- Нелинейная модель ---" << endl;
    double y_curr = y0;
    double y_last = y_prev;
    double u_curr = u;
    double u_last = u_prev;

    for (int t = 1; t <= steps; ++t) {
        double y_next = a * y_curr - b * pow(y_last, 2) + c * u_curr + d * sin(u_last);

        cout << "Шаг " << t << ": Температура y = " << y_next << endl;

        // Сдвигаем значения времени для следующей итерации
        y_last = y_curr;
        y_curr = y_next;
        // Если входное тепловое воздействие (u) меняется со временем, 
        // здесь нужно обновлять u_curr и u_last. В данном примере u - константа.
        u_last = u_curr;
    }
    cout << endl;
}

int main() {

    setlocale(LC_ALL, "Russian");

    int steps = 10; // Количество дискретных моментов времени для симуляции
    double input_u = 5.0; // Входное тепло (u)

    // Параметры для линейной модели
    double a_lin = 0.8, b_lin = 0.5, y0_lin = 20.0;

    simulateLinear(steps, a_lin, b_lin, y0_lin, input_u);

    // Параметры для нелинейной модели
    double a_nonlin = 0.8, b_nonlin = 0.001, c_nonlin = 0.5, d_nonlin = 0.2;
    double y0_nonlin = 20.0, y_prev_nonlin = 20.0; // Начальные температуры
    double u_prev_nonlin = 5.0; // Предыдущее значение входного тепла

    simulateNonlinear(steps, a_nonlin, b_nonlin, c_nonlin, d_nonlin, y0_nonlin, y_prev_nonlin, input_u, u_prev_nonlin);

    return 0;
}