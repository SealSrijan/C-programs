#include<stdio.h>
int q[3],f=-1,r=-1;
void e();
void d();
void dis();
int main()
{
    while(1)
    {
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter choice\n");
    int c;
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        e();
        break;
        case 2:
        d();
        break;
        case 3:
        dis();
        break;
        case 4:
        return 0;
        default:
        printf("wrong\n");
    }
    }
}

void e(int item)
{
    do
    {
    if(f==-1 && r==2)//normal case
        printf("overflow");
    else if(r==2)//resetting rear
    {
        r=-1;
        continue;//goes to the do part again
    }
    else//normal entry
    {
        printf("enter item\n");
        int n;
        scanf("%d",&n);
        q[++r]=n;
    }
    }while(0);
}

void d()
{
            if(f==r)
                printf("underflow");
            else
                printf("%d",q[++f]);
}

void dis()
{
    if(f<=r)//normal case
    {
        for(int i=f+1;i<=r;i++)
            printf("%d",q[i]);
    }
    else//abnormal case
    {
        for(int i=r;i<=f-1;i++)
            printf("%d",q[i]);
}
}