#include "complex_numbers.h"
#include <math.h>

complex_t c_add(complex_t a, complex_t b)
{
    complex_t z =
    {
        .real = a.real + b.real,
        .imag = a.imag + b.imag
    };
    return z;
}

complex_t c_sub(complex_t a, complex_t b)
{
    complex_t z =
    {
        .real = a.real - b.real,
        .imag = a.imag - b.imag
    };
    return z;
}

complex_t c_mul(complex_t a, complex_t b)
{
    complex_t z =
    {
        .real = a.real*b.real - a.imag*b.imag,
        .imag = a.real*b.imag + a.imag*b.real
    };
    return z;
}

complex_t c_d_mul(complex_t a, double b)
{
    complex_t z = { .real = a.real * b, .imag = a.imag * b };
    return z;
}

complex_t c_reciprocal(complex_t x)
{
    return c_d_mul(c_conjugate(x), 1/c_abs_sq(x));
}

complex_t c_div(complex_t a, complex_t b)
{
    return c_mul(a, c_reciprocal(b));
}

double c_abs_sq(complex_t x)
{
   return c_mul(x, c_conjugate(x)).real;
}

double c_abs(complex_t x)
{
   return sqrt(c_abs_sq(x));
}

complex_t c_conjugate(complex_t x)
{
    complex_t z =
    {
        z.real = x.real,
        z.imag = -1*x.imag
    };
    return z;
}

double c_real(complex_t x)
{
   return x.real;
}

double c_imag(complex_t x)
{
   return x.imag;
}

complex_t c_exp(complex_t x)
{
    complex_t z =
    {
        .real = cos(x.imag),
        .imag = sin(x.imag)
    };
    return c_d_mul(z, exp(x.real));
}
