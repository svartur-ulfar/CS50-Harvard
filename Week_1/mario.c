#include <stdio.h>
#include <cs50.h>

/*
int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}


Notice how four question marks are printed here using a loop.
Similarly, we can apply this same logic to be able to create three vertical blocks.

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }

}

Notice how three vertical bricks are printed using a loop.

What if we wanted to combine these ideas to create a three-by-three group of blocks?


int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

Notice that one loop is inside another.
The first loop defines what vertical row is being printed.
For each row, three columns are printed.
After each row, a new line is printed.

What if we wanted to ensure that the number of blocks to be constant,
that is, unchangeable? Modify your code as follows:

int main(void)
{
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

Notice how n is now a constant. It can never be changed.

As illustrated earlier in this lecture,
we can make our code prompt the user for the size of the grid.
Modify your code as follows:

int main(void)
{
    int n = get_int("Size: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

Notice that get_int is used to prompt the user.

A general piece of advice within programming is that
you should never fully trust your user.
They will likely misbehave, typing incorrect values where they should not.
We can protect our program from bad behavior by checking
to make sure the user’s input satisfies our needs.
Modify your code as follows:*/
/*
int main(void)
{
    //Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/
/*Notice how the user is continuously prompted for the size until the user’s input is 1 or greater.*/


/*P.S.

Comments are fundamental parts of a computer program,
where you leave explanatory remarks to yourself and others
that may be collaborating with you regarding your code.
All code you create for this course must include robust comments.
Typically each comment is a few words or more,
providing the reader an opportunity to understand what is happening in a specific block of code.
Further, such comments serve as a reminder for you later when you need to revise your code.*/


/*ABSTRACTION

Abstraction is the art of simplifying our code such that it deals with smaller and smaller problems.
Looking at your code, you can see how two essential problems in our code are get size of grid and print grid of bricks.

We can abstract away these two problems into separate functions. Modify your code as follows:

*/
int get_size(void);
void print_grid(int n);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n < 1);
    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/*Notice that we have three functions now.
First, we have the main function that calls two other functions called
get_size and print_grid.
Second, we have a second function called get_size
which includes the exact code we had to accomplish this task prior.
Third, we have another function called print_grid that prints the grid.
Because we abstracted away the essential problems within our program,
our main function is very short.*/
