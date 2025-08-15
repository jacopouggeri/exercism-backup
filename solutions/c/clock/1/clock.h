#ifndef CLOCK_H
#define CLOCK_H

#include <stdbool.h>

#define MAX_STR_LEN sizeof("##:##")

typedef struct {
   char text[MAX_STR_LEN];
} clock_t;

int wrap(int val, int mod);
int clock_get_at(clock_t* clock, int idx);
void clock_set_at(clock_t* clock, int idx, int val);
clock_t clock_set_min(clock_t clock, int minute);
clock_t clock_create(int hour, int minute);
clock_t clock_add(clock_t clock, int minute_add);
clock_t clock_subtract(clock_t clock, int minute_subtract);
bool streq(const char* a, const char* b);
bool clock_is_equal(clock_t a, clock_t b);

#endif
