#include "../s21_math.h"

long double s21_atan(double x) {
  long double sum = 0;
  if (x == 0.0) {
    sum = 0;
  } else if (x == 1.0 || x == -1.0) {
    sum = (x == 1.0) ? S21_PI / 4.0 : S21_PI / (-4.0);
  } else if (x == S21_POS_INF || x == S21_NEG_INF) {
    sum = (x == S21_POS_INF) ? S21_PI / 2.0 : S21_PI / (-2.0);
  } else {
    int k = s21_fabs(x) > 1 ? -1 : 1;
    for (int i = 0; i < 500; i++) {
      sum += (s21_pow(-1, i) * s21_pow(x, (1 * k + 2 * k * i))) / (1 + 2 * i);
    }
    sum = (k == -1.0) ? (S21_PI * s21_fabs(x) / (2 * x) - sum) : sum;
  }
  return sum;
}