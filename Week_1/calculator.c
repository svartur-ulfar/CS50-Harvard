#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x + y);
}

/*Notice how the get_int function is utilized to obtain an integer from the user twice.
One integer is stored in the int variable called x.
Another is stored in the int variable called y.
Then, the printf function prints the value of x + y, designated by the %i symbol.
As you are coding, pay special attention to the types of variables you are using
to avoid problems within your code.*/
