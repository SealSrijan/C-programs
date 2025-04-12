#include <stdio.h>
int main()
{
    int max = 5, a[max], top = -1;
    int ans;
    while(1){
    printf("Enter your choice: ");
    scanf("%d", &ans);
    switch(ans)
    {
        case 1:
        {
            if(top == max - 1)
            printf("Stack is overflowing.\n");
            else{
                printf("Enter item: ");
                int item;
                scanf("%d", &item);
                a[++top] = item;
            }
        }
        break;

        case 2:
        {
            if(top == -1)
            printf("Stack is underflowing.\n");
            else
                printf("%d\n", a[top--]);
        }
        break;

        case 3:
        {
            for(int i = 0; i<=top; i++)
            printf("%d ",a[i]);
        }
        printf("\n");
        break;

        default:
        printf("Wrong input.\n");
        break;
    }
}
}