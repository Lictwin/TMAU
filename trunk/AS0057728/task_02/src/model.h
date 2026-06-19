#pragma once

double linearModel(double y, double u, double a, double b);

double nonlinearModel(double y, double yPrev, double u, double uPrev,
                      double a, double b, double c, double d);