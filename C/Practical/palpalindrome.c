#include <stdio.h> //Palpalindrome code

int main()
{
  int i, j, prime;
  int sum = 0, temp = 0;

  printf("All prime numbers from 1 to 500 are: \n");
  for (i = 2; i <= 500; i++) 
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
    int s;
    if (prime)
    {
      {
        temp = i;
        sum = 0;
        while(temp != 0)
    {
        s = temp %10;
        sum = (sum*10)+s;
        temp = temp/10;
    }
       }
    }
       if (i == sum)
    printf("%d\n", i);
  }

  return 0;
}