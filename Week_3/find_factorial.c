/*
Use recursion to find the factiorial
of a given number n.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int factorial(int n);

int main (void)
{
    // Get positive value for n
    int n;
    do
    {
        n = get_int("n: ");
    }
    while (n < 0);

    // Print factorial
    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    // TODO: Implement factorial function

    //Base case
    if (n == 1)
    {
        return 1;
    }

    // Recalling the function
    return n * factorial(n - 1);
}
