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
    printf("\n");
    printf("A B C D E F");
    printf("\n");
    int j = linhas;
    while (j > 0)
    {
        int i = entradas;

        while (i > 0)
        {
            int x = pow(2, i);
            int y = pow(2, i - 1);
            if ((j % x) == 0 || (j % x) > y)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            i--;
        }
        printf("\n");
        j--;
    }
    printf("\n");
}
