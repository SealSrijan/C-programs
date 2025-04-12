#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    fgets(name, sizeof(name), stdin);
    printf("%c", name[0]); 
    int i;
    for(i = 0; name[i] != ' '; i++);
    printf(" %c", name[i+1]);   
}