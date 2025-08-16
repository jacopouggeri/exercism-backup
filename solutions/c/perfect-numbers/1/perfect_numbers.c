#include "perfect_numbers.h"
#include <stdbool.h>

bool divisible(int n, int x)
{
    return (n % x) == 0;
}

int aliquot_sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2; ++i)
    {
        sum += divisible(n, i) * i;
    }
    return sum;
}

kind classify_number(int n)
{
    if (n <= 0) return ERROR;
    int sum = aliquot_sum(n);
    if (sum == n) return PERFECT_NUMBER;
    if (sum > n) return ABUNDANT_NUMBER;
    if (sum < n) return DEFICIENT_NUMBER;
    return ERROR;
}