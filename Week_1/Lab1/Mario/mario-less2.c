/*

Now that your program is (hopefully!) accepting input as prescribed, it’s time for another step.

It turns out it’s a bit easier to build a left-aligned pyramid than right-, a la the below.

#
##
###
####
#####
######
#######
########
So let’s build a left-aligned pyramid first and then, once that’s working, right-align it instead!
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
       for (int j = 0; j < i + 1; j++)
    {
        printf("#");
    }
    for (int j = 0; j < n - i + 1; j++)
    {
        printf(" ");
    }

    printf("\n");
  }

}
