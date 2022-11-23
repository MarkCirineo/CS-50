#include <stdio.h>

int main(void)
{
    // Prompt user for input
    // If input is less than 1 or greater than 8, prompt again (do while loop?)
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while (height > 8 || height < 1);
    

    // printf("here, %i", height);
    // Print the #
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i + 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
