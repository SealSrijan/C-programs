#include <stdio.h>
#include <math.h>
int main()
{
    int fact = 1, i, n;
    printf("Number: ");
    scanf("%d", &n);
    i = n;
    while (n >= i)
    {

            fact = n * (n - 1) ;
            printf("%d! = %d\n",n,fact);
            n-- ;

    }


}
