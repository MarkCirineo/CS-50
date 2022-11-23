#include <stdio.h>

int valid_triangle(int a, int b, int c);

int main(void)
{
    // Get three numbers
    int x, y, z;
    printf("Enter a number: ");
    scanf("%i", &x);

    printf("Enter a number: ");
    scanf("%i", &y);

    printf("Enter a number: ");
    scanf("%i", &z);
    // Call function
    int isValid = valid_triangle(x, y, z);
    if (isValid)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}

int valid_triangle(int a, int b, int c)
{
    if (
        a <= 0 ||
        b <= 0 ||
        c <= 0 ||
        a + b <= c ||
        a + c <= b ||
        b + c <= a)
    {
        return 0;
    }

    return 1;
}