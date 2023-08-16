#include <stdio.h>
#include <cs50.h>

int Entradas(void);

int main(void)
{
    Entradas();
    printf("Linhas = %i", linhas);
}

int Entradas(void)
{
    int entradas = get_int("Qual o número de entradas? ");
    int linhas = 2 ^ entradas;
    return entradas ; linhas;
}

// void TabelaVerdade(int entradas, int linhas)
// {

// }

