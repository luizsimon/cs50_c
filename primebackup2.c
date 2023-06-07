#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool IsPrime(int initial_number, int final_number);

int main(void)
{

    int i = get_int("inicial: ");
    int f = get_int("final: ");

    for (int m = i; m < f; m++)
    {
        if (IsPrime(m, f))
        {

        }
        else
        {

            printf("\n%i Primo\n", m);
        }
    }
}

bool IsPrime(int initial_number, int final_number)
{
    if

    int i = initial_number;
    int prime;
    int j = i;
    do
    {
        prime = (i % j);
        j--;
    }
    while ((j > 1 && prime != 0) || (i == j + 1 && i != 1));

    if ((prime == 0 && i > 3))
    {
        return true;
    }
    return false;
}
