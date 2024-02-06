#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs so it has no edges in it
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's i-th preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    // Looping through all the candidates we have
    for (int i = 0; i < candidate_count; i++)
    {
        /*Check if the name that we are receiving is the same name that
        we have in our candidates array*/
        if (strcmp(candidates[i], name) == 0)
        {
            ranks[rank] = i; // the index of the candidate represents the rank
            return true;
        }
    }
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    // TODO
    // Looping through every candidate we have in the candidates array
    for (int rank = 0; rank < candidate_count; rank++)
    {
        for (int col = rank + 1; col < candidate_count; col++)
        {
            preferences[ranks[rank]][ranks[col]] += 1;
        }
    }
    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            // Check which candidate from pair has more votes
            if (preferences[i][j] > preferences[j][i])
            {
                // create a new pair
                pair new_pair = {i, j};

                // Add new pair into the pairs array
                pairs[pair_count] = new_pair;
                pair_count++;
            }
        }
    }
    return;
}

// Return the pair of winner and loser
int pair_weight(i)
{
    int pair_winner = pairs[i].winner;
    int pair_loser = pairs[i].loser;

    return preferences[pair_winner][pair_loser];
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    // TODO
    // Reverse Selection Sort for a descending order
    int min_index = 0;
    int index = 0;
    for (int i = pair_count; i > 0; i--)
    {
        // Find the minimum weight/strenght of victory
        int min_weight = pair_weight(i);
        min_index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            // check the strongest win
            if (pair_weight(j) < min_weight)
            {
                min_weight = pair_weight(j);
                min_index = j;
            }
        }
        index = i;
    }

    // Swap strongest win with current index
    pair temp = pairs[min_index];
    pairs[min_index] = pairs[index];
    pairs[index] = temp;

    return;
}

// Creating the has_cycle function to check if the new added edge creates a cycle
bool has_cycle(int winner, int loser)
{
    if (locked[loser][winner] == true) // it means we already have a cycle
    {
        return true;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        if (locked[loser][i] == true && has_cycle(winner, i))
        {
            return true;
        }
    }
    return false;
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    // TODO
    for (int i = 0; i < pair_count; i++)
    {
        int winner = pairs[i].winner;
        int loser = pairs[i].loser;

        if (!has_cycle(winner, loser))
        {
            locked[winner][loser] = true;
        }
    }
    return;
}

// Print the winner of the election
void print_winner(void)
{
    // TODO

    for (int col = 0; col < candidate_count; col++)
    {
        bool found_source = true;

        for (int row = 0; row < candidate_count; row++)
        {
            if (locked[row][col] == true)
            {
                found_source = false;
                break;
            }
        }

        if (found_source)
        {
            printf("%s\n", candidates[col]);
            return;
        }
    }
    return;
}
