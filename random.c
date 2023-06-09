#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int i = 0;
   while (true)
   {
        i++;
        int x = get_int ("Fala um numero ai: ");
        printf("%i\n", i);
   }

   int x = get_int ("Fala um numero ai: ");
   printf("%i\n", i);
}