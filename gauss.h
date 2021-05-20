#pragma once
#include "matrix.h"

float multiplier(float** mtrx, int n, int i, int j);
std::pair<float**, int> straight_stroke(const Matrix& mtrx);
std::pair<float*, int> reverse_stroke(const std::pair<float**, int> triangle_mtrx);
std::pair<float*, int> Gauss_method(const Matrix& mtrx);
std::ostream& operator<< (std::ostream& out, std::pair<float*, int> massiv);
