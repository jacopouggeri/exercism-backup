#include "binary.h"

long unsigned int strlen(const char* str)
{
    long unsigned int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int pow_2(int x)
{
    return 1 << x;
}

int convert(const char* input)
{
    unsigned int conversion = 0;
    unsigned int len = strlen(input);
    for (unsigned int i = 0; i < len; i++)
    {
        if (input[i] != '0' && input[i] != '1') return -1;
        conversion += (input[i] - '0')*pow_2(len - i - 1);
    }
    return conversion;
}