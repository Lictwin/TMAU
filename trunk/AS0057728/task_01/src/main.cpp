#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

double linearStep(double y, double u, double a, double b) {
    return a * y + b * u;
}

double nonlinearStep(double y, double y_prev, double u, double u_prev,
                     double a, double b, double c, double d) {
    return a * y - b * y_prev * y_prev + c * u + d * sin(u_prev);
}

int main() {
    setlocale(LC_ALL, "Russian");

    int steps = 10;
    double y = 20.0;
    double u = 5.0;

    cout << "=== Линейная модель ===" << endl;

    for (int i = 0; i < steps; i++) {
        y = linearStep(y, u, 0.8, 0.4);
        cout << "t=" << i + 1 << " -> y = " << y << endl;
    }

    cout << endl;

    cout << "=== Нелинейная модель ===" << endl;

    double y_prev = 20.0;
    double y_curr = 20.0;

    for (int i = 0; i < steps; i++) {
        double y_next = nonlinearStep(y_curr, y_prev, u, u,
                                     0.8, 0.002, 0.3, 0.1);

        cout << "t=" << i + 1 << " -> y = " << y_next << endl;

        y_prev = y_curr;
        y_curr = y_next;
    }

    return 0;
}