#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter a number: ");
    int num, rem, sum = 0;
    scanf("%d", &num);
    int temp = num;
    while (num != 1 && num != 4  && num != 0)
    {
        while (num != 0)
        {
            rem = num % 10;
            sum += (rem * rem);
            num /= 10;

        }
        num = sum;
        sum = 0;
    }

    if( num == 1)
    printf("%d is a Happy number.", temp);
    else if ( num == 4)
    printf("%d is an unhappy number.", temp);
    else
    printf("%d is a neutral number.", temp);

    return 0;
}