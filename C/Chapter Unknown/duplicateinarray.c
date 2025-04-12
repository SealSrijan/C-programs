#include <stdio.h>
#define max 100
int main()
{
    /*int a[max], i,j,temp,num,arr;
    printf("Enter number of arrays: ");
    scanf("%d", &num);
    for(i = 0; i<num; i++)
    {
        printf("Enter array[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
    int num;
    printf("Enter number you want to enter: ");
    scanf("%d", &num);
     printf("Enter the position which you want to enter: ");
    scanf("%d",&arr);
    for(i = arr-1; i<num; i++)
        a[i]=a[i+1];
    printf("Array after deletion is: ");
    for(i = 0; i<num-1; i++)
    printf("%d ", a[i]);
return 0;*/

int a[max], b[max], j = 0, temp = 0;
printf("Enter array size: ");
int size;
scanf("%d", &size);
for(int i = 0; i<size; i++)
{
    printf("Enter array[%d]: ", i);
    scanf("%d", &a[i]);
}
for(int i = 0; i<size; i++)
{
    for(int j = i+1; j<size; j++)
    {
        if(a[i] == a[j])
        {
            for(int k = j; k<size-1; k++)
            {
                a[k] = a[k+1];
            }
            size--;
            j--;

        }
    }
}
for(int i = 0; i< size; i++)
printf("%d ", a[i]);
}