#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char[]);

int main(void)
{
    // Get input words from both players
    char word1[128];
    printf("Player 1: ");
    scanf("%s", word1);
    char word2[128];
    printf("Player 2: ");
    scanf("%s", word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!");
    }
}

int compute_score(char word[])
{
    char lower[strlen(word)];
    // Conver word to lowercase
    int i = 0;
    while (word[i])
    {
        lower[i] = tolower(word[i]);
        i++;
    }

    // Calculate score
    int j = 0;
    int score = 0;
    while (lower[j])
    {
        score += POINTS[lower[j] - 97];
        j++;
    }

    return score;
}
