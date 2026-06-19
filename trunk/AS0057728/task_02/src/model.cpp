#include "model.h"
#include <cmath>

double linearModel(double y, double u, double a, double b) {
    return a * y + b * u;
}

double nonlinearModel(double y, double yPrev, double u, double uPrev,
                      double a, double b, double c, double d) {
    double nonlinearPart = b * yPrev * yPrev;
    double trigPart = d * std::sin(uPrev);

    return a * y - nonlinearPart + c * u + trigPart;
}