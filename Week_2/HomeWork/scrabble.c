#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Number of points assigned to each letter in order
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int GetScore(string Word);

int main(void)
{
    // Get the words from both players
    string Word_1 = get_string("Player 1: ");
    string Word_2 = get_string("Player 2: ");

    // Get the score for both players
    int score1 = GetScore(Word_1);
    int score2 = GetScore(Word_2);

    // Compare scores based on result given by GetScore function
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// Get the Score for the word

int GetScore(string Word)
{
    int Score = 0;
    int point;

    int length = strlen(Word);
    for (int i = 0; i < length; i++)
    {
        if (isupper(Word[i]))
        {
            /*  getting the position of the letter according to the point
                for upper letters where 'A' is represented by 65 in ASCII
                points[] has 25 position so the point for letter B would be position 'B' - 'A' = 1
                meaning the point on points[1];
            */

            point = Word[i] - 65;
            point = points[point];
        }

        else if (islower(Word[i]))
        {
            /*  getting the position of the letter according to the point
                for lower letters where 'a' is represented by 97 in ASCII
                points[] has 25 position so the point for letter b would be position 'b' - 'a' = 1
                meaning the point on points[1];
            */

            point = Word[i] - 97;
            point = points[point];
        }
        else
        {
            point = 0;
        }
        Score += point;
    }
    return Score;
}
