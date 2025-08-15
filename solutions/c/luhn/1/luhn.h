#ifndef LUHN_H
#define LUHN_H

#include <stdbool.h>
#include <stddef.h>

size_t strlen(const char* str);
bool is_space(const char c);
bool is_digit(const char c);
bool luhn(const char *num);

#endif
