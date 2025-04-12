#include <stdio.h>
#define max 100
int a[max];
int linearsearch(int n)
{
    int num, flag = 0;
    printf("Enter number you want to search: ");
    scanf("%d", &num);
    for(int i = 0; i<n; i++)
    {
        if(a[i] == num)
        {
            printf("Found at %d place", i+1);
        return 0;
        }
     
    }
    printf("Not found");
    
}
int main()
{
    printf("Enter number of elements you want to add: ");
    int n;
    scanf("%d", &n);
    for(int i = 0; i<=n; i++)
    {
        printf("Enter: ");
        scanf("%d", &a[i]);
    }
    while(1)
    {
        printf("\nEnter your choice\n1.Linear Search\n2.Binary Search\nEnter: ");
        int ans;
        scanf("%d", &ans);
        
        switch (ans)
        {
        case 1:
            linearsearch(n);
            break;

        default:
            printf("Wrong choice!");
        }
    }
}