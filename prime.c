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

        do
        {
            int j = 1
            int prime = prime + (i % j);
            j++;
        }

        while (j >= i);

        if ((prime != 0))
        {
            printf("%i", i);
        }
    }

    // int prime = (i % 2) + (i % 3) + (i % 5) + (i % 7) + (i % 9);
    // if (prime =! 0 )
}
}