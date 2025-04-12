#include <stdio.h>
#define DEVELOPER  "SRIJAN"
int main()
{
    // code for table calculator

    int number, i , x; // i = starting point of the table, x = ending point of the table
    printf("\nEnter the number whose table you want to know: ");
    scanf("%d", &number);
    printf("\nEnter starting point of the table: ");
    scanf("%d", &i);
    printf("\nEnter the ending point of the table: ");
    scanf("%d", &x);
    while (i <= x)
    {
        printf("\n \t%d x %d = %d" , number, i, number*i);
        i ++ ;
    }
    printf ("\n\ncode by %s\n", DEVELOPER);
    return 0;
}
