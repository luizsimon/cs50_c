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
        int j = 1;
        do
        {
            int prime = (i % j);
            j++;

            if (prime == 0)
            {
                printf("\nI=%i\nJ=%i", i, j);
            }

        }
        while (j < i);

       // printf("//");
    }

    // int prime = (i % 2) + (i % 3) + (i % 5) + (i % 7) + (i % 9);
    // if (prime =! 0 )
}
