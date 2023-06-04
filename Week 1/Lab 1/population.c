#include <cs50.h>
#include <stdio.h>

int populacao_inicial(void);
int populacao_final(int pop_i);
int calculo(int pop_i, int pop_f);

int main(void)
{
    int pop_i = populacao_inicial();
    int pop_f = populacao_final(pop_i);
    int years = calculo(pop_i, pop_f);
    printf("Years: %i", years);
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

int populacao_final(int pop_i)
{
    int pop_f;
    do
    {
        pop_f = get_int("Qual o tamanho da população final? ");
    }
    while (pop_f < pop_i);
    return pop_f;
}

int calculo(int pop_i, int pop_f)
{
    int years = 0;
    while (pop_i < pop_f)
    {
        pop_i = pop_i + pop_i / 3 - pop_i / 4;
        years++;
    }
    return years;
}