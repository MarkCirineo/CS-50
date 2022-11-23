#include <stdio.h>
#include <string.h>

// int string_length(char name);

int main(void)
{
    char name[128];
    printf("Name: ");
    scanf("%s", name);

    int length = string_length(name);
    printf("%i", length);
}

// int string_length(char s)
// {
//     int i = 0;
//     while (s[i] != '\0') // ?!?!?!?!?
//     {
//         i++;
//     }
//     return i;   
// }