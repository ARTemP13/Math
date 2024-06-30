#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(test_abs) {
  ck_assert_int_eq(s21_abs(-67), abs(-67));
  ck_assert_int_eq(s21_abs(67), abs(67));
  ck_assert_int_eq(s21_abs(0), abs(0));
  ck_assert_int_eq(s21_abs(-10000), abs(-10000));
  ck_assert_int_eq(s21_abs(1000000), abs(1000000));
}
END_TEST

START_TEST(test_asin) {
  ck_assert_int_eq(s21_asin(S21_POS_INF), asin(S21_POS_INF));
  ck_assert_int_eq(s21_asin(S21_NEG_INF), asin(S21_NEG_INF));
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-6);
  ck_assert_int_eq(s21_asin(5), asin(5));
  ck_assert_int_eq(s21_asin(-5), asin(-5));
  ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.1), asin(0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.1), asin(-0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.9), asin(0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.9), asin(-0.9), 1e-6);
  ck_assert_int_eq(s21_asin(1000000), asin(1000000));
  ck_assert_int_eq(s21_asin(-1000000), asin(-1000000));
}
END_TEST

START_TEST(test_acos) {
  ck_assert_int_eq(s21_acos(S21_POS_INF), acos(S21_POS_INF));
  ck_assert_int_eq(s21_acos(S21_NEG_INF), acos(S21_NEG_INF));
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-6);
  ck_assert_int_eq(s21_acos(5), acos(5));
  ck_assert_int_eq(s21_acos(-5), acos(-5));
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.1), acos(0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.1), acos(-0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.9), acos(0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.9), acos(-0.9), 1e-6);
  ck_assert_int_eq(s21_acos(1000000), acos(1000000));
  ck_assert_int_eq(s21_acos(-1000000), acos(-1000000));
}
END_TEST

START_TEST(test_atan) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_POS_INF), atan(S21_POS_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(S21_NEG_INF), atan(S21_NEG_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(5), atan(5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-5), atan(-5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.1), atan(0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.1), atan(-0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.9), atan(0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.9), atan(-0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(1000000), atan(1000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-1000000), atan(-1000000), 1e-6);
}
END_TEST

START_TEST(test_sin) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI), sin(S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 2), sin(S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2 * S21_PI), sin(2 * S21_PI), 1e-6);
  ck_assert_int_eq(s21_sin(S21_POS_INF), sin(S21_POS_INF));
  ck_assert_int_eq(s21_sin(S21_NEG_INF), sin(S21_NEG_INF));
  ck_assert_int_eq(s21_sin(S21_NAN), sin(S21_NAN));
  ck_assert_ldouble_eq_tol(s21_sin(S21_EXP), sin(S21_EXP), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-0.5), sin(-0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0.1), sin(0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-1), sin(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(10), sin(10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI * 1000), sin(S21_PI * 1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(1000000), sin(1000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-1000000), sin(-1000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(10000000000), sin(10000000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-10000000000), sin(-10000000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI), sin(-S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(54), sin(54), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-54), sin(-54), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3.14), sin(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-77777), sin(-77777), 1e-6);
}
END_TEST

