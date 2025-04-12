#include <stdio.h>
int main()
{
    float x,y;
    printf("Enter 1st number: ");
    scanf("%f", &x);
    printf("Enter 2nd number: ");
    scanf("%f", &y);
    float sum = x+y;
    int sum1 = sum;
    printf("Decimal addition: %.2f", sum);
    printf("\nInteger addition: %d", sum1);
    return 0;
}