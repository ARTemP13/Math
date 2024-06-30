#include "../s21_math.h"

long double s21_asin(double x) {
  long double sum = x;
  if (x == 1.0 || x == -1.0) sum = S21_PI / 2 * x;
  if (x > 1 || x < -1) {
    sum = S21_NAN;
  } else {
    sum = s21_atan(x / s21_sqrt(1 - x * x));
  }
  return sum;
}