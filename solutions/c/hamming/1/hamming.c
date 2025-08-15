#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    long unsigned int rlen = strlen(rhs);
    if (strlen(lhs) != rlen) return -1;
    int d = 0;
    for (long unsigned int i = 0; i < rlen; i++)
    {
        if (lhs[i] - rhs[i] != 0) d++;
    }
    return d;
}