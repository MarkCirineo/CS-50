#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while (height > 8 || height < 1);

    for (int i = 0; i < height; i++)
    {
        // First pyramid
        for (int j = height; j > i + 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        // Space
        printf("  ");
        // Second pyramid
        for (int j = height - i - 1; j < height; j++)
        {
            printf("#");
        }
        for (int k = height; k > 0; k--)
        {
            printf(" ");
        }
        printf("\n");
    }
}