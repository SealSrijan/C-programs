#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX], i,j,temp,num,arr,n;
    printf("Enter number of arrays: ");
    scanf("%d", &num);
    for(i = 0; i<num; i++)
    {
        printf("Enter array[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
     printf("Enter the position after which you want to enter a new array: ");
    scanf("%d",&arr);
    printf("Enter the new element: ");
    scanf("%d",&n);
    for(i = num-1; i>=arr; i--)
    {
        a[i]=a[i+1];
    }
    a[i]=n;
    printf("Array after insertion is: ");
    for(i = 0; i<num+1; i++)
    printf("%d ", a[i]);
return 0;
}