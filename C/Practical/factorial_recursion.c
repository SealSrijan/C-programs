#include <stdio.h>
int factorial();
int main()
{
    printf("Enter number whose factorial you want to know: ");
    int num, fact = 1;
    scanf("%d", &num);
    while(num != 1)
    {
        factorial;
    }
    printf("%d!: %d", num, fact);
    return 0;
}
int factorial(int num, int fact)
{
    fact = num * (num - 1);
}
