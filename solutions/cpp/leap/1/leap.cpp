#include "leap.h"

namespace leap {

bool divisible(int a, int b)
{
    return a % b == 0;
}

bool is_leap_year(int year)
{
    return divisible(year, 100) ? divisible(year, 400) : divisible(year, 4);
}
    
}  // namespace leap
