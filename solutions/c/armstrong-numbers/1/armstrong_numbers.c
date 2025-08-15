#include "armstrong_numbers.h"
#include <math.h>

int ipow(int base, int exp)
{
    int res = 1;
    while (exp > 0) {res *= base; exp--;}
    return res;
}

bool is_armstrong_number(const int candidate)
{
    int result = 0;
    int length = (candidate == 0) ? 1 : floor(log10(candidate)) + 1;
    for (int i = length; i > 0; i--)
    {
        int digit = (candidate / ipow(10, i - 1)) % 10;
        result += ipow(digit, length);
    }
    return candidate == result;
}