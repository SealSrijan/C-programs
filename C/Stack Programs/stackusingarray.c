#include <stdio.h>
#define n 5
int a[n], top = -1;
int push()
{
    if(top == n)
        printf("Stack is overflowing");
    else
        {
            printf("Enter element: ");
            scanf("%d", &a[++top]);
        }
}
int pop()
{
    if(top == -1)
        printf("Stack is underflowing");
    else
        {
            printf("Deleted element is: %d", a[top--]);
        }
}
int display()
{
    printf("Elements in array are: ");
    for(int i = 0; i<=top; i++)
        printf("%d ", a[i]);
}
int main()
{
    int ans;
    while(1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &ans);

        switch(ans)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;

            default:
            printf("Wrong choice..");
        }
    }
}