START_TEST(test_pow_1) {
  ck_assert_ldouble_eq_tol(s21_pow(0, 5), pow(0, 5), 1e-10);
  ck_assert_int_eq(s21_pow(0, -6), pow(0, -6));
  ck_assert_ldouble_eq_tol(s21_pow(0, 0), pow(0, 0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, S21_POS_INF), pow(-1, S21_POS_INF),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1, S21_POS_INF), pow(1, S21_POS_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(3, 0), pow(3, 0), 1e-6);
  ck_assert_int_eq(s21_pow(-9, 3.14), pow(-9, 3.14));
  ck_assert_ldouble_eq_tol(s21_pow(-7, S21_NEG_INF), pow(-7, S21_NEG_INF),
                           1e-6);
  ck_assert_int_eq(s21_pow(0.54, S21_NEG_INF), pow(0.54, S21_NEG_INF));
  ck_assert_ldouble_eq_tol(s21_pow(74, S21_NEG_INF), pow(74, S21_NEG_INF),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.63, S21_POS_INF), pow(0.63, S21_POS_INF),
                           1e-6);
  ck_assert_int_eq(s21_pow(98, S21_POS_INF), pow(98, S21_POS_INF));
  ck_assert_ldouble_eq_tol(s21_pow(S21_NEG_INF, -13), pow(S21_NEG_INF, -13),
                           1e-6);
  ck_assert_int_eq(s21_pow(S21_NEG_INF, 11), pow(S21_NEG_INF, 11));
  ck_assert_int_eq(s21_pow(S21_NEG_INF, 4.67), pow(S21_NEG_INF, 4.67));
  ck_assert_int_eq(s21_pow(S21_POS_INF, 100), pow(S21_POS_INF, 100));
  ck_assert_ldouble_eq_tol(s21_pow(S21_POS_INF, -11.33),
                           pow(S21_POS_INF, -11.33), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(11, 0.5), pow(11, 0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(9, 0.66667), pow(9, 0.66667), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(100, 0.5), pow(100, 0.5), 1e-6);
}
END_TEST

