#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_charge(void);
int calculate_notas_100(float charge);
int calculate_notas_50(float charge, int HowManyNotas100Used);
int calculate_notas_20(float charge, int HowManyNotas100Used, int HowManyNotas50Used);
int calculate_notas_10(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used);
int calculate_notas_5(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used,
                      int HowManyNotas10Used);
int calculate_notas_2(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used, int HowManyNotas10Used,
                      int HowManyNotas5Used);
float soma_notas(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used, int HowManyNotas10Used,
                 int HowManyNotas5Used, int HowManyNotas2Used);
int calculate_UmReal(float cents);
int calculate_Fiftycents(float cents, int HowManyUmRealUsed);
int calculate_quarters(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed);
int calculate_dimes(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed, int HowManyQuartersUsed);
int calculate_nickels(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed, int HowManyQuartersUsed, int HowManyDimesUsed);
int calculate_pennies(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed, int HowManyQuartersUsed, int HowManyDimesUsed,
                      int HowManyNickelsUsed);

int main(void)
{

    float charge = get_charge();
    printf("\n");

    int notas_100 = calculate_notas_100(charge);
    int notas_50 = calculate_notas_50(charge, notas_100);
    int notas_20 = calculate_notas_20(charge, notas_100, notas_50);
    int notas_10 = calculate_notas_10(charge, notas_100, notas_50, notas_20);
    int notas_5 = calculate_notas_5(charge, notas_100, notas_50, notas_20, notas_10);
    int notas_2 = calculate_notas_2(charge, notas_100, notas_50, notas_20, notas_10, notas_5);
    float cents = soma_notas(charge, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2);
    int UmReal = calculate_UmReal(cents);
    int FiftyCents = calculate_Fiftycents(cents, UmReal);
    int quarters = calculate_quarters(cents, UmReal, FiftyCents);
    int dimes = calculate_dimes(cents, UmReal, FiftyCents, quarters);
    int nickels = calculate_nickels(cents, UmReal, FiftyCents, quarters, dimes);
    int pennies = calculate_pennies(cents, UmReal, FiftyCents, quarters, dimes, nickels);

    if (notas_100 != 0)
    {
        printf("Notas 100 = %i\n", notas_100);
    }
    if (notas_50 != 0)
    {
        printf("Notas 50 = %i\n", notas_50);
    }
    if (notas_20 != 0)
    {
        printf("Notas 20 = %i\n", notas_20);
    }
    if (notas_10 != 0)
    {
        printf("Notas 10 = %i\n", notas_10);
    }
    if (notas_5 != 0)
    {
        printf("Notas 5 = %i\n", notas_5);
    }
    if (notas_2 != 0)
    {
        printf("Notas 2 = %i\n", notas_2);
    }
    if (UmReal != 0)
    {
        printf("Moedas de 1 Real = %i\n", UmReal);
    }
    if (FiftyCents != 0)
    {
        printf("Moedas de 50 centavos = %i\n", FiftyCents);
    }
    if (quarters != 0)
    {
        printf("Moedas de 25 centavos = %i\n", quarters);
    }
    if (dimes != 0)
    {
        printf("Moedas de 10 centavos = %i\n", dimes);
    }
    if (nickels != 0)
    {
        printf("Moedas de 5 centavos = %i\n", nickels);
    }
    if (pennies != 0)
    {
        // printf("Moedas de 1 centavo = %i\n", pennies);
    }

    printf("\n");
}
float get_charge(void)
{
    float Valor_Venda;
    float Valor_Pagamento;
    float troco;
    do
    {
        Valor_Venda = get_float("Valor da Venda: ");
        Valor_Pagamento = get_float("Valor do Pagamento: ");
        troco = Valor_Pagamento - Valor_Venda;
    }
    while (troco < 0);
    return troco;
}

