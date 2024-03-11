#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
//  string s = "HI!";
    char *s = "HI!";

//  printf("%s\n", s); - prints the value
//  printf("%p\n", s); - prints the address of the first character (begining of the string)
/*  printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
*/
    printf("%p\n", &s[3]);

/*------------------------------
    strings are actually a char*
    char *s = "HI!" IS BASICALLY string s = "HI!"
*/
}
