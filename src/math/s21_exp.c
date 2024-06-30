#include "../s21_math.h"

long double s21_exp(double x) {
  long double rez = 1, y = 1;
  long double i = 1;
  int flag = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  while (s21_fabs(rez) > S21_EPS) {
    rez *= x / i;
    i++;
    y += rez;
    if (y > S21_MAX_DOUBLE) {
      y = S21_POS_INF;
      break;
    }
  }
  y = flag == 1 ? y > S21_MAX_DOUBLE ? 0 : 1. / y : y;
  return y = y > S21_MAX_DOUBLE ? S21_POS_INF : y;
}