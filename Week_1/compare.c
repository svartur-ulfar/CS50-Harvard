#include <cs50.h>
#include <stdio.h>

/*
int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if(x < y)
    {
        printf("x is less than y\n");
    }
}

Notice that we create two variables, an int or integer called x and another called y.
The values of these are populated using the get_int function.
You can run your code by executing make compare in the terminal window, followed by ./compare.
If you get any error messages, check your code for errors.

We can improve your program by coding as follows:*/

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if(x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
