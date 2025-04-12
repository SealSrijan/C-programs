#include <stdio.h>
int main()
{
    while(1)
    {
        int ans;
        printf("Enter choice: ");
        scanf("%d", &ans);

        switch(ans)
        {
            case 1:
            int push();

            case 2:
            int pop();

            case 3:
            int display();

            case 0:
            return 0;

            default:
            printf("Wrong Entry");
        }
    }
    int n, top = -1;
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    int arr[n];
}

int push(int n,int top, int arr[])
{
    if( top == n-1)
    printf("Stack is overflowing");
    else
    {
        int item;
        scanf("%d", &item);
        arr[++top] = item;
    }
}

int pop(int top, int arr[])
{
    if(top == -1)
    printf("Stack is underflowing.");
    else
    printf("Popped element is %d", arr[top--]);
}

int display(int top, int n, int arr[])
{
    for(top; top<n; top++)
    printf("%d ", arr[top]);
}