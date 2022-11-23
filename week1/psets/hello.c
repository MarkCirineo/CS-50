#include <stdio.h>

int main(void)
{
	char name[128];
	printf("What's your name? ");
	scanf("%s", name);
	printf("hello, %s\n", name);
}
