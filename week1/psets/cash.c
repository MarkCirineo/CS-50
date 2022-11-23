#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask user for cents
    int cents = get_cents();

    // Calculate Quarters
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate Dimes
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate Nickels
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate Pennies
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum the coins
    int coins = quarters + dimes + nickels + pennies;

    // Print number of coins
    printf("%i", coins);
}

int get_cents(void)
{
    int n;
    do
    {
        printf("Change owed: ");
        scanf("%d", &n);
    } while (n < 0);
    return n;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }

    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }

    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }

    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }

    return pennies;
}