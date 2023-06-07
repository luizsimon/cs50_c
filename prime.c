#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool IsPrime(int initial_number, int final_number);

int main(void)
{
    int minimum;
    int maximum;
    do
    {
        minimum = get_int("Minimum: ");
    }
    while (minimum <= 0);

    do
    {
        maximum = get_int("Maximum: ");
    }
    while (maximum <= minimum);


    for (int i = minimum; i <= maximum; i++)
    {
        if (i == 1)
        {

        }
        // RECEBE A INFO DO ISPRIME E VÊ SE É FALSE OU TRUE, SE FOR FALSE SIGNIFICA QUE É PRIMO E PRINTA NA TELA
        else if (IsPrime(i, maximum))
        {

        }
        else
        {
            printf("%i\n", i);
        }
    }
}

// funcao para definir se o numero é primo
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
    while ((j > 1 && prime != 0) || (i == j + 1 && i != 1)); // se tem &&, sendo uma delas falsa, todo o () é false. Se tem || pra ser falso todas precisam ser falso, senão é true

    // vai retornar true se NAO FOR PRIMO e false SE FOR PRIMO
    if ((prime == 0 && i > 3))
    {
        return true;
    }
    return false;
}
