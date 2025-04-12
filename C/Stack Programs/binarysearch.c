#include <stdio.h>
int main()
{
    int a[10], u = 9, l = 0, mid;
    for(int i = 0; i<10; i++)
    scanf("%d",&a[i]);
    int num;
    printf("enter the number you want to search: ");
    scanf("%d", &num);
    while(l<=u)
    {
        mid = (l + u)/2;

        if(a[mid] == num)
        {
            printf("Found at %d", mid+1);
            break;
        }
        else if(num>mid)
            {
                l = mid+1;
            }
        else if(num <mid)
            u = mid -1;
    }
    if(l>u)
        printf("Not found! %c", 2);
}