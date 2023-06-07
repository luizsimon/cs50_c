#include <stdio.h>
#include <cs50.h>

void PrintXadrez(int tamanho);
int TamanhoXadrez(void);

int main(void)
{
    int tabuleiro = TamanhoXadrez();
    PrintXadrez(tabuleiro);
}

int TamanhoXadrez(void)
{
    int tamanho;
    do
    {
       tamanho = get_int("Qual o tamanho do tabuleiro? ");
    }
    while (tamanho % 2 != 0);
    return tamanho;
}

void PrintXadrez(int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int j = 0;
        do
        {
            if (j % 2 == 0)
            {
                printf("*#");
                j++;
            }
            else
            {
                 printf("#*");
                j++;
            }
        }
        while (j < tamanho/2);

        printf("\n");
    }
}