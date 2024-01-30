#include <cs50.h>
#include <stdio.h>

/*Create an array of integers in which each integer
is 2 times the value of the previous integer.

The first element is 1.

Print the array integer by integer.*/

int main(void)
{
    // int size = 8;
    int size = get_int("Enter a size: ");
    int sequence[size];

    sequence[0] = 1;
    printf("%i\n", sequence[0]);

    for (int i = 1; i < size; i++)
    {
        sequence[i] = 2 * sequence[i-1];
        printf("%i\n", sequence[i]);
    }

}
