#include "luhn.h"
#include <stddef.h>

size_t strlen(const char *s)
{
    const char* p = s;
    while (*p) ++p;
    return (size_t)(p - s);
}

bool is_space(const char c)
{
    return c == ' ';
}

bool is_digit(const char c)
{
    return c >= '0' && c <= '9';
}

bool luhn(const char *num)
{
    const size_t len = strlen(num);
    if (len <= 1) return false;
    size_t sum_count = 0;
    size_t sum = 0;
    for (size_t i = len; i-- > 0;)
    {
        if (is_space(num[i])) continue;
        if (!is_digit(num[i])) return false;
        size_t val = num[i] - '0';
        size_t dbl = (sum_count & 1);
        val = val + dbl*val;
        sum += val - 9*(val > 9);
        sum_count += 1;
    }
    if (sum_count == 1) return false; // Can have spaces with only one digit
    return (sum % 10) == 0;
}