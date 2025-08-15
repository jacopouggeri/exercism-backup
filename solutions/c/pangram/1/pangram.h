#ifndef PANGRAM_H
#define PANGRAM_H

#include <stdbool.h>

bool is_valid_letter(char c);
char to_lower(char c);
bool is_pangram(const char *sentence);

#endif
