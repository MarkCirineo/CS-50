#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(char *text);
int count_words(char *text);
int count_sentences(char *text);

int main(void)
{
    // Prompt user to input text
    char text[5000];
    printf("Text: ");
    scanf("%[^\n]", text);
    printf("%s\n", text);

    // Count the number of letters
    int letters = count_letters(text);

    // Count the number of words
    int words = count_words(text);

    // Count the number of sentences
    int sentences = count_sentences(text);

    double index = 0.0588 * (((double)letters / words) * 100) - 0.296 * (((double)sentences / words) * 100) - 15.8;
    // If X is 16 or higher it should be "Grade 16+"
    if (index >= 16)
    {
        printf("Grade 16+");
    }
    // If X is less than 1 it should be "Before Grade 1"
    else if (index < 1)
    {
        printf("Before Grade 1");
    }
    // Output "Grade X"
    else
    {
        printf("Grade %.0f", round(index));
    }
}

int count_letters(char *text)
{
    int letters = 0;
    int i = 0;
    while (text[i])
    {
        // Letter = [A-Za-z];
        if (isalpha(text[i]))
        {
            letters++;
        }
        i++;
    }
    return letters;
}

int count_words(char *text)
{
    int words = 0;
    int i = 0;
    while (text[i])
    {
        // Word = Any number of charactesr separated by spaces
        if (text[i] == ' ' && text[i + 1] != ' ')
        {
            words++;
        }
        i++;
    }
    return words + 1;
}

int count_sentences(char *text)
{
    int sentences = 0;
    int i = 0;
    while (text[i])
    {
        // End of Sentence = Period, Exclamation Point or Question Mark
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
        i++;
    }
    return sentences;
}