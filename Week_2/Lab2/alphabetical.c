#include <cs50.h>
#include <stdio.h>
#include <string.h>

/*Write a program to check if an array of characters
is in alphabetical order.

Assume the characters are all uppercase.*/

int main(void)
{
    string phrase = get_string("Enter phrase: ");
    int length = strlen(phrase); // best to put it here than in the loop so it won't run the strlen function again and again

    //for (int i = 0, length = strlen(phrase); i < length; i++)
    // if I type in the comma, the next variable will be that same type, in this case an integer

    for (int i = 0; i < length - 1; i++) // - 1 due to the NULL character
    {
        /*I want to print whatever data is stored as an integer
        printf("%i ", phrase[i]);*/

        // to check if characters are NOT alphabetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("Not in alphabetical order.\n");
            return 0;
        }

    }
    printf("Alphabetical order!\n");
    return 0;
}
