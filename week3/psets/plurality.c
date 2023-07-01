#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    char *name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
int vote(char *name);
void print_winner(void);

int main(int argc, char *argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
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
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count;
    printf("Number of voters: ");
    scanf("%i", &voter_count);

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        char name[128];
        printf("Vote: ");
        scanf("%s", name);

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
int vote(char *name)
{
    int index_to_vote = -1;
    // Find the element with that name
    for (int i = 0; i < MAX; i++)
    {
        // printf("Array: %s\n", candidates[i].name);
        // printf("Given: %s\n", name);
        // printf("%i\n", index_to_vote);

        // If there is no name for that index or the person has been found already
        if (!candidates[i].name || index_to_vote > 0) {
            continue;
        }

        // If the person is found
        if (strcmp(candidates[i].name, name) == 0) {
            index_to_vote = i;
        }
    }

    // If the user votes for someone that is not in the candidates array
    if (index_to_vote < 0) {
        return 0;
    }
    // Update the vote
    candidates[index_to_vote].votes++;
    return 1;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int most_votes_index = -1;

    for (int i = 1; i < MAX - 1; i++)
    {
        if (!candidates[i].votes) {
            continue;
        }

        // HOW
        // if (candidates[i].votes > candidates[i - 1].votes) {
        //     most_votes_index = i;
        // } else {
        //     most_votes_index = i - 1;
        // }
    }

    // HOW TO FIND WINNER????
    // Winner - (unless theres a tie, idk how to handle that)
    // printf("%s", candidates[most_votes_index].name);
    return;
}