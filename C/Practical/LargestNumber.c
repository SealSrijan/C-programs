#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0,a,b,c;
    printf("Armstrong number b/w 1 to 1000: ");
    while (num<=1000)
    {
    a = num % 1000 / 100;
    b = num % 100 / 10;
    c = num % 10 / 1;

        if(num == pow(a,3) + pow(b,3) + pow(c,3))
        printf("\n%d is an Armstrong number.\n", num);

    num++;
    }
return 0;
}