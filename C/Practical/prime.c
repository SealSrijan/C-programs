#include <stdio.h>
int main()
{
    int num, i, j = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i = 2; i<= (num/2); i++)
    {
        if(num % i == 0)
        {
            j = 0;
            break;
        }
    }
    if(j)
    printf("%d is a prime number.", num);
    else
    printf("%d is non prime.", num);
    return 0;
}