#include <stdio.h>
#define max 100
int main()
{
    int a[max], n;
    printf("Enter number of elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i<n; i++)
    scanf("%d", &a[i]);
    int num;
    printf("Enter element you want to search: ");
    scanf("%d", &num);
    for(int i = 0; i<n; i++)
    {
        if(a[i] == num)
        {
            printf("%d is found at %d place.", num, i+1);
            break;
        }
          
    }
}