#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char* to_rna(const char* dna)
{
    size_t len = strlen(dna);
    char* rna = malloc(len + 1);
    char* p = rna;
    while(*dna)
    {
        char c = *dna++;
        *p++ = c +
            (c == 'G') * ('C' - 'G') +
            (c == 'C') * ('G' - 'C') +
            (c == 'T') * ('A' - 'T') +
            (c == 'A') * ('U' - 'A');
    }
    *p = '\0';
    return rna;
}