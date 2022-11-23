#include <stdio.h>
#include <string.h>

int starts_with(char *start, char *card_num);
int is_valid_card_num(char *card_num);

int main(void)
{
    // Get credit card number from user
    // long card_number;
    // printf("Number: ");
    // scanf("%d", &card_number);
    char card_number[30];
    printf("Number: ");
    scanf("%s", card_number);

    is_valid_card_num(card_number);

    // Check and validity type
    if (starts_with("34", card_number) || starts_with("37", card_number))
    {
        // American Express numbers start with 34 or 37
        printf("AMEX\n");
    }
    else if (starts_with("51", card_number) || starts_with("52", card_number) || starts_with("53", card_number) || starts_with("54", card_number) || starts_with("55", card_number))
    {
        // MasterCard numbers start with 51, 52, 53, 54, or 55
        printf("MASTERCARD\n");
    }
    else if (starts_with("4", card_number))
    {
        // Visa numbers start with 4.
        printf("VISA\n");
    }
    else
    {
        // Anything else is INVALID
        printf("INVALID\n");
    }
}

// Returns 1 if they match
int starts_with(char *start, char *card_num)
{
    // strncmp returns 0 if they match
    int ret = strncmp(start, card_num, strlen(start));

    if (ret == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_valid_card_num(char *card_num)
{
    // do math to detemine if its valid

    int length = strlen(card_num);
    printf("%d\n", length);
    printf("%s\n", &card_num[3]);

    // strchr

    // ? yeah idk how to do this wtf is a string

    return 0;

    // Multiple every other digit by 2, starting with the number's second-to-last number
    // Add those products together

    // Add the sum to the sum of the digits that weren't multiplied by 2

    // If the total's last digit it 0 then its valid
}