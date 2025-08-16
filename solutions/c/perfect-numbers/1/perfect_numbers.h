#ifndef PERFECT_NUMBERS_H
#define PERFECT_NUMBERS_H
#include <stdbool.h>

typedef enum {
   PERFECT_NUMBER = 1,
   ABUNDANT_NUMBER = 2,
   DEFICIENT_NUMBER = 3,
   ERROR = -1
} kind;

bool divisible(int n, int x);
int aliquot_sum(int n);
kind classify_number(int n);

#endif
