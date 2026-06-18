#include <iostream>
#include <iomanip>
#include "model.h"

int main() {
    const int steps = 15;

    double a = 0.75;
    double b = 0.002;
    double c = 0.1;
    double d = 0.04;

    double yLin = 20.0;
    double yNon = 20.0;
    double yPrev = 20.0;

    double u = 0.2;
    double uPrev = 0.2;

    std::cout << std::fixed << std::setprecision(3);

    std::cout << "t | Linear | Nonlinear\n";

    for (int i = 1; i <= steps; i++) {
        double nextLin = linearModel(yLin, u, a, b);
        double nextNon = nonlinearModel(yNon, yPrev, u, uPrev, a, b, c, d);

        std::cout << i << " | " << nextLin << " | " << nextNon << std::endl;

        yPrev = yNon;
        yLin = nextLin;
        yNon = nextNon;
        uPrev = u;
    }

    return 0;
}