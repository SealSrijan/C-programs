#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int i,gcd;
    for(i = 1; i<=num1 && i<=num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        gcd=i;
    }
    printf("\nHCF: %d",gcd);
    int lcm = (num1*num2)/gcd;
    printf("\nLCM: %d", lcm);
    return 0;
}