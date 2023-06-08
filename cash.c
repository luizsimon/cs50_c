#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents, int HowManyQuartersUsed);
int calculate_nickels(int cents, int HowManyDimesUsed, int HowManyQuartersUsed);
int calculate_pennies(int cents, int HowManyDimesUsed, int HowManyQuartersUsed, int HowManyNickelsUsed);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();
    calculate_quarters(cents);
    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    printf("Quarters = %i\n", quarters);
    int dimes = calculate_dimes(cents, quarters);
    int nickels = calculate_nickels(cents, dimes, quarters);
    int pennies = calculate_pennies(cents, nickels, dimes, quarters);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;
    printf("%i\n", coins);

    //cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    //int dimes = calculate_dimes(cents);
    //cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    //int nickels = calculate_nickels(cents);
    //cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    //int pennies = calculate_pennies(cents);
    //cents = cents - pennies * 1;

    // Sum coins
    //int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    //printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Fala o troco ai: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    int change_quarters = 1;
    int HowManyQuartersUsed = 0;
    int quarters = cents;
    while (quarters > 25)
    {
        quarters = cents - (change_quarters*25);
        cents = cents - (change_quarters*25);
        HowManyQuartersUsed = HowManyQuartersUsed + change_quarters;
    }

    //for (change_quarters = 0; quarters > 25; change_quarters++)
    //{
    //   quarters = (cents % 25);
    //    cents = cents - quarters;
    //}
    //printf("Cents = %i change_quarters = %i ", quarters, HowManyQuartersUsed);
    return HowManyQuartersUsed;
}

int calculate_dimes(int cents, int HowManyQuartersUsed)
{
    int cents1 = cents - HowManyQuartersUsed*25;
    int dimes = cents1;
    int change_dimes = 1;
    int HowManyDimesUsed = 0;
    while (dimes > 10)
    {
        dimes = cents1 - (change_dimes*10);
        cents1 = cents1 - (change_dimes*10);
        HowManyDimesUsed = HowManyDimesUsed + change_dimes;
    }

    return HowManyDimesUsed;
}

int calculate_nickels(int cents, int HowManyDimesUsed, int HowManyQuartersUsed)
{
    int cents2 = cents - HowManyQuartersUsed*25 - HowManyDimesUsed*10;
    int nickels = cents2;
    int change_nickels = 1;
    int HowManyNickelsUsed = 0;
    while (nickels > 5)
    {
        nickels = cents2 - (change_nickels*5);
        cents2 = cents2 - (change_nickels*5);
        HowManyNickelsUsed = HowManyNickelsUsed + change_nickels;
    }
    return HowManyNickelsUsed;
}

int calculate_pennies(int cents, int HowManyDimesUsed, int HowManyQuartersUsed, int HowManyNickelsUsed)
{
    int cents3 = cents - HowManyQuartersUsed*25 - HowManyDimesUsed*10 - HowManyNickelsUsed*5;
    int pennies = cents3;
    int change_pennies = 1;
    int HowManyPenniesUsed = 0;
    while (pennies > 1)
    {
        pennies = cents3 - (change_pennies*1);
        cents3 = cents3 - (change_pennies*1);
        HowManyPenniesUsed = HowManyPenniesUsed + change_pennies;
    }
    return HowManyPenniesUsed;
}
