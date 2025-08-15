#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        sum += i*i;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    return number*number*(number + 1)*(number + 1)/4;
}

unsigned int difference_of_squares(unsigned int number){
    unsigned int sum = 0;
    for (unsigned int i = 1; i < number + 1; i++)
    {
        for (unsigned int j = 1; j < i + 1; j++)
        {
            if (i != j) sum += 2*i*j;
        }
    }
    return sum;
}