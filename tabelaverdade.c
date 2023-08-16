#include <stdio.h>
#include <cs50.h>
#include <math.h>

int Entradas(void);

int main(void)
{
    Entradas();
}

int Entradas(void)
{
    int entradas = get_int("Qual o número de entradas? ");
    int linhas = 2^entradas;
    printf("Linhas = %i", linhas);
    return entradas ; linhas;
}

// void TabelaVerdade(int entradas, int linhas)
// {

// }

