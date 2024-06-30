#include "../s21_math.h"

long double s21_cos(double x) {
  long double y = 1, rez = 1;
  int sign = 1;
  if (x == S21_NAN) {
    y = S21_NAN;
  } else if (x == S21_NEG_INF || x == S21_POS_INF) {
    y = S21_NAN;
  } else {
    int acc = 500;
    x = s21_fabs(x);
    if (s21_fabs(x) > S21_PI) {
      x /= S21_PI;
      if ((long)x % 2 == 1) sign = (-1);
      x = (x - (long)x) * S21_PI;
    }
    for (int i = 1; i <= acc; i++) {
      rez = (-rez) * (x * x) / ((2 * i) * (2 * i - 1));
      y = y + rez;
    }
  }
  return y * sign;
}