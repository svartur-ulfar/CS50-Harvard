/*
    Say we have a population of n llamas.
    Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

    For example, if we were to start with n = 1200 llamas,
    then in the first year, 1200 / 3 = 400 new llamas would be born and
    1200 / 4 = 300 llamas would pass away.
    At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

    To try another example, if we were to start with n = 1000 llamas,
    at the end of the year, we would have 1000 / 3 = 333.33 new llamas.
    We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born.
    1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.


    -----------------IMPLEMENTATION DETAILS---------------------------------------------------------------------------------------
    Complete the implementation of population.c, such that it calculates the number of years
    required for the population to grow from the start size to the end size.

    Your program should first prompt the user for a starting population size.
        If the user enters a number less than 9 (the minimum allowed population size),
        the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9.
        (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)

    Your program should then prompt the user for an ending population size.
        If the user enters a number less than the starting population size,
        the user should be re-prompted to enter an ending population size until they enter a number that is
        greater than or equal to the starting population size.
        (After all, we want the population of llamas to grow!)

    Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
    Finally, your program should print the number of years required for the llama population to reach that end size,
    as by printing to the terminal Years: n, where n is the number of years.


*/


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int StartSize, EndSize, n = 0;

    // TODO: Prompt for start size

    do
    {
        // printf("Start Size number should be > 9 \n");
        StartSize = get_int("Start Size: ");
    }
    while (StartSize < 9);

    // TODO: Prompt for end size

    do
    {
        // printf("End Size number should be > Start Size \n");
        EndSize = get_int("End Size: ");
    }
    while (EndSize < StartSize);

    // TODO: Calculate number of years until we reach threshold

    while (StartSize < EndSize)
    {
        int StartSize1;

        StartSize1 = StartSize + (StartSize / 3) - (StartSize / 4);
        StartSize = StartSize1;
        n = n + 1;
    }
    // TODO: Print number of years

    printf("Years: %i\n", n);
}
