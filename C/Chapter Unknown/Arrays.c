//Number of duplicate elements in an array

#include <stdio.h>
#define max 100
int main()
{
    int len;
    printf("Enter length of string: ");
    scanf("%d", &len);
    int a[max], i,j, c = 0;
    for(i = 0; i<len; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nRepeated elements are: ");
    for(i = 0; i<len; i++)
    {
        for(j = i+1; j<len; j++)
        {
            if(a[i] == a[j])
                {
                    printf("%d, ", a[j]);
                    c++;
                    break;
                }
        }
    }
    
    printf("\nNumber of Repeated element in the array is %d", c);
    return 0;
}