#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool IsPrime(int initial_number, int final_number);

int main(void)
{

    int i = get_int("Minimum: ");
    int f = get_int("Maximum: ");

    for (int m = i; m <= f; m++)
    {
        if (m == 1)
        {

        }
        else if (IsPrime(m, f))
        {

        }
        else
        {
            printf("%i\n", m);
        }
    }
}

bool IsPrime(int initial_number, int final_number)
{
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
