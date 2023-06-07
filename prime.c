#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

void IsPrime(int initial_number, int final_number);

int main(void)
{
    // IsPrime
    // GetNumbers
    int i = get_int("inicial: ");
    int f = get_int("final: ");
    IsPrime(i, f);

    // if (IsPrime(i, f))
    //{
    //      printf("- primo");
    // }
    //  else
    //{
    //      printf("- no primo");
    //  }
}

void IsPrime(int initial_number, int final_number)
{
    // if (initial_number == 1)
    //{
    //     int j = 1;
    // }
    // else
    //{
    //     int j = initial_number - 1;
    // }

    for (int i = initial_number; i < final_number; i++)
    {
        int soma = 0;
        //int prime = 0;
        for (int j = i; j > 1; j--)
        {
            int prime = (i % j);
            soma = soma + prime;
            printf("\n\nPRIME = %i\n\n", prime);
        }
        printf("i = %i  Soma = %i", i, soma);
        printf("\n//\n");
    }
}