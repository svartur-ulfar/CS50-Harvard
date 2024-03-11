#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*  int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;

OBS:
----1----
Notice that running this program does not cause any errors.
While malloc is used to allocate enough memory for an array,
the code fails to free that allocated memory.

----2----
If you type make memory followed by valgrind ./memory, you will get a report
from valgrind that will report where memory has been lost as a result of your program.

----3----
One error that valgrind reveals is that we attempted to assign the value of 33 at the 4th position of the array, where we only allocated an array of size 3. Another error is that we never freed x.

You can modify your code as follows:
*/

    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);

//Notice that running valgrind again now results in no memory leaks.
}
