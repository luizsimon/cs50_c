#include <cs50.h>
#include <stdio.h>

int populacao_inicial(void);
int populacao_final(void);

int main(void)
{
    int pop_i = populacao_inicial();
    int pop_f = populacao_final();
    //printf("%i", pop_i);
    printf("%i", pop_f);
}

int populacao_inicial(void)
{
    int pop_i;
    do
    {
        pop_i = get_int("Qual o tamanho da população inicial? ");
    }
    while (pop_i < 9);
    return pop_i;
}

int populacao_final(void)
{
    int pop_f;
    int pop_i;
    do
    {
        pop_f = get_int("Qual o tamanho da população final? ");
    }
    while (pop_f < pop_i);
    return pop_f;
}


    // int i = 100;
    //  int f = 200;
    //  int y = 0;
    //  for (int i = 100; i < f; i = i + i/3 - i/4; y++)
    //  printf("Aninhos: %i\n", y);