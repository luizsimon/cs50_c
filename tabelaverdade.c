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
    int linhas = pow(2, entradas);
    return entradas ; linhas;
}

void TabelaVerdade(int entradas, int linhas)
{
    for(int i = 0; i < entradas; i++)
    {
        
    }
}

