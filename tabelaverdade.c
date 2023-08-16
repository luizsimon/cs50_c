#include <stdio.h>
#include <cs50.h>

int Entradas(void);

int main(void)
{
    printf("testezinho");
    
}

int Entradas(void)
{
    int entradas = get_int("Qual o número de entradas? \n");
    return entradas;
}