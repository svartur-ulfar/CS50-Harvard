/* Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, 
   Mario must ascend right-aligned pyramid of blocks.
  Let’s recreate that pyramid in C, albeit in text, 
  using hashes (#) for bricks, a la the below. 
  Each hash is a bit taller than it is wide, so the pyramid itself 
  will also be taller than it is wide.

       #
      ##
     ###
    ####
   #####
  ######
 #######
########

Now, modify mario.c in such a way that it prompts the user for the pyramid’s height, 
storing their input in a variable, re-prompting the user again and again as needed if their input is not a positive integer between 1 and 8, inclusive. 
Then, simply print the value of that variable, thereby confirming (for yourself) that you’ve indeed stored the user’s input successfully, a la the below.
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // PROMPT USER FOR HEIGHT
    do
    {
       n = get_int("Height: ");
    }
    while (n < 1 || n > 8);


  for (int i = 0; i < n; i++)
  {
       for (int j = 0; j < n - i - 1; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < i + 1; j++)
    {
        printf("#");
    }

    printf("\n");
  }

}
  
