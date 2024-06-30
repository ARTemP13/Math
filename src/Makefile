CC = gcc
TESTFLAGS = -lcheck
CFLAGS = -Wall -Wextra -Werror 
GCOVFLAGS = -fprofile-arcs -ftest-coverage

all: test

s21_math.a : math/*.c
	$(CC) $(CFLAGS) -g -std=c11 -c math/*.c
	ar rcs s21_math.a *.o
	rm -rf *.o

test: s21_test_math.c math/*.c
	$(CC) $(CFLAGS) s21_test_math.c math/*.c -o test $(TESTFLAGS)

gcov_report:
	$(CC) $(GCOVFLAGS) $(CFLAGS) s21_test_math.c math/*.c -o test $(TESTFLAGS)
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	rm -rf gcovreport gcovreport.info *.gcda *.gcno math_test.gcda math_test.gcno

rebuild: clean all

clean: 
	rm -rf *.o test *.a a.out *.gcno *.gcda test.dSYM *.info report
