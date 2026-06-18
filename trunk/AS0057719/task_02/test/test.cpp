#include <gtest/gtest.h>
#include "../src/models.hpp"

// Тест 1: Проверка линейной модели (положительные числа)
TEST(LinearModelTest, PositiveValues) {
    // 0.8 * 20.0 + 0.5 * 5.0 = 16.0 + 2.5 = 18.5
    EXPECT_DOUBLE_EQ(calcLinearStep(0.8, 0.5, 20.0, 5.0), 18.5);
}

// Тест 2: Проверка линейной модели (с нулями)
TEST(LinearModelTest, ZeroValues) {
    EXPECT_DOUBLE_EQ(calcLinearStep(0.8, 0.5, 0.0, 0.0), 0.0);
}

// Тест 3: Проверка нелинейной модели
TEST(NonlinearModelTest, StandardCalculation) {
    // a=0.8, b=0.001, c=0.5, d=0.2, y=20, y_prev=20, u=5, u_prev=5
    // Ответ примерно равен 17.9082
    double result = calcNonlinearStep(0.8, 0.001, 0.5, 0.2, 20.0, 20.0, 5.0, 5.0);
    EXPECT_NEAR(result, 17.9082, 0.001); // EXPECT_NEAR используется для дробных чисел с погрешностью
}

// Тест 4: Проверка нелинейной модели с нулевым воздействием
TEST(NonlinearModelTest, ZeroInput) {
    double result = calcNonlinearStep(0.8, 0.001, 0.5, 0.2, 20.0, 20.0, 0.0, 0.0);
    EXPECT_NEAR(result, 15.6, 0.001); 
}