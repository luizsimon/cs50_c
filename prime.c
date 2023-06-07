#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

void IsPrime(int initial_number, int final_number);
// void PrintNumber(int initial_number, int final_number);

int main(void)
{
    // IsPrime
    // GetNumbers
    int i = get_int("inicial: ");
    int f = get_int("final: ");
    // bool prime = IsPrime(i,f);

    IsPrime(i, f);
    //for (int m = i; m < f; m++)
    //{
    //    if (IsPrime(i, f))
    //    {
    //        // PrintNumber(i,f);
    //         printf("\n%i No Primo\n", m);
    //    }
    //    else
    //    {
    //        //PrintNumber(i, f);
    //        printf("\n%i Primo\n", m);
    //    }
    }

    // if (IsPrime(i, f))
    //{
    //      printf("- primo");
    // }
    //  else
    //{
    //      printf("- no primo");
    //  }


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
            // printf("\n\nj = %i\n\n", j);
        }
        while ((j > 1 && prime != 0)); //|| (i == j + 1)
        printf("i = %i  prime = %i\n", i, prime);
        if ((prime == 0) || (i > 3))
        {
            //return false;
        }

    }
    //return true;
}

// void PrintNumber(int initial_number, int final_number)
//{
//     for (int m = initial_number; m < final_number; m++)
//     {
//         printf("%i\n", m);
//     }
// }