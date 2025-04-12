#include <stdio.h>
int fibo(int a,int b,int num);
int main()
{
    int a=0,b=1,c,i,num;
    printf("enter size: ");
    scanf("%d",&num);
    printf("\n%d %d ",a,b);
    fibo(a,b,num);
    printf("Finished!");
    return 0;
}
    int fibo(int a,int b,int num)
    {
        int c;
        if(num>2)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
            num--;
            fibo(a,b,num);
}
}