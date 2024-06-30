#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <stdio.h>
#include <stdlib.h>

#define S21_PI 3.14159265358979323846264338327950288419716939937510
#define S21_POS_INF 1.0 / 0.0
#define S21_NEG_INF -1.0 / 0.0
#define S21_NAN 0.0 / 0.0
#define S21_EXP 2.718281828459045
#define S21_MAX_DOUBLE 1.7976931348623157e30
#define S21_EPS 1e-9
#define isNAN(x) (x != x)
#define isS21_POS_INF(x) (x == S21_POS_INF)
#define isS21_NEG_INF(x) (x == S21_NEG_INF)

long double s21_asin(double x);
int s21_abs(int x);
long double s21_acos(double x);
long double s21_atan(double x);
long double s21_log(double x);
long double s21_sin(double x);
long double s21_pow(double base, double exp1);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_cos(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_ceil(double x);

#endif