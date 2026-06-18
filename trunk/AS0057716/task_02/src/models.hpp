#ifndef MODELS_HPP
#define MODELS_HPP
#include <cmath>

// Функция для одного шага линейной модели
inline double calcLinearStep(double a, double b, double y_t, double u_t) {
    return a * y_t + b * u_t;
}

// Функция для одного шага нелинейной модели
inline double calcNonlinearStep(double a, double b, double c, double d, double y_t, double y_t_minus_1, double u_t, double u_t_minus_1) {
    return a * y_t - b * std::pow(y_t_minus_1, 2) + c * u_t + d * std::sin(u_t_minus_1);
}

#endif