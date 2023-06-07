#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool IsPrime(int initial_number, int final_number);

int main(void)
{
    // IsPrime
    // GetNumbers
    int i = get_int("inicial: ");
    int f = get_int("final: ");
    if (IsPrime(i, f))
    {
        printf("\nPrimo\n");
    }
    else
    {
        printf("\nNo Primo\n");
    }

    // if (IsPrime(i, f))
    //{
    //      printf("- primo");
    // }
    //  else
    //{
    //      printf("- no primo");
    //  }
}

bool IsPrime(int initial_number, int final_number)
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
        for (int j = i; j > 1; j--)
        {
            int prime = (i % j);

            if ((prime == 0) && (j != i))
            {
                break;
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}