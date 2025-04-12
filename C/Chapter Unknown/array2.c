#include <stdio.h>
#define max 100
int main()
{
    int a[max], i, n, sum = 0;
    printf("Enter number of arrays: ");
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        printf("Enter value in array[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nSum of the array is %d", sum);
    return 0;
}