#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
    /*//code to get and print string
    char a[20];
    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);
    puts(a);

    char c[]="Hello";
    char b[] = "World";
    puts(strcat(strcat(c," "),b));
    
    return 0;*/

    char a[max], b[max];
    printf("Enter a string: ");
    gets(a);
    strcpy(b,a);
    strrev(a);
    int x = strcmp(a,b);
    if(x)
    printf("%s is a not palindrome.");
    else
    printf("%s is a palindrome.");
}