#include <stdio.h>
int main()
{
    //Integer type

    printf("Enter a number: ");
    int x;
    scanf("%d", &x);
    if (x>0)
        printf("\n%d is +ve number", x);
    else if (x == 0)
        printf("\n%d is neither +ve nor -ve", x);
    else if (x<0)
        printf("\n%d is -ve number", x);


    //Decimal type

    printf("\n\nEnter a decimal number: ");
    float y;
    scanf("%f", &y);
    printf("A float number is %f",  y);
    printf("\nIt's exponential form is %e", y);
}
