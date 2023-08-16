#include <cs50.h>
#include <math.h>
#include <stdio.h>

void TabelaVerdade(int entradas, int linhas);

int main(void)
{
    int entradas = get_int("Qual o número de entradas? ");
    int linhas = pow(2, entradas);
    TabelaVerdade(entradas, linhas);
}

void TabelaVerdade(int entradas, int linhas)
{
    // for(int i = 0; i < linhas; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("0\n");
    //     }
    //     else
    //     {
    //        printf("1\n");
    //     }

    //     for ()

    // }

    int j = 0;
    do
    {
        int i = entradas;
        while (i > 0)
        {
            printf("A ");
            i--;
        }
        printf("\n");
        j++;
    }
    while (j < 5)
}
