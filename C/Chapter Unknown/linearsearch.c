#include <stdio.h>
int main()
{
    int a[10];
    int i;
    for(i = 0; i<10; i++)
    {
        printf("Enter numbers: ");
        scanf("%d", &a[i]);
    }
    int num;
    printf("Enter number you want to search: ");
    scanf("%d", &num);
    for(i = 0; i<10; i++)
        if(a[i] == num)
        {
            printf("\nLinear search successful at %d", i+1);
            break;
        }
        else if(i == 9)
        printf("\nNot found!");
}