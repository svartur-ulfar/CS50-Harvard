#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
/*  int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
*/

/*------COMPARING STRINGS--------*/


/*Taking into consideration that strings are basically *char, it means that when compared
as below, the answer will be "Different" since they have different addreses stored

    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

*/

    char *s = get_string("s: "); //gets the address of the string s
    char *t = get_string("t: ");

  //  if (*s == *t) - compares the values found at the addresses they stored above

    if (strcmp(s,t) == 0) // strcmp() compares strings char by char
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }


/*
    OBS: ---1---
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print strings
    printf("%s\n", s);
    printf("%s\n", t);

    ---2---
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print strings' addresses
    printf("%p\n", s);
    printf("%p\n", t);
*/
}
