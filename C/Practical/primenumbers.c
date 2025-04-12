//Prime Numbers

#include <stdio.h>
int main() 
{
  int i, j, prime;
  int x;
  scanf("%d", &x);
  printf("All prime numbers from 1 to 1000 are:\n");
  for (i = 2; i <= x; i++) 
  {
    prime = 1;
    for (j = 2; j <= i/2; j++) 
    {
      if (i % j == 0)
      {
        prime = 0;
        break;
      }
    }

    if (prime)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}