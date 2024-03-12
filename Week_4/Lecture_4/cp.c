#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

typedef unit8_t BYTE

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    BYTE b;

    while(fred(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
}

/*
OBS:
----1----
Notice that this file creates our own data type called a BYTE that is the size of a uint8_t.
Then, the file reads a BYTE and writes it to a file.

----2----
BMPs are also assortments of data that we can examine and manipulate.
This week, you will be doing just that in your problem sets!
*/
