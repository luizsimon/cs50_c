#include <cs50.h>
#include <stdio.h>

float get_charge(void);
int calculate_quarters(int charge);
int calculate_dimes(int charge, int HowManyQuartersUsed);
int calculate_nickels(int charge, int HowManyDimesUsed, int HowManyQuartersUsed);
int calculate_pennies(int charge, int HowManyDimesUsed, int HowManyQuartersUsed, int HowManyNickelsUsed);

int main(void)
{
    // Ask how many cents the customer is owed
    float charge = get_charge();
    calculate_quarters(charge);
    printf("Troco: %.2f\n", charge);
    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(charge);
    //printf("Quarters = %i\n", quarters);
    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(charge, quarters);
    //printf("Dimes = %i\n", dimes);
    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(charge, dimes, quarters);
    //printf("Nickels = %i\n", nickels);
    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(charge, dimes, quarters, nickels);
    //printf("Pennies = %i\n", pennies);

    // Sum coins
    //int coins = quarters + dimes + nickels + pennies;
    //printf("%i\n", coins);


}
float get_charge(void)
{
    float cents;
    do
    {
        cents = get_float("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_notas_100(int charge)
{
    int change_notas_100 = 1;
    int HowManyNotas100Used = 0;
    int Notas_100 = charge;
    while (Notas_100 >= 100)
    {
        Notas_100 = charge - (change_notas_100 * 100);
        charge = charge - (change_notas_100 * 100);
        HowManyNotas100Used = HowManyNotas100Used + change_notas_100;
    }

    return HowManyNotas100Used;
}

int calculate_notas_50(int charge, int HowManyNotas100Used)
{
    charge1 = charge - HowManyNotas100Used * 100;
    int change_notas_50 = 1;
    int HowManyNotas50Used = 0;
    int Notas_50 = charge1;
    while (Notas_50 >= 50)
    {
        Notas_50 = charge1 - (change_notas_50 * 50);
        charge1 = charge1 - (change_notas_50 * 50);
        HowManyNotas50Used = HowManyNotas50Used + change_notas_50;
    }

    return HowManyNotas50Used;
}

int calculate_quarters(int charge)
{
    int change_quarters = 1;
    int HowManyQuartersUsed = 0;
    int quarters = charge;
    while (quarters >= 25)
    {
        quarters = charge - (change_quarters * 25);
        charge = charge - (change_quarters * 25);
        HowManyQuartersUsed = HowManyQuartersUsed + change_quarters;
    }

    return HowManyQuartersUsed;
}

int calculate_dimes(int charge, int HowManyQuartersUsed)
{
    int cents1 = charge - HowManyQuartersUsed * 25;
    int dimes = cents1;
    int change_dimes = 1;
    int HowManyDimesUsed = 0;
    while (dimes >= 10)
    {
        dimes = cents1 - (change_dimes * 10);
        cents1 = cents1 - (change_dimes * 10);
        HowManyDimesUsed = HowManyDimesUsed + change_dimes;
    }

    return HowManyDimesUsed;
}

int calculate_nickels(int charge, int HowManyDimesUsed, int HowManyQuartersUsed)
{
    int cents2 = charge - HowManyQuartersUsed * 25 - HowManyDimesUsed * 10;
    int nickels = cents2;
    int change_nickels = 1;
    int HowManyNickelsUsed = 0;
    while (nickels >= 5)
    {
        nickels = cents2 - (change_nickels * 5);
        cents2 = cents2 - (change_nickels * 5);
        HowManyNickelsUsed = HowManyNickelsUsed + change_nickels;
    }
    return HowManyNickelsUsed;
}

int calculate_pennies(int charge, int HowManyDimesUsed, int HowManyQuartersUsed, int HowManyNickelsUsed)
{
    int cents3 = charge - HowManyQuartersUsed * 25 - HowManyDimesUsed * 10 - HowManyNickelsUsed * 5;
    int pennies = cents3;
    int change_pennies = 1;
    int HowManyPenniesUsed = 0;
    while (pennies >= 1)
    {
        pennies = cents3 - (change_pennies * 1);
        cents3 = cents3 - (change_pennies * 1);
        HowManyPenniesUsed = HowManyPenniesUsed + change_pennies;
    }
    return HowManyPenniesUsed;
}