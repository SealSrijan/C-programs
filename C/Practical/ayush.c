// 3) Positive or negative number

#include <stdio.h>
int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
   if (num > 0)
   printf("%d is a positive number.", num);
   else if (num < 0)
   printf("%d is a negative number.", num);
   else
   printf("%d is neither positive or negative.", num);
   return 0;
}