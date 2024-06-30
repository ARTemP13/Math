#include "../s21_math.h"

int NumDigits(long double num) {
  int count = 1;
  while (num > 1) {
    num /= 10;
    count++;
  }
  return count;
}

long double s21_log(double x) {
  long double result = 0;
  if (x < 0) {
    result = S21_NAN;
  } else if (x == 0) {
    result = S21_NEG_INF;
  } else if (x == 1) {
    result = 0;
  } else {
    long double value = NumDigits(x) * 2.3;
    long double prev_value = 0.0;
    long double eps = 0.000001;
    while (s21_fabs((double)(value - prev_value)) > eps) {
      prev_value = value;
      value -= (s21_exp(value) - x) / s21_exp(value);
    }
    result = value;
  }
  return result;
}
