// Palindrome Numbers

#include <stdio.h>
int main()
{
    int num = 0, sum = 0, temp = 0;
    int s;
    for(num = 1; num<=1000; num++)
    {
        temp = num;
        sum = 0;
        while(temp != 0)
    {
        s = temp %10;
        sum = (sum*10)+s;
        temp = temp/10;
    }
    if (num == sum)
    printf("%d ", num);
    }
return 0;
}
