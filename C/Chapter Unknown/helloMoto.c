#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
    char a[max];
    printf("Enter your name: ");
    fgets(a, sizeof(a), stdin);
    int i;
    for(i = 0; a[i] != ' '; i++);
    printf(" Hello Mr %c.%c", a[0],a[i+1]);
    return 0;
}