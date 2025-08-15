#include "grains.h"

uint64_t square(uint8_t index) {
    return (index >= 1 && index <= 64) ? (1ULL << (index - 1)) : 0;
}

uint64_t total(void)
{
    return UINT64_MAX;
}