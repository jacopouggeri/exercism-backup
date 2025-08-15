#include "clock.h"

#define ZERO_CLOCK "00:00"
#define HOUR_IDX 0
#define MIN_IDX 3

int wrap(int val, int mod)
{
    return ((val % mod) + mod) % mod;
}

int clock_get_at(clock_t* clock, int idx)
{
    return (clock->text[idx] - '0') * 10 + (clock->text[idx+1] - '0');
}

void clock_set_at(clock_t* clock, int idx, int val)
{
    clock->text[idx] = val / 10 + '0';
    clock->text[idx + 1] = val % 10 + '0';
}

clock_t clock_create(int hour, int minute)
{
    clock_t clock = { ZERO_CLOCK };
    return clock_add(clock, hour*60 + minute);
}

clock_t clock_add(clock_t clock, int minute_add)
{
    int total_min = clock_get_at(&clock, HOUR_IDX) * 60 +
                    clock_get_at(&clock, MIN_IDX) +
                    minute_add;
    int wrapped_total = wrap(total_min, 24 * 60);
    int hour = wrapped_total / 60;
    int min  = wrapped_total % 60;
    clock_set_at(&clock, HOUR_IDX, hour);
    clock_set_at(&clock, MIN_IDX, min);
    return clock;
}

clock_t clock_subtract(clock_t clock, int minute_subtract)
{
    return clock_add(clock, -1*minute_subtract);
}

bool streq(const char* a, const char* b)
{
    while (*a == *b)
    {
        if (*a == '\0') return true;
        a++;
        b++;
    }
    return false;
}

bool clock_is_equal(clock_t a, clock_t b)
{
    return streq(a.text, b.text);
}