int calculate_notas_100(float charge)
{
    int change_notas_100 = 1;
    int HowManyNotas100Used = 0;
    float Notas_100 = charge;
    while (Notas_100 > 99.9)
    {
        Notas_100 = charge - (change_notas_100 * 100);
        charge = charge - (change_notas_100 * 100);
        HowManyNotas100Used = HowManyNotas100Used + change_notas_100;
    }

    return HowManyNotas100Used;
}

int calculate_notas_50(float charge, int HowManyNotas100Used)
{
    float charge1 = charge - HowManyNotas100Used * 100;
    int change_notas_50 = 1;
    int HowManyNotas50Used = 0;
    float Notas_50 = charge1;
    while (Notas_50 > 49.9)
    {
        Notas_50 = charge1 - (change_notas_50 * 50);
        charge1 = charge1 - (change_notas_50 * 50);
        HowManyNotas50Used = HowManyNotas50Used + change_notas_50;
    }

    return HowManyNotas50Used;
}

int calculate_notas_20(float charge, int HowManyNotas100Used, int HowManyNotas50Used)
{
    float charge1 = charge - HowManyNotas100Used * 100 - HowManyNotas50Used * 50;
    int change_notas_20 = 1;
    int HowManyNotas20Used = 0;
    float Notas_20 = charge1;
    while (Notas_20 > 19.9)
    {
        Notas_20 = charge1 - (change_notas_20 * 20);
        charge1 = charge1 - (change_notas_20 * 20);
        HowManyNotas20Used = HowManyNotas20Used + change_notas_20;
    }

    return HowManyNotas20Used;
}

int calculate_notas_10(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used)
{
    float charge1 = charge - HowManyNotas100Used * 100 - HowManyNotas50Used * 50 - HowManyNotas20Used * 20;
    int change_notas_10 = 1;
    int HowManyNotas10Used = 0;
    float Notas_10 = charge1;
    while (Notas_10 > 9.9)
    {
        Notas_10 = charge1 - (change_notas_10 * 10);
        charge1 = charge1 - (change_notas_10 * 10);
        HowManyNotas10Used = HowManyNotas10Used + change_notas_10;
    }

    return HowManyNotas10Used;
}

int calculate_notas_5(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used, int HowManyNotas10Used)
{
    float charge1 =
        charge - HowManyNotas100Used * 100 - HowManyNotas50Used * 50 - HowManyNotas20Used * 20 - HowManyNotas10Used * 10;
    int change_notas_5 = 1;
    int HowManyNotas5Used = 0;
    float Notas_5 = charge1;
    while (Notas_5 > 4.9)
    {
        Notas_5 = charge1 - (change_notas_5 * 5);
        charge1 = charge1 - (change_notas_5 * 5);
        HowManyNotas5Used = HowManyNotas5Used + change_notas_5;
    }

    return HowManyNotas5Used;
}

int calculate_notas_2(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used, int HowManyNotas10Used,
                      int HowManyNotas5Used)
{
    float charge1 = charge - HowManyNotas100Used * 100 - HowManyNotas50Used * 50 - HowManyNotas20Used * 20 -
                    HowManyNotas10Used * 10 - HowManyNotas5Used * 5;
    int change_notas_2 = 1;
    int HowManyNotas2Used = 0;
    float Notas_2 = charge1;
    while (Notas_2 > 1.9)
    {
        Notas_2 = charge1 - (change_notas_2 * 2);
        charge1 = charge1 - (change_notas_2 * 2);
        HowManyNotas2Used = HowManyNotas2Used + change_notas_2;
    }

    //printf("Apos notas 2: %f", charge1);
    return HowManyNotas2Used;
}

float soma_notas(float charge, int HowManyNotas100Used, int HowManyNotas50Used, int HowManyNotas20Used, int HowManyNotas10Used,
                 int HowManyNotas5Used, int HowManyNotas2Used)
{
    double cents1 = charge - HowManyNotas100Used * 100 - HowManyNotas50Used * 50 - HowManyNotas20Used * 20 - HowManyNotas10Used * 10 -
                  HowManyNotas5Used * 5 - HowManyNotas2Used * 2;
    float cents = round(cents1 * 100)/100;
    //printf("\nApos notas: %f", cents);
    return cents;
}

