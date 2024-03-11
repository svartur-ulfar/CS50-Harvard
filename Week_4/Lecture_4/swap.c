#include <stdio.h>

/*

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

In the real world, a common need in programming is to swap two values.
Naturally, it’s hard to swap two variables without a temporary holding space.

OBS:
----1----
When you pass values to a function, you are only providing copies.
In previous weeks, we discussed the concept of scope.

----2----
The values of x and y created in the curly {} braces of the main function only have the scope of the main function.

----3----
Global variables, which we have not used in this course, live in one place in memory.
Various functions are stored in the stack in another area of memory.

----4----
 main and swap have two separate frames or areas of memory.
 Therefore, we cannot simply pass the values from one function to another to change them

 The code should be modified as it follows: to pass BY REFERENCE
*/
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
OBS:
----1----
Notice that variables are not passed by value but by reference.
That is, the addresses of a and b are provided to the function.
Therefore, the swap function can know where to make changes to the actual a and b from the main function
*/
