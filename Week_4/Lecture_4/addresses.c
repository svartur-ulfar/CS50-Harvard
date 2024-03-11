#include <stdio.h>

int main(void)
{
    int n = 50;

// p is a pointer = variable that stores an address
    int *p = &n;

//  printf("%i\n", n); - prints out the integer n
//  printf("%p\n", &n); - prints out the address of n in memory
//  printf("%p\n", p); - prints the address of n


 /*
    REVERSE - Gets an address in the memory and prints the value stored there*/

    printf("%i\n", *p);
}
