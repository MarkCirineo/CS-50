#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[128];
    printf("Input: ");
    scanf("%s", s);

    printf("Output: ");

    for (size_t i = 0, l = strlen(s); i < l; i++)
    {
        printf("%c", s[i]);
    }    
}