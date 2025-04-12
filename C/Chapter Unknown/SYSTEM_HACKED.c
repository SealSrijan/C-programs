#include <stdio.h>
int main()
{
    int i,j,m, num, k;
    printf("Enter number to print the number of lines you want: ");
    scanf("%d", &num);
    for (;; m++)
    {
    for (i = 0; i<=num; i++)
    {
        k = 1;
        for (j = 1; j<= i+1; j++)
        printf("%d", k++);
    printf("\n");
    }
    int n,p,q;
    for( n = 1; n<= num; n++)
    {
        q = 1;
        for(p = num; p>= n; p--)
        printf("%d", q++);
    printf("\n");
    }
    }
    return 0;

}
