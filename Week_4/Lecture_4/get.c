#include <stdio.h>
#include <string.h>

/*
int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);
    printf("n: %i\n", n);
}

OBS:
----1----
In CS50, we have created functions like get_int to simplify the act of getting input from the user.
scanf is a built-in function that can get user input.

We can reimplement get_int rather easily using scanf as above.

----2----
Notice that the value of x is stored at the location of x in the line
scanf("%i", &x).

However, attempting to reimplement get_string is not easy.
Consider the following:

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s\n", s);
    printf("s: %s\n", s);
}

OBS:
----1----
Notice that no & is required because strings are special.
Still, this program will not function.

----2----
Nowhere in this program do we allocate the amount of memory required for our string.
Indeed, we don’t know how long of a string may be inputted by the user!

----3----
Further, your code could be modified as follows.
However, we have to pre-allocate a certain amount of memory for a string:

int main(void)
{
    char *s = malloc(4);
    if (s == NULL)
    {
        return 1;
    }
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    free(s);
    return 0;
}

OBS:
----1----
If a string that is six bytes is provided you might get an error.

Simplifying our code as follows we can further understand this essential problem of pre-allocation:

*/

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

/*
OBS:
----1----
Notice that if we pre-allocate an array of size 4, we can type cat and the program functions.
However, a string larger than this could create an error.

----2----
Sometimes, the compiler or the system running it may allocate more memory than we indicate.
Fundamentally, though, the above code is unsafe.

----3----
We cannot trust that the user will input a string that fits into our pre-allocated memory.
*/
