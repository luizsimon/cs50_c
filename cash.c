#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents, int change_quarters);
int calculate_nickels(int cents, int change_dimes, int change_quarters);
int calculate_pennies(int cents, int change_nickeles, int change_dimes, int change_quarters);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    printf("%i", quarters);
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
    int change_quarters = 3;
    int quarters = 0;
    for (change_quarters = 0; quarters > 25; change_quarters++)
    {
        quarters = (cents % 25);
        cents = cents - quarters;
    }
    return change_quarters;
}

int calculate_dimes(int cents, int change_quarters)
{
    int dimes = cents - change_quarters*25;
    int change_dimes;
    int dimes_for = 0;
    for (change_dimes = 0; change_dimes > 10; change_dimes++)
    {
        dimes_for = (dimes % 10) - dimes_for;
    }
    return change_dimes;
}

int calculate_nickels(int cents, int change_dimes, int change_quarters)
{
    int nickels = cents - change_quarters*25 - change_dimes*10;
    int change_nickels;
    int nickels_for = 0;
    for (change_nickels = 0; change_nickels > 5; change_nickels++)
    {
        nickels_for = (nickels % 5) - nickels_for;
    }
    return change_nickels;
}

int calculate_pennies(int cents, int change_nickels, int change_dimes, int change_quarters)
{
    int pennies = cents - change_nickels*5 - change_quarters*25 - change_dimes*10;
    int change_pennies;
    int pennies_for = 0;
    for (change_pennies = 0; change_pennies > 5; change_pennies++)
    {
        pennies_for = (pennies % 5) - pennies_for;
    }
    return change_pennies;
}
