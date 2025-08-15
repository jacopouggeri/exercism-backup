#include "raindrops.h"
#include <stdio.h>

#define BUF_LEN 16

static const char PLING[] = "Pling";
static const char PLANG[] = "Plang";
static const char PLONG[] = "Plong";

void append(char out[BUF_LEN], const char* tail)
{
    char* current_pos = out;
    // Last allowed memory position is after BUF_LEN, but that's reserved for '\0'
    char* limit = out + BUF_LEN - 1;
    int at_end = 0;
    while (current_pos < limit)
    {
        if (!at_end)
        {
            // When current_pos points to '\0', we've reached the current end of out
            if (*current_pos) { current_pos++; continue; }
            at_end = 1;
        }
        if (!*tail) break;
        // Now we can copy over the values after incrementing the location
        *current_pos++ = *tail++;
    }
    *current_pos = '\0';
}

void convert(char result[], int drops)
{
    int three = drops % 3;
    int five = drops % 5;
    int seven = drops % 7;
    if (three * five * seven != 0)
    {
        snprintf(result, BUF_LEN, "%d", drops);
    }
    if (three == 0) append(result, PLING);
    if (five == 0) append(result, PLANG);
    if (seven == 0) append (result, PLONG);
}