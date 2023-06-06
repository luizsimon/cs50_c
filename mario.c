#include <cs50.h>
#include <stdio.h>

int height(void);
void pyramid(int h);

int main(void)
{
    int h = height(); //funcao para definir a altura da piramide
    pyramid(h); //funcao p/ desenhar a piramide com input h
}

//funcao p/ usuario definir a altura da piramide
int height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 20);
    return height;
}

//funcao p/ desenhar a piramide recebendo o parametro h
void pyramid(int h)
{
    for (int linhas = 0; linhas < h; linhas++) //Add linhas
    {
        // lado esquerdo da piramide

        //Add espacos
        for (int espaco = h - linhas; espaco > 1; espaco--)
        {
            printf(" ");
        }
        //Add #
        for (int hash = 0; hash <= linhas; hash++)
        {
            printf("#");
        }

        // lado direito da piramide

        printf("  ");

        //Add #
        for (int hash = 0; hash <= linhas; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}