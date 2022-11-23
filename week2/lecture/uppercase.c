#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[128];
    printf("Before: ");
    scanf("%s", s);

    printf("After: ");

    for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
}