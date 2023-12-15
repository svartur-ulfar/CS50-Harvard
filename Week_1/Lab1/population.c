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
