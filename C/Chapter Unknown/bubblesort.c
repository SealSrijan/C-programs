#include <stdio.h>
int main()
{
    int a[10], temp;
    for(int i = 0; i<10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    for(int i = 1; i<10; i++)
    {
        for(int j = 0; j<(10-i); j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted elements are: ");
    for(int i = 0; i<10; i++)
    printf("%d ", a[i]);
    return 0;
}