#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt to agree
    char c = get_char("Do you agree? ");

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed. \n");
    }
}

/*Considering another data type called a char
we can start a new program by typing code agree.c into the terminal window.
Notice that single quotes are utilized for single characters. Further, notice that == ensure that something is equal to something else,
where a single equal sign would have a very different function in C. Finally, notice that || effectively means or.
You can test your code by typing make agree into the terminal window, followed by ./agree.*/
