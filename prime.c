#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

void IsPrime(int initial_number, int final_number);

int main(void)
{
    //IsPrime
    //GetNumbers
    int i = get_int("inicial: ");
    int f = get_int("final: ");
    IsPrime(i, f);
}

void IsPrime(int initial_number, int final_number)
{
    for (int i = initial_number; i < final_number; i++)
    {
        for (int j = i - 1; j > 1; j--)
        {
            int prime = (i % j);
        }

        //int prime = (i % 2) + (i % 3) + (i % 5) + (i % 7) + (i % 9);
        //if (prime =! 0 )

    }
}