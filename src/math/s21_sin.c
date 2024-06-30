#include "../s21_math.h"

long double s21_sin(double x) {
  long double result = 0;
  if (x == S21_NAN) {
    result = S21_NAN;
  } else if (x == S21_NEG_INF || x == S21_POS_INF) {
    result = S21_NAN;
  } else {
    int flag = 0;
    if (x < 0) flag = 1;
    x = s21_fabs(x);
    if (s21_fabs(x) > S21_PI) {
      x /= S21_PI;
      if ((long)x % 2 == 1) x *= (-1);
      x = (x - (long)x) * S21_PI;
    }
    if (flag == 1) x *= (-1);
    long double tmp = x;
    result += tmp;
    int sign = -1;
    for (size_t i = 3; i < 500; i += 2) {
      result += (sign * tmp * x * x / (i * (i - 1)));
      sign *= -1;
      tmp = tmp * x * x / (i * (i - 1));
    }
  }
  return result;
}