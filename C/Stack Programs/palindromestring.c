#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int flag = 0;
    gets(str);
    int x = strlen(str);
    for(int i = 0; i<x/2; i++)
    {
        if(str[i] == str[--x])
            flag = 1;
        else 
            {
                flag = 0;
                break;
            }
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not palindrome.");
}