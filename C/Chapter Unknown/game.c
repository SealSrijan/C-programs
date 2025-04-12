#include <stdio.h>
int main()
{
   int num = 0, dig1, dig2, dig3;
   
   printf("Armstrong numbers are: ");
   
   while (num <= 500)   
   {

   dig1 = num % 1000 / 100;
   dig2 = num % 100 / 10;
   dig3 = num % 10 / 1;
      if (num == (dig1*dig1*dig1)+(dig2*dig2*dig2)+(dig3*dig3*dig3))
      printf("\n%d\n", num);
   

num ++;

   } 
   
   return 0;

}