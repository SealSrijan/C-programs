#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter: ");
    char name[0];
    char ans;
    printf("y/n ");
    scanf("%c", &ans);
    if(ans == 'y')
    {
    gets(name);
    puts(name);
    }
    else
    printf("Wrong");
    return 0;
}