#include <stdio.h>
#define max 100

int isprime(int n)
{
    for(int i =2; i<n; i++)
    {
        if(n % i == 0)
        return 0;
    }
    return 1;
}

int main()
{
    int num, sum = 0;
    int a[max];
    printf("Enter number: ");
    scanf("%d", &num);
    int i = 2,k = 0;
    for(i; i<=num; i++)
    {
        if(num % i == 0)
        {
            a[k] = i;
            k++;
        }
    }
    printf("Prime factors are: ");
for(int m = 0; m <= k-1; m++)
{
    if(isprime(a[m]))
    {
        printf("%d ", a[m]);
    }
    
}
printf("\n");
return 0;
}