int calculate_UmReal(float cents)
{
    int change_UmReal = 1;
    int HowManyUmRealUsed = 0;
    float UmReal = cents;
    while (UmReal > 0.9)
    {
        UmReal = cents - (change_UmReal * 1);
        cents = cents - (change_UmReal * 1);
        HowManyUmRealUsed = HowManyUmRealUsed + change_UmReal;
    }

    return HowManyUmRealUsed;
}

int calculate_Fiftycents(float cents, int HowManyUmRealUsed)
{
    float cents1 = cents - HowManyUmRealUsed * 1;
    int change_Fiftycents = 1;
    int HowManyFiftycentsUsed = 0;
    float Fiftycents = cents1;
    while (Fiftycents > 0.49)
    {
        Fiftycents = cents1 - (change_Fiftycents * 0.50);
        cents1 = cents1 - (change_Fiftycents * 0.50);
        HowManyFiftycentsUsed = HowManyFiftycentsUsed + change_Fiftycents;
    }

    return HowManyFiftycentsUsed;
}

int calculate_quarters(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed)
{
    float cents1 = cents - HowManyUmRealUsed * 1 - HowManyFiftycentsUsed * 0.50;
    int change_quarters = 1;
    int HowManyQuartersUsed = 0;
    float quarters = cents1;
    while (quarters > 0.24)
    {
        quarters = cents1 - (change_quarters * 0.25);
        cents1 = cents1 - (change_quarters * 0.25);
        HowManyQuartersUsed = HowManyQuartersUsed + change_quarters;
    }
    //printf("Apos 25 centavos: %f", cents1);
    return HowManyQuartersUsed;
}

int calculate_dimes(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed, int HowManyQuartersUsed)
{
    float cents1 = cents - HowManyUmRealUsed * 1 - HowManyFiftycentsUsed * 0.50 - HowManyQuartersUsed * 0.25;
    float dimes = cents1;
    int change_dimes = 1;
    int HowManyDimesUsed = 0;
    while (dimes > 0.09)
    {
        dimes = cents1 - (change_dimes * 0.10);
        cents1 = cents1 - (change_dimes * 0.10);
        HowManyDimesUsed = HowManyDimesUsed + change_dimes;
    }

    return HowManyDimesUsed;
}

int calculate_nickels(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed, int HowManyQuartersUsed, int HowManyDimesUsed)
{
    float cents2 =
        cents - HowManyUmRealUsed * 1 - HowManyFiftycentsUsed * 0.50 - HowManyQuartersUsed * 0.25 - HowManyDimesUsed * 0.10;
    float nickels = cents2;
    int change_nickels = 1;
    int HowManyNickelsUsed = 0;
    while (nickels > 0.04)
    {
        nickels = cents2 - (change_nickels * 0.05);
        cents2 = cents2 - (change_nickels * 0.05);
        HowManyNickelsUsed = HowManyNickelsUsed + change_nickels;
    }
    return HowManyNickelsUsed;
}

int calculate_pennies(float cents, int HowManyUmRealUsed, int HowManyFiftycentsUsed, int HowManyQuartersUsed, int HowManyDimesUsed,
                      int HowManyNickelsUsed)
{
    float cents3 = cents - HowManyUmRealUsed * 1 - HowManyFiftycentsUsed * 0.50 - HowManyQuartersUsed * 0.25 -
                   HowManyDimesUsed * 0.10 - HowManyNickelsUsed * 0.05;
    float pennies = cents3;
    int change_pennies = 1;
    int HowManyPenniesUsed = 0;
    while (pennies > 0)
    {
        pennies = cents3 - (change_pennies * 0.01);
        cents3 = cents3 - (change_pennies * 0.01);
        HowManyPenniesUsed = HowManyPenniesUsed + change_pennies;
    }
    return HowManyPenniesUsed;
}