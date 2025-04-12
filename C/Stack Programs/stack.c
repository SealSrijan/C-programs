#include <stdio.h>
int stack[3], top = -1;
void push(int item);
void pop();
void display();
int main()
{
    while(1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            if(top == 2)
            printf("STACK is overflowing");
            else{
                printf("Enter element: ");
                int a;
                scanf("%d", &a);
                push(a);
            }
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
            printf("Wrong entry.");
        }
    }
}

void push(int item)
{
    stack[++top] = item;
}

void pop()
{
    if(top == -1)
    printf("STACK is underflowing");
    else
    printf("The deleted item is %d", stack[top--]);
}

void display()
{
    if(top == -1)
    printf("STACK is underflowing");
    else  
    {
        for(int i = top; i>=0; i--)
        printf("%d ", stack[i]);
    }
}