#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  /*  -- Get String
     string s = get_string("s: ");

    -- Copy string's address
    string t = s;

    wanting to capitalize the first letter in t, but not in s

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);


If we use the and we just do t = s; it's gonna take the address is s over to t
which means they're pointing at the same thing.

OBS:
----1----
    The string is not copied – only the address is.

----2----
    Notice that s and t are still pointing at the same blocks of memory.
    This is not an authentic copy of a string.
    Instead, these are two pointers pointing at the same string.

----3----
    Before we address this challenge, it’s important to ensure that we don’t experience
    a SEGMENTATION FAULT through our code, where we attempt to copy string s to string t,
    where string t does not exist.
    We can use strlen function as below:
*/

/*
   char *s = get_string("s: ");

    char *t = s;

    if(strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

OBS:
----1----
Notice that strlen is used to make sure string t exists.
If it does not, nothing will be copied.

----2----
To be able to make an authentic copy of the string, we will need to introduce two new building blocks.
First, MALLOC allows you, the programmer, to allocate a block of a specific size of memory.
Second, FREE allows you to tell the compiler to free up that block of memory you previously allocated.

We can modify our code to create an authentic copy of our string as follows:

*/

   // char *s = get_string("s: ");

/* The argument iis a number of bytes you would like the Operating System to allocate for you
    Basically : "Find me some number of  bytes in the computer's memory that I can now use for
    my own purposes"


-- Take the length of whatever was typed in, add 1 for the NULL character to make sure we are not UNDERCOUNTING
*/
   // char *t = malloc(strlen(s) + 1);

/*
-- Copy string into memory, including '\0'
    for (int i = 0; i < strlen(s); i++)

-- we can improve that by using a variable
    for (int i = 0,n = strlen(s); i < n; i++)
    {
        t[i] = s[i];
    }

    if(strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

OBS:
----1----
Notice that n = strlen(s) is defined now in the left-hand side of the for loop.
It’s best not to call unneeded functions in the middle condition of the for loop,
as it will run over and over again.

----2----
When moving n = strlen(s) to the left-hand side, the function strlen only runs once.

The C Language has a built-in function to copy strings called STRCPY.
It can be implemented as follows:

-- Copy string into memory it takes the destination and then the source strings as arguments
    strcpy(t, s);

    -- Capitalize copy
    t[0] = toupper(t[0]);

    -- Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

OBS:

----1----
Notice that strcpy does the same work that our for loop previously did.

----2----
Both get_string and malloc return NULL, a special value in memory, in the event that something goes wrong.

You can write code that can check for this NULL condition as follows:
*/

    // Get a string
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;

/*Notice that if the string obtained is of length 0 or malloc fails,
NULL is returned.

Further, notice that free lets the computer know you are done with this block of
memory you created via malloc.

*/

}
