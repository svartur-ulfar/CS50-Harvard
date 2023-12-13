#include <cs50.h>
#include <stdio.h>

/*
int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
}

Notice this does as intended but has an opportunity for better design


int main(void)
{
    int i = 0;
    while (i < 3)
    {
       printf("meow\n");
       i++;
    }

}

Notice that we create an int called i and assign it the value 0.
Then, we create a while loop that will run as long as i < 3.
Then, the loop runs. Every time 1 is added to i using the i++ statement.

Similarly, we can implement a count-down of sorts by modifying our code as follows:

int main(void)
{
    int i = 3;
    while (i > 0)
    {
       printf("meow\n");
       i--;
    }

}

Notice how our counter i is started at 3.
Each time the loop runs, it will reduce the counter by 1.
Once the counter is less than zero, it will stop the loop.

We can further improve the design using a for loop.
Modify your code as follows:

int main(void)
{

    for (int i = 0; i < 3; i++)
    {
       printf("meow\n");
    }

}

Notice that the for loop includes three arguments.
The first argument int i = 0 starts our counter at zero.
The second argument i < 3 is the condition that is being checked.
Finally, the argument i++ tells the loop to increment by one each time the loop runs.

We can even loop forever using the following code:*/

int main(void)
{
    while (true)
    {
        printf("meow\n");
    }
}

/*Notice that true will always be the case.
Therefore, the code will always run.
You will lose control of your terminal window by running this code.
You can break from an infinite by hitting control-C on your keyboard.*/
