#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}

/*Notice that #include <cs50.h> has been added to the top of your code.
The get_string function is used to get a string from the user.
Then, the variable answer is passed to the printf function.
%s tells the printf function to prepare itself to receive a string.
answer is a special holding place we call a variable.
answer is of type string and can hold any string within it.
There are many data types, such as int, bool, char, and many others.
Running make hello again in the terminal window, you can run your program by typing ./hello.
The program now asks for your name and then says hello with your name attached.*/
