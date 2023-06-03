#include <stdio.h>
#include <cs50.h>

int populacao_inicial(pop_i);

int main(void)
{
    int pop_i = populacao_inicial();
}

int populacao_inicial(pop_i)
{
    int pop_i;
    do
  {
    pop_i = get_int("Qual o tamanho da população inicial? ");
  }
    while (pop_i < 9);
}





 //int i = 100;
   // int f = 200;
  //  int y = 0;
  //  for (int i = 100; i < f; i = i + i/3 - i/4; y++)
//  printf("Aninhos: %i\n", y);