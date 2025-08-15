#include "rotational_cipher.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

static const int ALPHABET_SIZE = 26;

char *rotate(const char *text, int shift_key)
{
    size_t len = strlen(text);
    char* result = malloc(len + 1);
    char* p = result;
    while (*text)
    {
        unsigned char c = *text++;
        if (isupper(c)) {
            *p++ = (char) ((c + shift_key - 'A') % ALPHABET_SIZE + 'A');
        } else if (islower(c)) {
            *p++ = (char) ((c + shift_key - 'a') % ALPHABET_SIZE + 'a');
        } else {
            *p++ = (char)c;
        }       
    }
    *p = '\0';
    return result;
}