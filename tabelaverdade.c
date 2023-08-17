#include <cs50.h>
#include <math.h>
#include <stdio.h>

void TabelaVerdade(int entradas, int linhas);

int main(void)
{
    int entradas = get_int("Qual o número de entradas? ");
    int linhas = pow(2, entradas);
    TabelaVerdade(entradas, linhas);

    return 0;
}

void TabelaVerdade(int entradas, int linhas)
{
    printf("\n");

    char CabecalhoColuna = 'A';

    for (int i = 0; i < entradas; i++)
    {
        printf("%c  ", CabecalhoColuna++);
    }

    printf ("\n");

    // for (int i = 0; i < entradas; i++)
    // {
    //     printf("-|");
    // }

    // printf ("\n");

    // printf ("A B C D E F");
    // printf ("\n");
    int j = linhas;
    while (j > 0)                       // aqui o i = a posicao do numero e o j = a linha
    {
        int i = entradas;

        while (i > 0)
        {
            int x = pow(2, i);
            int y = pow(2, i-1);
            // no if, verica se a linha (j) dividida por 2^i (posição) é 0 ou é maior que 2^(i-1)
            if ((j % x) == 0 || (j % x) > y)
            {
                printf("0  ");
            }
            else
            {
                printf("1  ");
            }
            i--;
        }
        printf("\n");
        j--;
    }
    printf ("\n");
}
