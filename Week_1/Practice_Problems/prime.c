/*
    Prime numbers are defined as whole numbers greater than 1, whose only factors are 1 and itself.
    So 3 is prime because its only factors are 1 and 3, while 4 is composite and not prime, because it is the product of 2 × 2.
    In this lab you will write an algorithm to generate all prime numbers in a range specified by the user.

    The easiest way to check if a number is prime, is to try dividing it by every number from 2 up to, but not including, the number itself.
    If any number divides into it with no remainder, that number is not prime.

    The main function in the distribution code contains a for loop that iterates through the range specified by the user, with both ends inclusive.
    For example, if the user types in 1 for min and 100 for max, the for loop will test each number, 1 to 100.
    Each of these numbers is passed to a function, prime, that you will implement to return either true or false depending on whether the number is prime.
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
 for (int i = 2; i <= sqrt(number); i++)
 {
    if (number % i == 0)
    {
        return false;
        break;
    }
 }
    return true;
}
