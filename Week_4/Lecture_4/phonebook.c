#include <cs50.h>
#include <stdio.h>
#include <string.h>

/*
int main(void)
{
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
}

OBS:
----1----
Notice that this code uses pointers to access the file.

----2----
You can create a file called phonebook.csv in advance of running the above code.
After running the above program and inputting a name and phone number,
you will notice that this data persists in your CSV file.

----3----
If we want to ensure that phonebook.csv exists prior to running the program,
we can modify our code as follows:
*/
int main(void)
{
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
}
