#include "pangram.h"
#include <stdint.h>

static const int ALPHABET_SIZE = 26;
static const int LOWER_OFFSET = 'a' - 'A';

bool is_valid_letter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char to_lower(char c) {
    return (c >= 'A' && c <= 'Z') ? (char)(c + LOWER_OFFSET) : c;
}

bool is_pangram(const char *sentence)
{
    if (!sentence) return false;
    uint32_t letters_mask = 0;
    const uint32_t FULL = (1u << ALPHABET_SIZE) - 1u;
    while (*sentence)
    {
        char c = *sentence++;
        if (!is_valid_letter(c)) continue;
        int pos = to_lower(c) - 'a';
        letters_mask |= (1u << pos); 
        if (letters_mask == FULL) return true;
    }
    return letters_mask == FULL;
}