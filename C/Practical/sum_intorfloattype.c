#include <stdio.h>
#include <math.h>
int main()
{
    float a,x;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &x);
    int b = a;
    int y = x;
    float c = a - b;
    float z = x - y;

    if((c != 0.000000)&&(z != 0.000000))
    printf("Sum is %f", a+x);
    else if ((c == 0.000000)&&(z == 0.000000))
    printf("Sum is %.0f", a+x);
    else
    printf("sum is %f", a+x);
    return 0;
}