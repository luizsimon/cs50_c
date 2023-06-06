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
    //IsPrime(i, f);
    if (IsPrime(i, f))
    {
         printf("- primo");
    }
     else
    {
         printf("- no primo");
     }
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

    int soma = 0;
    for (int i = initial_number; i < final_number; i++)
    {
        for (int j = 2; j < i; j++)
        {

            int prime = (i % j);

            if (prime == 0)
            {
                printf("\n%i - No Prime", i);
                return true;
                break;
            }
            else
            {
                printf("\n%i - Prime", i);
                return false;
                break;
            }
        }
        // printf("%i - é prime\n", i);

        printf("//");
    }
    // int prime = (i % 2) + (i % 3) + (i % 5) + (i % 7) + (i % 9);
    // if (prime =! 0 )
    return true;
}