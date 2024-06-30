#include "../s21_math.h"

long double s21_acos(double x) {
  if (x > 1 || x < -1) {
    x = S21_NAN;
  } else {
    x = s21_asin(x);
  }
  return S21_PI / 2 - x;
}