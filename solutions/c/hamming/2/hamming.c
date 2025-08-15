#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    size_t i = 0;
    int d = 0;
    while (lhs[i] && rhs[i])
    {
        d += lhs[i] != rhs[i];
        i++;
    }
    return (lhs[i] || rhs[i]) ? -1 : d;
}