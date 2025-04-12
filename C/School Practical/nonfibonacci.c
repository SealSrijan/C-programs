#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0,temp;
    printf("Non-fibonacci numbers between 0 to 100 are: ");
    while(c <= 100)
    {
        c = a + b;
        a = b;
        b = c;
        temp=b;
        if(b>100)
            temp=101;
        for(int i = a+1; i<temp; i++)
            printf("%d ",i);
    }
}

