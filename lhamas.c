#include <stdio.h>

int main(void)
{
    int i = 100;
    int f = 200;
    int y = 0;
    while (i < f)
  {
    i = i + i/3 - i/4;
    y++;
  }
  printf("Aninhos: %i\n", y);
}
