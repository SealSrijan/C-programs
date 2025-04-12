#include <stdio.h>
int main()
{
    int num, sum=0, rem, k = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while(num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
        k++;
    }
    if(sum % (k-1) == 0)
    printf("%d is a Harshad Number.", temp);
    else
    printf("%d is not a Harshad Number.", temp);

    return 0;
}