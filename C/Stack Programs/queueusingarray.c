#include <stdio.h>
#define n 5
int a[n], front = -1, rear = -1;
int enq()
{
    if(rear == n)
        printf("Queue is overflowing.");
    else
        {
            printf("Enter element: ");
            scanf("%d", &a[++rear]);
        }
}
int deq()
{
    if(front == rear)
        printf("Queue is underflowing.");
    else
        printf("Deleted element is: %d", a[++front]);
}
int display()
{
    printf("Elements are: ");
    for(int i = front+1; i<=rear; i++)
        printf("%d ", a[i]);
}
int main()
{
    int ans;
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ans);

        switch(ans)
        {
            case 1:
            enq();
            break;

            case 2:
            deq();
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