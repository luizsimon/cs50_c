#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool IsPrime(int initial_number, int final_number);

int main(void)
{

    int minimum = get_int("Minimum: ");
    int maximum = get_int("Maximum: ");

    for (int i = minimum; i <= maximum; i++)
    {
        if (i == 1)
        {

        }
        else if (IsPrime(i, maximum))
        {

        }
        else
        {
            printf("%i\n", i);
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
    while ((j > 1 && prime != 0) ||  i != 1);

    if ((prime == 0 && i > 3))
    {
        return true;
    }
    return false;
}
