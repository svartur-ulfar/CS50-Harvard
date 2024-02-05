/*MOST VOTES

Create an array of candidates
Search the array to find the most votes awarded
Print out that candidate's name.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Creating a type of data for candidates
typedef struct {
    string name;
    int votes;
}
candidate;

int main(void)
{
    // Declaring the total number of candidates I have
    const int num_candidates = 3;

    // Creating an array of candidates
    candidate candidates[num_candidates];

    candidates[0].name = "Carter";
    candidates[0].votes = 10;

    candidates[1].name = "Yuliia";
    candidates[1].votes = 12;

    candidates[2].name = "Inno";
    candidates[2].votes = 7;

    // TODO: Find highest number of votes
    int highest_votes = 0;
    for (int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes > highest_votes)
        {
            highest_votes = candidates[i].votes;
        }
    }
    printf("%i\n", highest_votes);

    // TODO: Print name of candidate with the highest number of votes
    for (int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes == highest_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}
