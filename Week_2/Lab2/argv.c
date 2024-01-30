#include <cs50.h>
#include <stdio.h>

/*
Write a program that prints each command-line
argument given to the program
*/

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i] is %s\n", i, argv[i]);
    }
}


/*
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

Mario using argv, argc[]

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./mario_argv numebr 1\n");
        return 1;
    }
    int height = atoi(argv[1]); // converts string to int
}
*/
