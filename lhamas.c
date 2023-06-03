#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Whats your name? ");

    for (i=0; i<3; i++)
    printf("Hello, %s\n", s);
}

