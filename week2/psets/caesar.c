#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void convert_text(char *plaintext, char *ciphertext, int k);

int main(int argc, char *argv[])
{
    char usage[] = "Usage: ./caesar key";
    // Checks for the correct amount of command-line argument
    if (argc != 2)
    {
        printf("%s", usage);
        return 1;
    }
    // Checks if the command-line argument is a number
    for (int i = 0; argv[1][i] != 0; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("%s", usage);
            return 1;
        }
    }

    int key = atoi(argv[1]);

    // Prompt user for plaintext
    char plaintext[128];
    printf("plaintetxt:  ");
    scanf("%s", plaintext);

    char ciphertext[128];
    convert_text(plaintext, ciphertext, key);
    printf("chiphertext: %s", ciphertext);
    return 0;
}

void convert_text(char *plaintext, char *ciphertext, int k)
{
    // Use modulo to handle keys larger than 26
    for (int i = 0; plaintext[i]; i++)
    {
        int key = k % 26;
        if (
            (isupper(plaintext[i]) && (plaintext[i] + key) > 90) ||
            (islower(plaintext[i]) && (plaintext[i] + key) > 122)
        )
        {
            key -= 26;
        }
        if (!isalpha(plaintext[i]))
        {
            key = 0;
        }
        ciphertext[i] = plaintext[i] + key;
    }
}