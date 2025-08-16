#include "triangle.h"
#include <stdexcept>

namespace triangle {

bool test_triangle(float a, float b, float c){
    return (a + b) >= c && a*b*c != 0;
}

bool test_isosceles(float a, float b, float c){
    return (a == b) || (b == c) || (c == a);
}

bool test_equilateral(float a, float b, float c){
    return (a == b) && (b == c);
}

flavor kind(float a, float b, float c){
    if (!test_triangle(a, b, c) || !test_triangle(b, c, a) || !test_triangle(a, c, b))
        throw std::domain_error("Invalid triangle!\n");
    if (test_isosceles(a, b, c)) {
        if (test_equilateral(a, b, c)) return flavor::equilateral;
        return flavor::isosceles;
    }
    return flavor::scalene;
}

}  // namespace triangle
