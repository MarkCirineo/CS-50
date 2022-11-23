#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
    // for (int i = 0; i <= 3; i++)
    // {
    //     printf("#\n");
    // }
}

int get_negative_int(void)
{
    int n;
    do
    {
        printf("Negative Integer: ");
        scanf("%d", &n);
    } while (n < 0);
    
    return n;
}