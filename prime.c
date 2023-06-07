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
    //     printf("\nPrimo\n");
    // }
    // else
    //{
    //     printf("\nNo Primo\n");
    // }

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
        int prime = 0;
        int j = i - 1;
        do
        {
            prime = (i % j);
            j--;
            printf("\n\nj = %i\n\n", j);
        }
        while (j > 2 || prime > 0);

        if (prime == 0 && i > 3)
        {
            printf("\ni = %i NO PRIMO\n", i);
            // return true;
        }
        else
        {
            printf("\ni = %i PRIMO\n", i);
        }
        // return false;
    }
}