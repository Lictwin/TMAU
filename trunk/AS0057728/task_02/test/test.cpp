#include <iostream>
#include <cassert>
#include "../src/model.h"

int main() {
    // linear
    double res1 = linearModel(20.0, 0.1, 0.8, 0.001);
    assert(abs(res1 - 16.0001) < 0.001);

    double res2 = linearModel(10.0, 0.0, 0.5, 0.1);
    assert(abs(res2 - 5.0) < 0.001);

    // nonlinear
    double res3 = nonlinearModel(20.0, 20.0, 0.1, 0.1, 0.8, 0.001, 0.12, 0.05);
    double expected = 0.8 * 20.0 - 0.001 * 20.0 * 20.0 + 0.12 * 0.1;

    assert(abs(res3 - expected) < 0.1);

    std::cout << "All tests passed!" << std::endl;

    return 0;
}