START_TEST(test_pow_2) {
  ck_assert_ldouble_eq_tol(s21_pow(1, 5), pow(1, 5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(3, 6), pow(3, 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(100, 3), pow(100, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2, 10), pow(2, 10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(9, 0.5), pow(9, 0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(10000, 0.5), pow(10000, 0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(100000000, 1), pow(100000000, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-5, 4), pow(-5, 4), 1e-6);
  ck_assert_int_eq(s21_pow(-100, 0.5), pow(-100, 0.5));
  ck_assert_int_eq(s21_pow(-67, 0.6667), pow(-67, 0.6667));
  ck_assert_int_eq(s21_pow(-3, -3), pow(-3, -3));
  ck_assert_ldouble_eq_tol(s21_pow(0.4, 5), pow(0.4, 5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(3.14, 9), pow(3.14, 9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(6, -1), pow(6, -1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(5, -2), pow(5, -2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(100, -2), pow(100, -2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-S21_PI, 2), pow(-S21_PI, 2), 1e-6);
}
END_TEST

START_TEST(test_log) {
  ck_assert_int_eq(s21_log(-1), log(-1));
  ck_assert_int_eq(s21_log(-100), log(-100));
  ck_assert_int_eq(s21_log(-10000000000), log(-10000000000));
  ck_assert_int_eq(s21_log(-2334095935), log(-2334095935));
  ck_assert_int_eq(s21_log(S21_NEG_INF), log(S21_NEG_INF));
  ck_assert_int_eq(s21_log(S21_NAN), log(S21_NAN));
  ck_assert_int_eq(s21_log(0), log(0));
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.1), log(0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.343), log(0.343), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(10), log(10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(S21_PI * 1000), log(S21_PI * 1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1000000), log(1000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(458908394), log(458908394), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(100000000000), log(100000000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(10000000000000), log(10000000000000), 1e-6);
  ck_assert_int_eq(s21_log(-S21_PI), log(-S21_PI));
  ck_assert_ldouble_eq_tol(s21_log(54), log(54), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(59), log(59), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(3.14), log(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(77777), log(77777), 1e-6);
}
END_TEST

START_TEST(test_sqrt) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_int_eq(s21_sqrt(-1), sqrt(-1));
  ck_assert_ldouble_eq_tol(s21_sqrt(100), sqrt(100), 1e-6);
  ck_assert_int_eq(s21_sqrt(-100), sqrt(-100));
  ck_assert_ldouble_eq_tol(s21_sqrt(0.9), sqrt(0.9), 1e-6);
  ck_assert_int_eq(s21_sqrt(-0.9), sqrt(-0.9));
  ck_assert_int_eq(s21_sqrt(S21_NEG_INF), sqrt(S21_NEG_INF));
  ck_assert_int_eq(s21_sqrt(S21_POS_INF), sqrt(S21_POS_INF));
  ck_assert_ldouble_eq_tol(s21_sqrt(1000000000), sqrt(1000000000), 1e-6);
  ck_assert_int_eq(s21_sqrt(-100000000), sqrt(-100000000));
}
END_TEST

START_TEST(test_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(1), tan(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-1), tan(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(100), tan(100), 1e-6);
  ck_assert_int_eq(s21_tan(-100), tan(-100));
  ck_assert_ldouble_eq_tol(s21_tan(0.9), tan(0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0.9), tan(-0.9), 1e-6);
  ck_assert_int_eq(s21_tan(S21_NEG_INF), tan(S21_NEG_INF));
  ck_assert_int_eq(s21_tan(S21_POS_INF), tan(S21_POS_INF));
  ck_assert_ldouble_eq_tol(s21_tan(1000000000), tan(1000000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-100000000), tan(-100000000), 1e-6);
}
END_TEST

START_TEST(test_fabs) {
  ck_assert_float_eq(fabs(-13.21313), s21_fabs(-13.21313));
  ck_assert_float_eq(fabs(13.21313), s21_fabs(13.21313));
  ck_assert_float_eq(fabs(-1000.21313), s21_fabs(-1000.21313));
  ck_assert_float_eq(fabs(32346234.21313), s21_fabs(32346234.21313));
  ck_assert_float_eq(fabs(0.0), s21_fabs(0.0));
}
END_TEST

START_TEST(test_cos) {
  ck_assert_float_eq(cos(-13.54), s21_cos(-13.54));
  ck_assert_float_eq(cos(13.54), s21_cos(13.54));
  ck_assert_float_eq(cos(0.0), s21_cos(0.0));
  ck_assert_float_eq(cos(1000), s21_cos(1000));
  ck_assert_ldouble_eq_tol(cos(3.14), s21_cos(3.14), 1e-6);
  ck_assert_float_eq(cos(6.28), s21_cos(6.28));
  ck_assert_float_eq(cos(2.2343), s21_cos(2.2343));
  ck_assert_float_eq(cos(0.1234), s21_cos(0.1234));
  ck_assert_int_eq(cos(S21_NEG_INF), s21_cos(S21_NEG_INF));
  ck_assert_int_eq(cos(S21_POS_INF), s21_cos(S21_POS_INF));
  ck_assert_int_eq(cos(S21_NAN), s21_cos(S21_NAN));
}
END_TEST

START_TEST(test_exp) {
  ck_assert_float_eq(exp(-13.54), s21_exp(-13.54));
  ck_assert_float_eq(exp(13.54), s21_exp(13.54));
  ck_assert_float_eq(exp(-0.54), s21_exp(-0.54));
  ck_assert_float_eq(exp(1000), s21_exp(1000));
  ck_assert_float_eq(exp(1), s21_exp(1));
  ck_assert_float_eq(exp(2), s21_exp(2));
  ck_assert_float_eq(exp(-1), s21_exp(-1));
  ck_assert_float_eq(exp(0), s21_exp(0));
  ck_assert_int_eq(exp(S21_NAN), s21_exp(S21_NAN));
  ck_assert_float_eq(exp(710), s21_exp(710));
  ck_assert_float_eq(exp(1.2345), s21_exp(1.2345));
  ck_assert_float_eq(exp(1.23454656768), s21_exp(1.23454656768));
  ck_assert_float_eq(exp(S21_MAX_DOUBLE), s21_exp(S21_MAX_DOUBLE));
  ck_assert_float_eq(exp(S21_MAX_DOUBLE), s21_exp(S21_MAX_DOUBLE));
}
END_TEST

START_TEST(test_ceil) {
  double testValue1 = 1.2228;
  double testValue2 = -1.2345;
  double testValue3 = -2;
  double testValue4 = S21_POS_INF;
  double testValue5 = S21_NEG_INF;
  double testValue6 = S21_NAN;
  ck_assert_ldouble_eq_tol(s21_ceil(testValue1), ceil(testValue1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(testValue2), ceil(testValue2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(testValue3), ceil(testValue3), 1e-6);
  for (double i = -2.01; i <= 1.01; i += 0.01) {
    ck_assert_ldouble_eq_tol(s21_ceil(i), ceil(i), 1e-6);
  }
  ck_assert_ldouble_infinite(s21_ceil(testValue4));
  ck_assert_ldouble_infinite(s21_ceil(testValue5));
  ck_assert_ldouble_nan(s21_ceil(testValue6));
}
END_TEST

START_TEST(test_floor) {
  double testValue1 = 1.2228;
  double testValue2 = -1.2345;
  double testValue3 = -2;
  double testValue4 = S21_POS_INF;
  double testValue5 = S21_NEG_INF;
  double testValue6 = S21_NAN;
  ck_assert_ldouble_eq_tol(s21_floor(testValue1), floor(testValue1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(testValue2), floor(testValue2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(testValue3), floor(testValue3), 1e-6);
  for (double i = -2.01; i <= 1.01; i += 0.01) {
    ck_assert_ldouble_eq_tol(s21_floor(i), floor(i), 1e-6);
  }
  ck_assert_ldouble_infinite(s21_floor(testValue4));
  ck_assert_ldouble_infinite(s21_floor(testValue5));
  ck_assert_ldouble_nan(s21_floor(testValue6));
}
END_TEST

START_TEST(test_fmod) {
  double testValueX1 = -9;
  double testValueY1 = 3;
  double testValueX2 = -1;
  double testValueY2 = 2.22;
  double testValueX3 = 164.2;
  double testValueY3 = 0.33;
  double testValueY4 = 3;
  double testValueY5 = 0;
  ck_assert_ldouble_eq_tol(s21_fmod(testValueX1, testValueY1),
                           fmod(testValueX1, testValueY1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(testValueX2, testValueY2),
                           fmod(testValueX2, testValueY2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(testValueX3, testValueY3),
                           fmod(testValueX3, testValueY3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(testValueX3, S21_NEG_INF),
                           fmod(testValueX3, S21_NEG_INF), 1e-6);
  for (double i = -2.01; i <= 1.01; i += 0.01) {
    ck_assert_ldouble_eq_tol(s21_fmod(i, testValueY3), fmod(i, testValueY3),
                             1e-6);
  }
  ck_assert_ldouble_nan(s21_fmod(S21_NAN, testValueY4));
  ck_assert_ldouble_nan(s21_fmod(S21_NEG_INF, testValueY4));
  ck_assert_ldouble_nan(s21_fmod(S21_POS_INF, testValueY4));
  ck_assert_ldouble_nan(s21_fmod(testValueY4, testValueY5));
  ck_assert_ldouble_eq_tol(s21_fmod(testValueY4, testValueY4),
                           fmod(testValueY4, testValueY4), 1e-6);
}
END_TEST

Suite* my_tests_suite() {
  Suite* suite;
  TCase* tc_core;

  suite = suite_create("Math Tests");

  tc_core = tcase_create("TESTS");

  tcase_add_test(tc_core, test_abs);
  tcase_add_test(tc_core, test_asin);
  tcase_add_test(tc_core, test_acos);
  tcase_add_test(tc_core, test_atan);
  tcase_add_test(tc_core, test_sin);
  tcase_add_test(tc_core, test_pow_1);
  tcase_add_test(tc_core, test_pow_2);
  tcase_add_test(tc_core, test_log);
  tcase_add_test(tc_core, test_tan);
  tcase_add_test(tc_core, test_sqrt);
  tcase_add_test(tc_core, test_fabs);
  tcase_add_test(tc_core, test_cos);
  tcase_add_test(tc_core, test_exp);
  tcase_add_test(tc_core, test_ceil);
  tcase_add_test(tc_core, test_floor);
  tcase_add_test(tc_core, test_fmod);

  suite_add_tcase(suite, tc_core);

  return suite;
}
int main() {
  int number_failed = 0;
  Suite* suite;
  SRunner* srunner;

  suite = my_tests_suite();
  srunner = srunner_create(suite);

  srunner_run_all(srunner, CK_NORMAL);
  number_failed = srunner_ntests_failed(srunner);
  srunner_free(srunner);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
