#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int Letters_Nr = 0;
    int Words_Nr = 1;
    int Sentcs_Nr = 0;
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i])) // gets the Number of Letters
        {
            Letters_Nr++;
        }

        else if (text[i] == ' ') // number of words = number of spaces + 1 (that's why we initialise with 1)
        {
            Words_Nr++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            Sentcs_Nr++;
        }
    }

    // Compute the Coleman-Liau index
    float L = (Letters_Nr / (float) Words_Nr) * 100;
    float S = (Sentcs_Nr / (float) Words_Nr) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
