// Become familiar wih C syntax
// Learn to debug buggy code

/*

Fix this bug, and then try to compile again.
Keep in mind that debugging is an iterative process.
You may need to fix an error, compile, then fix another error,
compile again, multiple times!


#include <cs50.h>

int main(void)
{
    // Ask for your name and where live
    name = get_string("What is your name? ")
    location = get_string("Where do you live? ")

    // Say hello
    print("Hello, %i, from %i!", name, location)
}

*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? ");
    string location = get_string("Where do you live? ");

    // Say hello
    printf("Hello, %s, from %s!", name, location)
}
