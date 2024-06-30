#include "../s21_math.h"

long double s21_floor(double x) {
  long double rezult = (long long int)x;
  if (isNAN(x))
    rezult = S21_NAN;
  else if (isS21_NEG_INF(x))
    rezult = S21_NEG_INF;
  else if (isS21_POS_INF(x))
    rezult = S21_POS_INF;
  else if (x < 0 && x != rezult)
    rezult -= 1;
  return rezult;
}
