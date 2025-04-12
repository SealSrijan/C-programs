#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 digits separately: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", ((a*1000)+(b*100)+(c*10)+(d*1)));
}
