//Selection Sort Method

#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX], i,j,temp,num;
    printf("Enter number of arrays: ");
    scanf("%d", &num);
    for(i = 0; i<num; i++)
    {
        printf("Enter array[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i<num-1; i++)
        for(j = i+1; j<num; j++)
{
    if (a[i]>a[j])
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
    printf("Sorted array is: ");
    for(i = num-1; i>0; i--)
    printf("%d ", a[i]);
return 0;
}